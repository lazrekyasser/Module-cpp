#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 50, 8) {
	std::cout<<"constructeur par defaut PowerFist"<<std::endl;
}

PowerFist::PowerFist(PowerFist const & src) {
	std::cout<<"constructeur copy de PowerFist"<<std::endl;
	*this = src;
}

PowerFist::~PowerFist(void) {
	std::cout<<"deconstructeur PowerFist"<<std::endl;
}

PowerFist& PowerFist::operator=(PowerFist const & rhs) {
	if (this != &rhs) {
		(*this).AWeapon::operator=(rhs);
	}
	return *this;
}

void	PowerFist::attack(void) const {
	std::cout<<"* pschhh... SBAM ! *"<<std::endl;
}