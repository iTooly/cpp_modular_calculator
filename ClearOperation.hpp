//
//  ClearOperation.hpp
//  Modular Calculator
//
//  Created by Gabriel Kapach on 26/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#ifndef ClearOperation_hpp
#define ClearOperation_hpp

#include <stdio.h>
#include "CalculatorOperation.hpp"

class ClearOperation : public CalculatorOperation {
    
public:
    ClearOperation() : CalculatorOperation() { op_strings = {"clear", "clr", "reset"}; }
    
    int requiredParameters();
    double calcResult(double currentValue, vector<string> parametes);
};

#endif /* ClearOperation_hpp */
