#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {
	this->_nom = "dft_sname";
	this->_titre = "dft_stitre";
	std::cout<<this->_nom<<", "<<this->_titre<<", is born!"<<std::endl;
}

Sorcerer::Sorcerer(std::string n, std::string t) : _nom(n), _titre(t) {
	std::cout<<this->_nom<<", "<<this->_titre<<", is born!"<<std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src) {
	std::cout<<"constructeur par copy"<<std::endl;
	*this = src;
}

Sorcerer::~Sorcerer(void) {
	std::cout<<this->_nom<<", "<<this->_titre<<", is dead. Consequences will never be the same!"<<std::endl;
}

//get
std::string Sorcerer::get_nom(void) const{
	return this->_nom;
}

std::string Sorcerer::get_titre(void) const{
	return this->_titre;
}

////
void		Sorcerer::polymorph(Victim const &v) const{
	v.getPolymorphed();
	std::cout<<"by "<<this->_nom<<", "<<this->_titre<<std::endl;
}

//operators
Sorcerer& Sorcerer::operator=(Sorcerer const & rhs) {
	if (this != &rhs)
	{
		this->_nom = rhs._nom;
		this->_titre = rhs._titre;
	}
	return *this;
}

std::ostream& operator<<(std::ostream& o, Sorcerer const & rhs) {
	o<<"I am "<<rhs.get_nom()<<", "<<rhs.get_titre()<<", and i like ponies!"<<std::endl;
	return o;
}