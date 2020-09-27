#include "Brain.hpp"

Brain::Brain(void) {}
Brain::~Brain(void){}

std::string Brain::identifier(void) const {
    std::ostringstream address;
    address << (void*)this;
    std::string ret;
    ret = address.str();
    return ret;
}