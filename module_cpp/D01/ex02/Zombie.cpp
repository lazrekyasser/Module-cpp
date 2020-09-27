#include "Zombie.hpp"

Zombie::Zombie(std::string n, std::string t) : _name(n),_type(t) {}
Zombie::~Zombie(void) {}

void Zombie::announce(void) const{
    std::cout<<'<'<<this->_name<<'('<<this->_type<<')'<<'>'<<"EATTT BRAIIINNNNSS.."<<std::endl;
}