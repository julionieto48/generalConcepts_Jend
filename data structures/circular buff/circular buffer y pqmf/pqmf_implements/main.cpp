//
//  main.cpp
//  pqmf_implements
//
//  Created by MAC on 3/8/19.
//  Copyright © 2019 MAC. All rights reserved.
//

#include <iostream>
#include "PQMF_Process_Buffer.hpp"
#include "PQMF_Filter.hpp"


int main() {

    for(int i = 0; i < 32; i++){std::cout << "c[" << i << "] = " << c[i] << std::endl;}
    
    float a[32];
    for(int i = 1; i < 33; i++)
        a[i-1] = i;
    
    for(int i = 0; i < 32; i++){std::cout << "a[" << i << "] = " << a[i] << std::endl;}
    
    
    PQMF_Process x;
    x.setBufferSize(32);
    
    for(int j = 0; j < 16; j++){
        
        for (int i = 0; i < 2; i++) {
            x.addSample(a[i +j*2]);
        }
        x.internalPrint();
        
        PQMF_Filter processor;
        float * output;
        output = processor.PQMF_Filtering(x.buffer);
        for(int i = 0; i < 2; i++){std::cout << "y[" << i << "] = " << *(output + i) << std::endl;}
    }
}





