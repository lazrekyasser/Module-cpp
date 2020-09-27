#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(void) : _nbr_zmb(0) {}
ZombieHorde::~ZombieHorde(void) {}

ZombieHorde::ZombieHorde(int n) : _nbr_zmb(n) {
    this->_zombies = new Zombie[this->_nbr_zmb];
    for (int i=0;i <this->_nbr_zmb;i++){
        this->_zombies[i].setType("ddpool");
        this->_zombies[i].setName(this->randomChump());
    }
}

std::string ZombieHorde::randomChump(void) {
    int i;
    std::string names[] ={"deadpool","floatingg","deathz","mortal","pio","sadded"};
    //srand((unsigned) time(0));
    i = rand() % 6;
    return (names[i]);
}

void ZombieHorde::announce(void){
    for (int i=0;i < this->_nbr_zmb;i++) {
        this->_zombies[i].announce();
    }
}