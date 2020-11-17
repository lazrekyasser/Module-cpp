#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) {
	std::cout<<"* teleports from space *"<<std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & src) {
	std::cout<<"constructeur copy AssaultTerminator"<<std::endl;
	*this = src;
}

AssaultTerminator::~AssaultTerminator(void) {
	std::cout<<"I’ll be back ..."<<std::endl;
}

AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const & rhs) {
	return *this;
}

ISpaceMarine*	AssaultTerminator::clone(void) const {
	ISpaceMarine* a;

	a = new AssaultTerminator();
	return a;
}

void			AssaultTerminator::battleCry(void) const {
	std::cout<<"This code is unclean. Purify it !"<<std::endl;
}

void			AssaultTerminator::rangedAttack(void) const {
	std::cout<<"* does nothing *"<<std::endl;
}

void			AssaultTerminator::meleeAttack(void) const {
	std::cout<<"* attaque with chainfists *"<<std::endl;
}