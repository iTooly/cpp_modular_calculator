//
//  AdditionOperation.hpp
//  Modular Calculator
//
//  Created by Gabriel Kapach on 26/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#ifndef AdditionOperation_hpp
#define AdditionOperation_hpp

#include <stdio.h>
#include "CalculatorOperation.hpp"

class AdditionOperation : public CalculatorOperation {
    
public:
    AdditionOperation() : CalculatorOperation() { op_strings = {"+", "add", "append"}; }
    
    int requiredParameters();
    double calcResult(double currentValue, vector<string> parametes);
};

#endif /* AdditionOperation_hpp */
