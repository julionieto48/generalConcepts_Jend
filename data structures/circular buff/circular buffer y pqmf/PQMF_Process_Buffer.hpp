//
//  PQMF_Process_Buffer.hpp
//  pqmf_implements
//
//  Created by MAC on 3/8/19.
//  Copyright © 2019 MAC. All rights reserved.
//

#ifndef PQMF_Process_Buffer_hpp
#define PQMF_Process_Buffer_hpp

#include <stdio.h>
#include <iostream>

class PQMF_Process{
public:
    PQMF_Process();
    ~PQMF_Process();
    
    void  clear();
    void  setBufferSize(int size);
    void  addSample(float sample);
    float evaluateBuffer(int indice);
    
    void internalPrint(){
        for (int i = 0; i < bufferSize; i++)
            std::cout << "buffer[" << i << "] = " << buffer[i] << std::endl;
    }
    
    float *buffer;
private:
    int index, i = 0;
    int bufferSize;
};

#endif /* PQMF_Process_Buffer_hpp */
