/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    // Make sure you set the size of the component after
    // you add any child components.
    setSize (800, 600);

    // specify the number of input and output channels that we want to open
    setAudioChannels (2, 2);
}

MainComponent::~MainComponent()
{
    // This shuts down the audio device and clears the audio source.
    shutdownAudio();
}

//==============================================================================
void MainComponent::prepareToPlay (int samplesPerBlockExpected, double sampleRate){
    x.setBufferSize(512);
}

void MainComponent::getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill){

    auto* leftbuffer  = bufferToFill.buffer->getWritePointer (0, bufferToFill.startSample);
    auto* rightbuffer  = bufferToFill.buffer->getWritePointer (1, bufferToFill.startSample);
    
    if (bufferToFill.buffer->getNumChannels() > 0){
        auto* audioData = bufferToFill.buffer->getReadPointer (0, bufferToFill.startSample);
        
        for(int blockIdex = 0; blockIdex < 16; blockIdex++){
            //Indexación de a 32 muestras en el buffer circular.
            for (int i = 0; i < 32; i++)
                x.addSample(audioData[i + blockIdex*32]);
            
            //Procesamiento del buffer circular con el PQMF y el IPQMF.
            output_sintesis = IPQMF_processor.IPQMF_Filtering(PQMF_processor.PQMF_Filtering(x.buffer));
            
            //Indexación de la señal reconstruida de a bloques de 32 hasta llenarse a bufferToFill.numSamples
            for(int n = 0; n < 32; n++)
                recons_signal[n + blockIdex*32] = *(output_sintesis + n);
        }
        
        //Corrección por promediación de las últimas muestras de cada sálida y[32] de síntesis:
        for (int i = 31; i < bufferToFill.numSamples; i+=32) {
            if (i == bufferToFill.numSamples - 1) {
                recons_signal[i] = recons_signal[i-1];
                break;
            }else{
                recons_signal[i] = 0.5*(recons_signal[i-1] + recons_signal[i+1]);
            }
        }
        //Indexación de la señal reconstruida en el buffer de salida:
        for (auto n = 0; n < bufferToFill.numSamples; n++){
            leftbuffer [n] = recons_signal[n];
            rightbuffer[n] = leftbuffer[n];
        }

    }
}

void MainComponent::releaseResources()
{
    // This will be called when the audio device stops, or when it is being
    // restarted due to a setting change.

    // For more details, see the help for AudioProcessor::releaseResources()
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    // You can add your drawing code here!
}

void MainComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
