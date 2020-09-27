#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H

#include "Zombie.hpp"
#include <stdlib.h>
#include <ctime>

class ZombieHorde {
    private:
        Zombie* _zombies;
        int     _nbr_zmb;
    public:
    ZombieHorde(int n);
    ZombieHorde(void);
    ~ZombieHorde(void);
    std::string randomChump(void);
    void announce(void);
};

#endif