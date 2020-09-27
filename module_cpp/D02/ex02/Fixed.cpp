#include "Fixed.hpp"

const int Fixed::_nbr_bit = 8;
Fixed::Fixed(void) : _pnt_fixe(0) {}
Fixed::Fixed(Fixed const & f) {
    *this = f;
}
Fixed::Fixed(int const n) {
    this->_pnt_fixe = (n << this->_nbr_bit);
}
Fixed::Fixed(float const f) {
    this->_pnt_fixe = (int)roundf(f * (1 << this->_nbr_bit));
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
bool    Fixed::operator<(Fixed const & rhs) const{
    if (this->_pnt_fixe < rhs.getRawBits())
        return true;
    else
        return false;
}
bool    Fixed::operator>(Fixed const & rhs) const{
    if (this->_pnt_fixe > rhs.getRawBits())
        return true;
    else
        return false;
}
bool    Fixed::operator<=(Fixed const & rhs) const{
    if (this->_pnt_fixe <= rhs.getRawBits())
        return true;
    else
        return false;
}
bool    Fixed::operator>=(Fixed const & rhs) const{
    if (this->_pnt_fixe >= rhs.getRawBits())
        return true;
    else
        return false;
}
bool    Fixed::operator==(Fixed const & rhs) const{
    if (this->_pnt_fixe == rhs.getRawBits())
        return true;
    else
        return false;
}
bool    Fixed::operator!=(Fixed const & rhs) const{
    if (this->_pnt_fixe != rhs.getRawBits())
        return true;
    else
        return false;
}
Fixed   Fixed::operator+(Fixed const & rhs) {
    Fixed ret;
    ret.setRawBits(this->_pnt_fixe + rhs.getRawBits());
    return ret;
}
Fixed   Fixed::operator-(Fixed const & rhs) {
    Fixed ret;
    ret.setRawBits(this->_pnt_fixe - rhs.getRawBits());
    return ret;
}
Fixed   Fixed::operator*(Fixed const & rhs) {
    Fixed ret;
    ret.setRawBits((this->_pnt_fixe * rhs.getRawBits()) >> this->_nbr_bit);
    return ret;
}
Fixed   Fixed::operator/(Fixed const & rhs) {
    Fixed ret;
    ret.setRawBits((this->_pnt_fixe << this->_nbr_bit) / rhs.getRawBits());
    return ret;
}
Fixed& Fixed::min(Fixed& a, Fixed&  b) {
    if (a < b)
        return a;
    else
        return b;
}
Fixed& Fixed::max(Fixed& a, Fixed&  b) {
    if (a > b)
        return a;
    else
        return b;
}
const Fixed& Fixed::min(Fixed const & a, Fixed const &  b) {
    if (a < b)
        return a;
    else
        return b;
}
const Fixed& Fixed::max(Fixed const & a, Fixed const &  b) {
    if (a > b)
        return a;
    else
        return b;
}
Fixed&      Fixed::operator++(void) {
    this->_pnt_fixe++;
    return *this;
}
Fixed       Fixed::operator++(int) {
    Fixed temp(*this);
    operator++();
    return temp;
}
Fixed&      Fixed::operator--(void) {
    this->_pnt_fixe--;
    return *this;
}
Fixed       Fixed::operator--(int) {
    Fixed temp(*this);
    operator--();
    return temp;
}
int Fixed::toInt(void) const {
    return (this->_nbr_bit >> this->_nbr_bit);
}

float Fixed::toFloat(void) const {
    return ((float)this->_pnt_fixe / (float)(1 << this->_nbr_bit));
}

std::ostream& operator<<(std::ostream& o, Fixed const & rhs) {
    o << rhs.toFloat();
    return o;
}
