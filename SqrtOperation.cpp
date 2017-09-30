//
//  SqrtOperation.cpp
//  Modular Calculator
//
//  Created by Gabriel Kapach on 26/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#include "SqrtOperation.hpp"

int SqrtOperation::requiredParameters() {
    return 0;
}

double SqrtOperation::calcResult(double currentValue, vector<string> parametes) {
    // Check if we have params
    if (parametes.size() > 0) {
        double num = atof(parametes[1].c_str());
        
        // Check if num is not 0
        if (num == 0.0) {
            throw ArithmeticException();
        }
        
        // Return nth root of the current value when n equals num
        return pow(currentValue, 1 / num);
    }
    
    // Return the square root of the current value
    return pow(currentValue, 1 / 2);
}
