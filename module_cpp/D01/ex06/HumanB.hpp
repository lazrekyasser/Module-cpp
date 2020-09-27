#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"
class HumanB {
    private:
        Weapon*     _armB;
        std::string _name;
    public:
        HumanB(std::string n);
        ~HumanB(void);
        void attack(void);
        void setWeapon(Weapon& w);
};

#endif