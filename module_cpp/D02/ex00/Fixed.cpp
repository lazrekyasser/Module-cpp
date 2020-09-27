#include "Fixed.hpp"

const int Fixed::_nbr_bit = 8;
Fixed::Fixed(void) : _pnt_fixe(0) {}
Fixed::Fixed(Fixed const & f) {
    *this = f;
}
Fixed::~Fixed(void) {}

int Fixed::getRawBits(void) const {
    return this->_pnt_fixe;
}

void Fixed::setRawBits(int const raw) {
    this->_pnt_fixe = raw;
}

Fixed& Fixed::operator=(Fixed const & rhs) {
    this->_pnt_fixe = rhs.getRawBits();
    return *this;
}