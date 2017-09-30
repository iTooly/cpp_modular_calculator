//
//  main.cpp
//  Modular Calculator
//
//  Created by Gabriel Kapach on 26/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#include <iostream>
#include <sstream>
#include "AdditionOperation.hpp"
#include "SubtractionOperation.hpp"
#include "MultiplicationOperation.hpp"
#include "DivisionOperation.hpp"
#include "ExponentiationOperation.hpp"
#include "SetOperation.hpp"
#include "ClearOperation.hpp"
#include "SqrtOperation.hpp"
#include "LogOperation.hpp"

#include "MathException.hpp"
#include "ArithmeticException.hpp"

using namespace std;

void get_op();
CalculatorOperation* find_op(string op);

double value = 0;
vector<CalculatorOperation*> operations;

int main(int argc, const char * argv[]) {
    AdditionOperation addOp = AdditionOperation();
    SubtractionOperation subOp = SubtractionOperation();
    MultiplicationOperation mulOp = MultiplicationOperation();
    DivisionOperation divOp = DivisionOperation();
    ExponentiationOperation expOp = ExponentiationOperation();
    SetOperation setOp = SetOperation();
    ClearOperation clrOp = ClearOperation();
    SqrtOperation sqrtOp = SqrtOperation();
    LogOperation logOp = LogOperation();
    
    // Create a vector of all of the operations out calculator have
    operations = {&addOp, &subOp, &mulOp, &divOp, &expOp, &setOp, &clrOp, &sqrtOp, &logOp};
    
    cout << "Welcome to the modular calculator.\n";
    // Ask for the next operation
    get_op();
    
    return 0;
}

/*
 * Function: get_op
 * ------------------
 * Get an operation from the user and apply it on the current value.
 * At the end ask for a new one.
 *
 */

void get_op() {
    string operation;
    
    // Read an operation from the user
    cout << "\u25B9 ";
    getline(cin, operation);
    
    // Check if the input is empty
    if (operation.length() == 0) {
        cout << "Please enter a valid command!\n";
        // Ask for the next operation
        return get_op();
    }
    
    // Separate the line when ever we found a space into a vector
    istringstream iss(operation);
    vector<string> args((istream_iterator<string>(iss)), istream_iterator<string>());
    
    // Get the operation key that was entered
    CalculatorOperation* op = find_op(args[0]);
    
    // Check if we have this kind of operation
    if (op == NULL) {
        cout << "No operation was found with the current input!\n";
        // Ask for the next operation
        return get_op();
    }
    
    //Check if we have the min amout of params for the operation
    if (op->requiredParameters() > (args.size() - 1)) {
        cout << "The " << args[0] << " operation requires " << op->requiredParameters() << " parameter" << (op->requiredParameters() == 1 ? "" : "s") << "!\n";
        return get_op();
    }
    
    // Handle the operation
    try {
        // Remove the first item from the vector so we would send only the arguments
        args.erase(args.begin());
        // Get the new value of the calculator
        value = op->calcResult(value, args);
        cout << "Current value: " << value << "\n";
        
        // Ask for the next operation
        get_op();
    } catch (MathException e) {
        // Print for the user the error that occurred
        cout << e.description() << "\n";
        // Ask for the next operation
        get_op();
    }
}

/*
 * Function: find_op
 * ------------------
 * Returns an operation from the operations vector
 *
 * op: the operation key of the operation the user asked
 *
 */

CalculatorOperation* find_op(string op) {
    for (int i = 0; i < operations.size(); i++) {
        if (operations[i]->supportsOperation(op)) {
            return operations[i];
        }
    }
    
    return NULL;
}
