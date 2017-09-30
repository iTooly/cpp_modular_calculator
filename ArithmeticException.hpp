//
//  ArithmeticException.hpp
//  Modular Calculator
//
//  Created by Gabriel Kapach on 26/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#ifndef ArithmeticException_hpp
#define ArithmeticException_hpp

#include <stdio.h>
#include "MathException.hpp"

class ArithmeticException : public MathException {
    
public:
    virtual string description();
};

#endif /* ArithmeticException_hpp */
