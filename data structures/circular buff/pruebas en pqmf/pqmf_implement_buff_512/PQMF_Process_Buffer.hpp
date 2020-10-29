//
//  PQMF_Process_Buffer.hpp
//  pqmf_implements
//
//  Created by MAC on 3/8/19.
//  Copyright © 2019 MAC. All rights reserved.
//


#include <stdio.h>
#include <iostream>

#ifndef PQMF_Process_Buffer_hpp
#define PQMF_Process_Buffer_hpp

class PQMF_Process_Buffer{
public:
    PQMF_Process_Buffer();
    ~PQMF_Process_Buffer();
    
    void  clear();
    void  setBufferSize(int size);
    void  addSample(float sample);
    
    float *buffer;
private:
    int index, i = 0;
    int bufferSize;
};

#endif /* PQMF_Process_Buffer_hpp */
