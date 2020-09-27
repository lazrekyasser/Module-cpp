#ifndef BRAIN_H
#define BRAIN_H

#include <string>
#include <iostream>
#include <sstream>

class Brain {
    public:
        Brain(void);
        ~Brain(void);
        std::string identifier(void) const;
};

#endif