//
//  delayLine.cpp
//  FlangerDSP - App
//
//  Created by Tomás Sarmiento on 25/05/18.
//

#include "FractionalDelayBuffer.h"
#include "math.h"

FractionalDelayBuffer::FractionalDelayBuffer(){
    index = 0;
    bufferSize = 0;
    buffer = NULL;
}

FractionalDelayBuffer::~FractionalDelayBuffer(){
    if (buffer) {
        delete [] buffer; //libera espacio en bytes utilizados anteriormente
    }
}

void FractionalDelayBuffer::clear(){
    memset(buffer, 0, bufferSize*sizeof(float));
    
}

void FractionalDelayBuffer::setBufferSize(int size){
    if (buffer) {
        delete [] buffer;
    }
    bufferSize = size;
    buffer = new float[bufferSize]; //buffer es el arreglo
    clear();
}

void FractionalDelayBuffer::addSample(float sample){
    index = getValidIndex(index);
    buffer[index] = sample;
    index++;
}

int FractionalDelayBuffer::getValidIndex(int index) {
    return index % (bufferSize); //0 <= index < bufferSi<e
}


float FractionalDelayBuffer::getSample(float sampleIndex){
    
    float localIndex = (float)index - sampleIndex;
    
    if   (localIndex >= bufferSize) {
        localIndex -= bufferSize;
    }
    
    if  (localIndex < 0) {
        localIndex += bufferSize;
    }
    
    return linearInterpolate(buffer, bufferSize, localIndex);
    
}

float FractionalDelayBuffer::linearInterpolate(float *buffer, int bufferSize, int bufferPosition){
    int lower = (int) bufferPosition;
    int upper = lower + 1;
    if (upper == bufferSize)
        upper = 0;
    float difference = bufferPosition - lower;
    
    return (buffer[upper] * difference) + (buffer[lower] * (float (1) - difference));
    //return buffer[upper];
}

