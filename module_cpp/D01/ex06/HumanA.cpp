#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon& ar) : _name(n), _armA(ar) {
}
HumanA::~HumanA(void) {}

void HumanA::attack(void) {
    std::cout<<this->_name<<" attacks with his "<<this->_armA.getType()<<std::endl;
}