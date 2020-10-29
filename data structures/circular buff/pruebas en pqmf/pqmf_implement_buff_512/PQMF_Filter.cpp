//
//  PQMF_Filter.cpp
//  pqmf_implements
//
//  Created by MAC on 3/8/19.
//  Copyright © 2019 MAC. All rights reserved.
//

#include "PQMF_Filter.hpp"

float *PQMF_Filter::PQMF_Filtering(float x[]){
    
    block_index %= 16;
    
    jj = 0;
    for(int i = 0; i < 512; i++) {
        jj = i + 480 - block_index*32;
        if (i >= 32*(block_index + 1)){
            jj = i - 32*(block_index + 1);
        }
        z[i] = c[i] * x[jj];
    }
    block_index++;
    /*
    for (int i = 0; i < 512; i++)
        z[i] = c[i] * x[i];
    */

    
    for (auto r = 0; r < 64; r++) {
        part_sum = 0;
        for (auto j = 0; j < 8; j++){
            part_sum = part_sum + z[r + 64*j];
        }
        s[r] = part_sum;
    }

    static float y[32];
    for (auto k = 0; k < 32; k++) {
        part_sum2 = 0;
        for (auto r = 0; r < 64; r++) {
            part_sum2 = part_sum2 + cos((k+0.5)*(r-16)*(M_PI/32.0)) * s[r];
        }
        y[k] = part_sum2;
    }

    
    
    return y;
}
