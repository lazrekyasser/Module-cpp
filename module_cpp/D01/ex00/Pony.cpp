#include "Pony.hpp"

Pony::Pony(void) {}
Pony::~Pony(void) {}

void Pony::set_name(std::string nm) {
    this->_namep = nm;
}

void Pony::set_age(int ag) {
    this->_agep = ag;
}

void Pony::set_color(std::string cl) {
    this->_color = cl;
}

std::string Pony::get_name(void) const{
    return this->_namep;
}

int         Pony::get_age(void) const{
    return this->_agep;
}

std::string Pony::get_color(void) const{
    return this->_color;
}