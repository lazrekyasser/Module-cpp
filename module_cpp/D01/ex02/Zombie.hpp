#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {
    private:
        std::string _name;
        std::string _type;
    public:
        Zombie(std::string n, std::string t);
        ~Zombie(void);
        void announce(void) const;
        //advert
};

#endif