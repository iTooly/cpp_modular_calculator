//
//  LogOperation.hpp
//  Modular Calculator
//
//  Created by Gabriel Kapach on 26/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#ifndef LogOperation_hpp
#define LogOperation_hpp

#include <stdio.h>
#include <cmath>
#include "CalculatorOperation.hpp"
#include "MathException.hpp"

class LogOperation : public CalculatorOperation {
    
public:
    LogOperation() : CalculatorOperation() { op_strings = {"log"}; }
    
    int requiredParameters();
    double calcResult(double currentValue, vector<string> parametes);
};

#endif /* LogOperation_hpp */
