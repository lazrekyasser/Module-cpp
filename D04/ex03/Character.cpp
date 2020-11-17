#include "Character.hpp"

Character::Character(void) {}
Character::~Character(void) {
	//delete [] this->_inventaire;
}
Character::Character(std::string name) :_nomChar(name) , _idx(0) {
	for (int i = 0; i < 4; i++) {
		this->_inventaire[i] = NULL;
	}
}

Character::Character(Character const & src) {
	*this = src;
}

std::string const & Character::getName(void) const {
	return this->_nomChar;
}

void 				Character::equip(AMateria* m) {
	if (this->_idx < 3) {
		this->_inventaire[this->_idx] = m;
		this->_idx++;
	}
}

void				Character::unequip(int idx) {
	if (this->_inventaire[idx] != NULL && idx >= 0 && idx <= 3) {
		this->_inventaire[idx] = NULL;
	}
}

void				Character::use(int idx, ICharacter& target) {
	if (this->_inventaire[idx] != NULL && idx >= 0 && idx <= 3)
		this->_inventaire[idx]->use(target);
}

//operator
Character&			Character::operator=(Character const & rhs) {
	if (this != &rhs) {
		this->_nomChar = rhs.getName();
		this->_idx = rhs._idx;
		for (int i = 0; i < 4 ; i++) {
			this->_inventaire[i] = NULL;//L’ancienne Materia du Character doit être supprimée
			this->_inventaire[i] = rhs._inventaire[i]->clone();
		}
	}
	return *this;
}