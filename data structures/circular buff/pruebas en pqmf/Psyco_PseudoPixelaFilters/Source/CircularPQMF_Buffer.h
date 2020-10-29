/*
  ==============================================================================

    CircularPQMF_Buffer.h
    Created: 4 Apr 2019 10:38:43pm
    Author:  MAC

  ==============================================================================
*/

#pragma once

#include <stdio.h>
#include <iostream>
#include "math.h"

class CircularPQMF_Buffer{
public:
    CircularPQMF_Buffer();
    ~CircularPQMF_Buffer();
    
    void  clear();
    void  setBufferSize(int size);
    void  addSample(float sample);
    float evaluateBuffer(int indice);
    
    void internalPrint(){
        for (int i = 0; i < bufferSize; i++)std::cout << "buffer[" << i << "] = " << buffer[i] << std::endl;
    }
    
    float *buffer;
private:
    int index, i = 0;
    int bufferSize;
};
