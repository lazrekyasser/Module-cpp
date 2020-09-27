#include "Weapon.hpp"

Weapon::Weapon(std::string t) : _type(t){}
Weapon::~Weapon(void){}

const std::string& Weapon::getType(void) const {
    return this->_type;
}

void               Weapon::setType(std::string t) {
    this->_type = t;
}