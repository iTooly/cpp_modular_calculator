//
//  AdditionOperation.cpp
//  Modular Calculator
//
//  Created by Gabriel Kapach on 26/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#include "AdditionOperation.hpp"

int AdditionOperation::requiredParameters() {
    return 1;
}

double AdditionOperation::calcResult(double currentValue, vector<string> parametes) {
    // Add to the current value the first param from parametes
    return currentValue + atof(parametes[0].c_str());
}
