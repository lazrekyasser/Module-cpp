#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice"){
}
Ice::Ice(Ice const & src) {
	*this = src;
}

Ice::~Ice(void) {	
}

Ice& Ice::operator=(Ice const & rhs) {
	if (this != &rhs) {
		this->setXP(rhs.getXP());///
	}
	return *this;
}

AMateria*	Ice::clone(void) const {
	return (new Ice());
}

void 		Ice::use(ICharacter& target) {
	std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
	this->setXP(this->getXP() + 10);
}
