#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 21, 5) {
	std::cout<<"constructeur par defaut PlasmaRifle"<<std::endl;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) {
	std::cout<<"constructeur par copy PlasmaRifle"<<std::endl;
	*this = src;
}

PlasmaRifle::~PlasmaRifle(void) {
	std::cout<<"deconstructeur de PlasmaRifle"<<std::endl;
}

//operator
PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const & rhs) {
	if (this != &rhs) {
		(*this).AWeapon::operator=(rhs);//calling base class assignement operator function using derived class
	}
	return *this;
}

void		PlasmaRifle::attack(void) const {
	std::cout<<"* piouuu piouuu piouuu *"<<std::endl;
}


