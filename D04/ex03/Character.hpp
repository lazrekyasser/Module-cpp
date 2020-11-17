#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	private:
		std::string _nomChar;
		AMateria*	_inventaire[4];
		int 		_idx;
	public:
		Character(void);
		Character(std::string name);
		Character(Character const & src);
		~Character(void);

		Character& operator=(Character const & rhs);

		virtual std::string const & getName(void) const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif