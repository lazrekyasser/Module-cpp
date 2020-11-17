#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {
	std::cout<<"Tactical Marine ready for action !"<<std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & src) {
	std::cout<<"constructeur copy TacticalMarine"<<std::endl;
	*this = src;
}

TacticalMarine::~TacticalMarine(void) {
	std::cout<<"Aaargh ..."<<std::endl;
}

TacticalMarine& TacticalMarine::operator=(TacticalMarine const & rhs) {
	return *this;
}

ISpaceMarine*	TacticalMarine::clone(void) const {
	ISpaceMarine* a;

	a = new TacticalMarine();
	return a;
}

void			TacticalMarine::battleCry(void) const {
	std::cout<<"For the Holy PLOT !"<<std::endl;
}

void			TacticalMarine::rangedAttack(void) const {
	std::cout<<"* attacks with a bolter *"<<std::endl;
}

void			TacticalMarine::meleeAttack(void) const {
	std::cout<<"* attacks with a chainsword *"<<std::endl;
}