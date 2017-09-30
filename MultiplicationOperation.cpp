//
//  MultiplicationOperation.cpp
//  Modular Calculator
//
//  Created by Gabriel Kapach on 26/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#include "MultiplicationOperation.hpp"

int MultiplicationOperation::requiredParameters() {
    return 1;
}

double MultiplicationOperation::calcResult(double currentValue, vector<string> parametes) {
    // Multiple the current value by the first param from parametes
    return currentValue * atof(parametes[0].c_str());
}
