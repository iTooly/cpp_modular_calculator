//
//  DivideByZeroException.hpp
//  Modular Calculator
//
//  Created by Gabriel Kapach on 26/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#ifndef DivideByZeroException_hpp
#define DivideByZeroException_hpp

#include <stdio.h>

#include "ArithmeticException.hpp"

class DivideByZeroException : public ArithmeticException {
    
public:
    string description();
};

#endif /* DivideByZeroException_hpp */
