#include "HumanB.hpp"

HumanB::HumanB(std::string n) : _name(n){
}
HumanB::~HumanB(void) {}

void HumanB::attack(void) {
    std::cout<<this->_name<<" attacks with his "<<this->_armB->getType()<<std::endl;
}

void HumanB::setWeapon(Weapon& w) {
    this->_armB = &w;
}