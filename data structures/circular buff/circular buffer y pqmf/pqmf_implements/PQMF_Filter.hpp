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

extern float c[10];
#include "PQMF_Process_Buffer.hpp"

#include <stdio.h>

class PQMF_Filter{
    
public:
    PQMF_Filter(){
        memset(z, 0, sizeof(z));
        memset(s, 0, sizeof(s));
        part_sum = 0;
        part_sum2 = 0;
    };
    ~PQMF_Filter(){
        
    };
    
    float *PQMF_Filtering(float x[]);
    
private:
    float z[32];
    float s[4];
    float part_sum, part_sum2;
};


#endif /* PQMF_Filter_hpp */
