//
//  MultiplicationOperation.hpp
//  Modular Calculator
//
//  Created by Gabriel Kapach on 26/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#ifndef MultiplicationOperation_hpp
#define MultiplicationOperation_hpp

#include <stdio.h>
#include "CalculatorOperation.hpp"

class MultiplicationOperation : public CalculatorOperation {
    
public:
    MultiplicationOperation() : CalculatorOperation() { op_strings = {"*", "multiply", "mul"}; }
    
    int requiredParameters();
    double calcResult(double currentValue, vector<string> parametes);
};

#endif /* MultiplicationOperation_hpp */
