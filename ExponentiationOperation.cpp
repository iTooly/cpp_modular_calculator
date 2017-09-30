//
//  ExponentiationOperation.cpp
//  Modular Calculator
//
//  Created by Gabriel Kapach on 26/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#include "ExponentiationOperation.hpp"

int ExponentiationOperation::requiredParameters() {
    return 1;
}

double ExponentiationOperation::calcResult(double currentValue, vector<string> parametes) {
    // Return the current value in the power of the first param from parametes
    return pow(currentValue, atof(parametes[0].c_str()));
}
