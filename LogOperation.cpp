//
//  LogOperation.cpp
//  Modular Calculator
//
//  Created by Gabriel Kapach on 26/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#include "LogOperation.hpp"

int LogOperation::requiredParameters() {
    return 0;
}

double LogOperation::calcResult(double currentValue, vector<string> parametes) {
    double result = currentValue;
    
    // Check if a base for the log was inserted
    if (parametes.size() > 0) {
        // Special constant option
        if (parametes[0] == "e") {
            return log1p(currentValue);
        }
        
        double num = atof(parametes[0].c_str());
        
        // Convert to the inserted base using the formula: log_a(b) = log_c(a) / log_c(b)
        result = log(currentValue) / log(num);
    }
    
    // If no base was inserted use base 2
    result = log2(currentValue);
    
    if (result != result) {
        throw MathException();
    }
    
    return result;
}
