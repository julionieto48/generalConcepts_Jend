//
//  PQMF_Process_Buffer.cpp
//  pqmf_implements
//
//  Created by MAC on 3/8/19.
//  Copyright © 2019 MAC. All rights reserved.
//

#include "PQMF_Process_Buffer.hpp"

#include "math.h"

PQMF_Process_Buffer::PQMF_Process_Buffer(){
    bufferSize = 0; index = 0; buffer = NULL;
}
PQMF_Process_Buffer::~PQMF_Process_Buffer(){
    if (buffer) {delete [] buffer;} //libera espacio en bytes utilizados anteriormente
}

void PQMF_Process_Buffer::setBufferSize(int size){
    if (buffer) {delete [] buffer;}
    bufferSize = size;
    index = bufferSize - 1;
    buffer = new float[bufferSize]; //buffer es el arreglo
    clear();
}

void PQMF_Process_Buffer::clear(){
    memset(buffer, 0, bufferSize*sizeof(float));
}

void PQMF_Process_Buffer::addSample(float sample){
    buffer[index] = sample;
    if (index == 0){index = bufferSize;}
    index --;
}
