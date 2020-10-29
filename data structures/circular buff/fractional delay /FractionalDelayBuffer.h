//
//  delayLine.hpp
//  FlangerDSP - App
//
//  Created by Tomás Sarmiento on 25/05/18.
//

#ifndef FRACTIONALDELAYBUFFER_H_INCLUDED
#define FRACTIONALDELAYBUFFER_H_INCLUDED

#include <stdio.h>
#include <iostream>

class FractionalDelayBuffer{
public:
    FractionalDelayBuffer()
    ~FractionalDelayBuffer();
    
    void  clear();
    void  setBufferSize(int size);
    void  addSample(float sample);
    int   getValidIndex(int index);
    float getSample(float sampleIndex);
    float linearInterpolate(float* buffer, int bufferSize, int bufferPosition);
    float operator[](float index) {return getSample(index);}
    
private:
    int index;
    int bufferSize;
    float *buffer;
};

#endif // FRACTIONALDELAYBUFFER_H_INCLUDED
