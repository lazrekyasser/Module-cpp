#include "Victim.hpp"

Victim::Victim(void) {
	this->_nom = "dft_vnom";
	std::cout<<"A random victim called "<<this->_nom<<" just appeared!"<<std::endl;
}

Victim::Victim(std::string n) : _nom(n) {
	std::cout<<"A random victim called "<<this->_nom<<" just appeared!"<<std::endl;
}

Victim::Victim(Victim const & src) {
	std::cout<<"constructeur par copy"<<std::endl;
	*this = src;
}

Victim::~Victim(void) {
	std::cout<<"The victim "<<this->_nom<<" died for no apparent reasons!"<<std::endl;
}

//get
std::string Victim::get_nom(void) const {
	return this->_nom;
}

void		Victim::getPolymorphed(void) const {
	std::cout<<this->_nom<<" was just polymorphed in a cute little sheep!"<<std::endl;
}

//operator
Victim& Victim::operator=(Victim const & rhs) {
	if (this != &rhs)
		this->_nom = rhs.get_nom();
	return *this;
}

std::ostream& operator<<(std::ostream& o, Victim const & rhs) {
	o<<"I'm "<<rhs.get_nom()<<" and I like otters!"<<std::endl;
	return o;
}