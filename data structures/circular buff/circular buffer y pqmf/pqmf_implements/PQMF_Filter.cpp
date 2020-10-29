//
//  PQMF_Filter.cpp
//  pqmf_implements
//
//  Created by MAC on 3/8/19.
//  Copyright © 2019 MAC. All rights reserved.
//

#include "PQMF_Filter.hpp"

float *PQMF_Filter::PQMF_Filtering(float x[]){
    
    for (int i = 0; i < 32; i++)
        z[i] = c[i] * x[i];
    
    for (int i = 0; i < 32; i++)
        std::cout << "z[" << i << "] = " << z[i] << std::endl;
    std::cout << "" << std::endl;

    for (auto r = 0; r < 4; r++) {
        part_sum = 0;
        for (auto j = 0; j < 8; j++){
            part_sum = part_sum + z[r + 4*j];
            std::cout << "z[" << r+4*j << "] = " << z[r + 4*j] << std::endl;
        }
        s[r] = part_sum;
    }
    
    std::cout << "" << std::endl;
    for (int i = 0; i < 4; i++)
        std::cout << "s[" << i << "] = " << s[i] << std::endl;
    std::cout << "" << std::endl;

    static float y[2];
    for (auto k = 0; k < 2; k++) {
        part_sum2 = 0;
        for (auto r = 0; r < 4; r++) {
            part_sum2 = part_sum2 + cos((k+0.5)*(r-1)*(M_PI/2)) * s[r];
        }
        y[k] = part_sum2;
    }
    
    return y;
}
