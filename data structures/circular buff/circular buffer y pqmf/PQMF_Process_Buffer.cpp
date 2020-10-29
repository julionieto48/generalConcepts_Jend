//
//  PQMF_Process_Buffer.cpp
//  pqmf_implements
//
//  Created by MAC on 3/8/19.
//  Copyright © 2019 MAC. All rights reserved.
//

#include "PQMF_Process_Buffer.hpp"

#include "math.h"

PQMF_Process::PQMF_Process(){
    bufferSize = 0; index = 0; buffer = NULL;
}
PQMF_Process::~PQMF_Process(){
    if (buffer) {delete [] buffer;} //libera espacio en bytes utilizados anteriormente
}
void PQMF_Process::clear(){
    memset(buffer, 0, bufferSize*sizeof(float));
}
void PQMF_Process::setBufferSize(int size){
    if (buffer) {delete [] buffer;}
    bufferSize = size;
    index = bufferSize - 1;
    buffer = new float[bufferSize]; //buffer es el arreglo
    clear();
}
void PQMF_Process::addSample(float sample){
    buffer[index] = sample;
    //std::cout << "buffer[" << index << "] = " << buffer[index] << std::endl;
    if (index == 0){index = bufferSize;}
    index --;
}

float PQMF_Process::evaluateBuffer(int indice){
    return buffer[indice];
}
