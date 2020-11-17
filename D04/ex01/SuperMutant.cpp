#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {
	std::cout<<"Gaaah. Break everything !"<<std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src) {
	std::cout<<"constructeur copy Super Mutant"<<std::endl;
	*this = src;
}

SuperMutant::~SuperMutant(void) {
	std::cout<<"Aaargh ..."<<std::endl;
}

//operator
SuperMutant& SuperMutant::operator=(SuperMutant const & rhs) {
	if (this != &rhs)
		(*this).Enemy::operator=(rhs);
	return *this;
}

///
void		SuperMutant::takeDamage(int damage) {
	int d;

	damage = damage - 3;
	d = this->getHP() - damage;
	if (damage > 0 && d <= 0)
		this->setHP(0);
	else if (damage > 0)
		this->setHP(d);
}
