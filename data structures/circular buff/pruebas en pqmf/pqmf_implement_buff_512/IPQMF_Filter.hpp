//
//  IPQMF_Filter.hpp
//  pqmf_implement_buff_512
//
//  Created by MAC on 3/13/19.
//  Copyright © 2019 MAC. All rights reserved.
//

#ifndef IPQMF_Filter_hpp
#define IPQMF_Filter_hpp
#include <iostream>
#include <stdio.h>
#include <math.h>

extern float d[512];

class IPQMF_Filter{
public:
    
    IPQMF_Filter(){
        memset(v, 0, sizeof(v));
        memset(u, 0, sizeof(u));
        memset(w, 0, sizeof(w));
        part_sum = 0;
        part_sum2 = 0;
        block_index = 0;
        jj = 0;
    };
    
    ~IPQMF_Filter(){};
    
    float *IPQMF_Filtering(float y[]);
    
private:
    int block_index, jj;
    
    float v[1024];
    float u[512];
    float w[512];
    
    float part_sum, part_sum2;
};

#endif /* IPQMF_Filter_hpp */
