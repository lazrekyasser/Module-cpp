#include "Zombie.hpp"

Zombie::Zombie(std::string n, std::string t) : _name(n),_type(t) {}
Zombie::Zombie(void) {}
Zombie::~Zombie(void) {}

void Zombie::announce(void) const{
    std::cout<<'<'<<this->_name<<'('<<this->_type<<')'<<'>'<<"EATTT BRAIIINNNNSS.."<<std::endl;
}

void Zombie::setType(std::string t) {
    this->_type = t;
}

void Zombie::setName(std::string n) {
    this->_name = n;
}