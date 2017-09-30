//
//  ExponentiationOperation.hpp
//  Modular Calculator
//
//  Created by Gabriel Kapach on 26/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#ifndef ExponentiationOperation_hpp
#define ExponentiationOperation_hpp

#include <stdio.h>
#include <cmath>
#include "CalculatorOperation.hpp"

class ExponentiationOperation : public CalculatorOperation {
    
public:
    ExponentiationOperation() : CalculatorOperation() { op_strings = {"^", "power", "pow", "exp"}; }
    
    int requiredParameters();
    double calcResult(double currentValue, vector<string> parametes);
};

#endif /* ExponentiationOperation_hpp */
