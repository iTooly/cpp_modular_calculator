//
//  SetOperation.cpp
//  Modular Calculator
//
//  Created by Gabriel Kapach on 26/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#include "SetOperation.hpp"

int SetOperation::requiredParameters() {
    return 1;
}

double SetOperation::calcResult(double currentValue, vector<string> parametes) {
    // Return the first param from parametes
    return atof(parametes[0].c_str());
}
