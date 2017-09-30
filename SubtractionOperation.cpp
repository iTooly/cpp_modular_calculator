//
//  SubtractionOperation.cpp
//  Modular Calculator
//
//  Created by Gabriel Kapach on 26/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#include "SubtractionOperation.hpp"

int SubtractionOperation::requiredParameters() {
    return 1;
}

double SubtractionOperation::calcResult(double currentValue, vector<string> parametes) {
    // Subtract from the current value the first param from parametes
    return currentValue - atof(parametes[0].c_str());
}
