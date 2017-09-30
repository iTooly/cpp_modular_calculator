//
//  DivisionOperation.cpp
//  Modular Calculator
//
//  Created by Gabriel Kapach on 26/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#include "DivisionOperation.hpp"
#include "DivideByZeroException.hpp"

int DivisionOperation::requiredParameters() {
    return 1;
}

double DivisionOperation::calcResult(double currentValue, vector<string> parametes) {
    double num = atof(parametes[0].c_str());
    
    // Check if num is not 0
    if (num == 0.0) {
        throw DivideByZeroException();
    }
    
    // Divide the current value by the first param from parametes
    return currentValue / num;
}
