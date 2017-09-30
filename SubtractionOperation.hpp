//
//  SubtractionOperation.hpp
//  Modular Calculator
//
//  Created by Gabriel Kapach on 26/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#ifndef SubtractionOperation_hpp
#define SubtractionOperation_hpp

#include <stdio.h>
#include "CalculatorOperation.hpp"

class SubtractionOperation : public CalculatorOperation {
    
public:
    SubtractionOperation() : CalculatorOperation() { op_strings = {"-", "subtract"}; }
    
    int requiredParameters();
    double calcResult(double currentValue, vector<string> parametes);
};

#endif /* SubtractionOperation_hpp */
