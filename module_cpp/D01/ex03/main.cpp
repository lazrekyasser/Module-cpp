#include "ZombieHorde.hpp"

int main() {
    ZombieHorde zm1(3);
    ZombieHorde zm2 = ZombieHorde();
    ZombieHorde zm3;
    zm1.announce();
    zm2.announce();
    zm3.announce();
    return 0;
}