//
//  SetOperation.hpp
//  Modular Calculator
//
//  Created by Gabriel Kapach on 26/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#ifndef SetOperation_hpp
#define SetOperation_hpp

#include <stdio.h>
#include "CalculatorOperation.hpp"

class SetOperation : public CalculatorOperation {
    
public:
    SetOperation() : CalculatorOperation() { op_strings = {"set", "="}; }
    
    int requiredParameters();
    double calcResult(double currentValue, vector<string> parametes);
};

#endif /* SetOperation_hpp */
