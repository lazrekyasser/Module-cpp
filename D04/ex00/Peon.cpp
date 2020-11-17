#include "Peon.hpp"

Peon::Peon(void) : Victim() {
	this->_nom = "dft_pnom";
	std::cout<<"Zog zog."<<std::endl;
}

Peon::Peon(std::string n) : Victim(n), _nom(n){
	std::cout<<"Zog zog."<<std::endl;
}

Peon::Peon(Peon const & src) {
	std::cout<<"constructeur par copy"<<std::endl;
	*this = src;
}

Peon::~Peon(void) {
	std::cout<<"Bleuark..."<<std::endl;
}

//operator
Peon&	Peon::operator=(Peon const & rhs) {
	if (this != &rhs)
		this->_nom = rhs._nom;
	return *this;
}

void	Peon::getPolymorphed(void) const
{
    std::cout << this->_nom << " has been turned into a pink pony !"<< std::endl;
    return ;
}