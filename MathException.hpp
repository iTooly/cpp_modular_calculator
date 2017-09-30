//
//  MathException.hpp
//  Modular Calculator
//
//  Created by Gabriel Kapach on 26/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#ifndef MathException_hpp
#define MathException_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class MathException {
    
public:
    virtual string description();
};

#endif /* MathException_hpp */
