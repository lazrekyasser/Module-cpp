#ifndef HUMAN_H
#define HUMAN_H
#include "Brain.hpp"

class Human {
    private:
        const Brain _br;
    public:
        Human(void);
        ~Human(void);
        std::string     identifier(void) const;
        const Brain&    getBrain(void) const;
};

#endif