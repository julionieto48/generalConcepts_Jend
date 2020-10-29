/*
  ==============================================================================

    CircularBuffer.h
    Created: 21 Feb 2019 11:30:32pm
    Author:  MAC

  ==============================================================================
*/

#pragma once
#include <iostream>

class CircularBuffer{
public:
    CircularBuffer(): head(0), tail(0){}
    
    void setSize(int tamano);
    void setArray(float array[]);
    void addSample(float n);
    float returnSamples();
    void deleteSample();
    
    bool fullArray(){
        if(head == (tail + 1) % size){
            full = true;
        }else{
            full = false;
        }
        return full;
    }
    
    bool emptyArray(){
        if(head == tail){
            empty = true;
        }else{
            empty = false;
        }
        return empty;
    }
    
private:
    int head, tail, size;
    bool full{false}, empty{false};
    float *circuBuffer, sample;
};
