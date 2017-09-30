//
//  DivisionOperation.hpp
//  Modular Calculator
//
//  Created by Gabriel Kapach on 26/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#ifndef DivisionOperation_hpp
#define DivisionOperation_hpp

#include <stdio.h>
#include "CalculatorOperation.hpp"

class DivisionOperation : public CalculatorOperation {
    
public:
    DivisionOperation() : CalculatorOperation() { op_strings = {"/", "divide", "div"}; }
    
    int requiredParameters();
    double calcResult(double currentValue, vector<string> parametes);
};

#endif /* DivisionOperation_hpp */
