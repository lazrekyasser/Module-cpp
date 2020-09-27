#ifndef ZOMBIEEVENT_H
#define ZOMBIEEVENT_H

#include "Zombie.hpp"
#include <stdlib.h>
#include <ctime>

class ZombieEvent {
    private:
        std::string _type;
    public:
        ZombieEvent(void);
        ~ZombieEvent(void);
        void setZombieType(std::string t);
        Zombie* newZombie(std::string name);
        Zombie* randomChump(void);
};

#endif