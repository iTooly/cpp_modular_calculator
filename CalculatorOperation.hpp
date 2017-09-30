//
//  CalculatorOperation.hpp
//  Modular Calculator
//
//  Created by Gabriel Kapach on 26/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#ifndef CalculatorOperation_hpp
#define CalculatorOperation_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class CalculatorOperation {
    
public:
    /*
     * Function: supportsOperation
     * ------------------
     * Check if the operation key points to this operation
     *
     * op_string: the operation key
     *
     */
    
    virtual bool supportsOperation(string op_string);
    
    /*
     * Function: requiredParameters
     * ------------------
     * Returns the number of required params for the operation
     *
     * op: the operation key of the operation the user asked
     *
     */
    
    virtual int requiredParameters() = 0;
    
    /*
     * Function: calcResult
     * ------------------
     * Returns a new value after the operation was applied on the old value
     *
     * currentValue: the current value the calculator holds
     * parametes: the parametes the user inserted to this operation
     *
     */
    
    virtual double calcResult(double currentValue, vector<string> parametes) = 0;
    
    /*
     * Function: match
     * ------------------
     * Case insensitive string comparison
     *
     * a: first string
     * b: second string
     *
     */
    
    bool match(const string& a, const string& b);
    
protected:
    vector<string> op_strings;
};

#endif /* CalculatorOperation_hpp */
