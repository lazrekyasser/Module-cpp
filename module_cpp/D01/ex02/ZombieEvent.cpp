#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {}
ZombieEvent::~ZombieEvent(void){}

void ZombieEvent::setZombieType(std::string t) {
    this->_type = t;
}

Zombie* ZombieEvent::newZombie(std::string name) {
    Zombie* z;
    z = new Zombie(name, this->_type);
    return z;
}

Zombie* ZombieEvent::randomChump(void) {
    int i;
    std::string names[] = {"Zzb1","Waz","Biters","Greeper","Cold","Geek"};
    if (this->_type.compare("") == 0)
        this->setZombieType("dead");
    Zombie* z;
    srand((unsigned) time(0));
    i = rand() % 6;
    z = new Zombie(names[i], this->_type);
    return z;
}