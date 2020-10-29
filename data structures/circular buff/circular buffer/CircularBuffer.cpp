/*
  ==============================================================================

    CircularBuffer.cpp
    Created: 21 Feb 2019 11:30:32pm
    Author:  MAC

  ==============================================================================
*/

#include "CircularBuffer.h"

void CircularBuffer::setSize(int tamano){
    size = tamano;
}

void CircularBuffer::setArray(float array[]){
    circuBuffer = array;
}

void CircularBuffer::addSample(float n){
    sample = n;
    if(full){
        std::cout<< "esta lleno el buffer" << std::endl;
    }else{
        circuBuffer[tail] = sample;
        //std::cout<<tail<<std::endl;
        tail = (tail + 1) % size;
        
    }
}
float CircularBuffer::returnSamples(){
    return *circuBuffer;
}

void CircularBuffer::deleteSample(){
    sample = 0;
    if (empty){
        std::cout<< "esta vacio el buffer" << std::endl;
    }else{
        circuBuffer[head] = sample;
        head = (head + 1) % size;
        sample = circuBuffer[head];
    }
}
