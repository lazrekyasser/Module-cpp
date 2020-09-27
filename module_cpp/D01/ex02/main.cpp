#include "ZombieEvent.hpp"

int main(){
    ZombieEvent ev_znb;
    Zombie*     z1;
    Zombie*     z2;

    ev_znb.setZombieType("dd");
    z1 = ev_znb.newZombie("Floatingg");
    z1->announce();
    delete z1;
    ev_znb.setZombieType("zzmbiez");
    z2 = ev_znb.randomChump();
    z2->announce();
    delete z2;
    return 0;
}