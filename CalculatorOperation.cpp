//
//  CalculatorOperation.cpp
//  Modular Calculator
//
//  Created by Gabriel Kapach on 26/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#include "CalculatorOperation.hpp"

bool CalculatorOperation::supportsOperation(string op_string) {
    // Go over all the operations keys this operation has
    for (int i = 0; i < op_strings.size(); i++) {
        // Check if the current operation key equals to the one the user inserted
        if (match(op_strings[i], op_string)) {
            return true;
        }
    }
    
    return false;
}

bool CalculatorOperation::match(const string& a, const string& b) {
    unsigned long sz = a.size();
    //Check if both string has the same length
    if (b.size() != sz) {
        return false;
    }
    // Go letter by letter
    for (unsigned int i = 0; i < sz; ++i) {
        //Check if the two lower case letters are not equal
        if (tolower(a[i]) != tolower(b[i])) {
            return false;
        }
    }
    return true;
}
