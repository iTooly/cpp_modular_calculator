//
//  SqrtOperation.hpp
//  Modular Calculator
//
//  Created by Gabriel Kapach on 26/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#ifndef SqrtOperation_hpp
#define SqrtOperation_hpp

#include <stdio.h>
#include <cmath>
#include "CalculatorOperation.hpp"
#include "ArithmeticException.hpp"

class SqrtOperation : public CalculatorOperation {
    
public:
    SqrtOperation() : CalculatorOperation() { op_strings = {"sqrt"}; }
    
    int requiredParameters();
    double calcResult(double currentValue, vector<string> parametes);
};

#endif /* SqrtOperation_hpp */
