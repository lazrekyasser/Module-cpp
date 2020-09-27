#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon {
    private:
        std::string _type;
    public:
        Weapon(std::string t);
        ~Weapon(void);
        const std::string& getType(void) const;
        void               setType(std::string t);
};

#endif