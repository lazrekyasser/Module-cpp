#include "AMateria.hpp"

AMateria::AMateria(void) {
}
AMateria::~AMateria(void) {}

AMateria::AMateria(std::string const & type) : _type(type){}

AMateria::AMateria(AMateria const & src) {
	*this = src;
}

unsigned int AMateria::_xp = 0;
//get
std::string const &	AMateria::getType(void) const {
	return this->_type;
}

unsigned int		AMateria::getXP(void) const {
	return this->_xp;
}
//set

void				AMateria::setXP(unsigned int xp) {
	this->_xp = xp;
}
void				AMateria::setType(std::string type) {
	this->_type = type;
}

//operator
AMateria& 			AMateria::operator=(AMateria const & rhs) {
	if (this != &rhs) {
		this->_xp = rhs.getXP();
		this->_type = rhs.getType();
	}
	return *this;
}

///
void				AMateria::use(ICharacter& target) {
	this->_xp += 10;
}
