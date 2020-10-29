//
//  IPQMF_Filter.cpp
//  pqmf_implement_buff_512
//
//  Created by MAC on 3/13/19.
//  Copyright © 2019 MAC. All rights reserved.
//

#include "IPQMF_Filter.hpp"

float *IPQMF_Filter::IPQMF_Filtering(float y[]){
    
    for(int i = 1023; i >= 64; i--)
        v[i] = v[i - 64];

    for (auto i = 0; i < 64; i++) {
        part_sum = 0;
        for (auto k = 0; k < 32; k++) {
            part_sum += cos((k+0.5)*(i+16)*(M_PI/32)) * y[k];
        }
        v[i] = part_sum;
    }
    
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 32; j++){
            u[64*i+j]    = v[128*i + j];
            u[64*i+32+j] = v[128*i + 96 + j];
        }
    }
    
    for (int i = 0; i < 512; i++){
        w[i] = d[i] * u[i];
    }
    
    static float x[32];
    
    for (int j = 0; j < 32; j++){
        part_sum2 = 0;
        for (auto i = 0; i < 16; i++) {
            part_sum2 += w[j + 32*i];
        }
        x[j] = part_sum2;
    }
    
    
    return x;
    
}
