#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"
class HumanA {
    private:
        Weapon&     _armA;
        std::string _name;
    public:
        HumanA(std::string n, Weapon& ar);
        ~HumanA(void);
        void attack(void);
};

#endif