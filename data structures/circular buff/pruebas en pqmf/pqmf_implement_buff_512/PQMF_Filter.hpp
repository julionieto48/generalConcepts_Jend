//
//  PQMF_Filter.hpp
//  pqmf_implements
//
//  Created by MAC on 3/8/19.
//  Copyright © 2019 MAC. All rights reserved.
//

#ifndef PQMF_Filter_hpp
#define PQMF_Filter_hpp
#include <math.h>
#include <cstring>
#include <iostream>

extern float c[512];

class PQMF_Filter{
public:
    PQMF_Filter(){
        memset(z, 0, sizeof(z));
        memset(s, 0, sizeof(s));
        part_sum = 0;
        part_sum2 = 0;
        block_index = 0;
        jj = 0;
    };
    ~PQMF_Filter(){
        
    };
    
    float *PQMF_Filtering(float x[]);
    
private:
    int block_index, jj;
    float z[512];
    float s[64];
    float part_sum, part_sum2;
};


#endif /* PQMF_Filter_hpp */
