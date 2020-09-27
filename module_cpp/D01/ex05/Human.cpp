#include "Human.hpp"

Human::Human(void) {}
Human::~Human(void){}

std::string     Human::identifier(void) const{
    return this->_br.identifier();
}

const Brain&    Human::getBrain(void) const {
    return this->_br;
}