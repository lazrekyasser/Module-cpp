#ifndef CHARACTER_H
#define CHARACTER_H

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
	private:
		std::string _name;
		int			_AP;
		AWeapon*	_arm;
	public:
		Character(void);
		Character(Character const & src);
		Character(std::string const & name);
		~Character(void);

		//get
		std::string getName(void) const;
		int			getAP(void) const;
		AWeapon*	getARM(void) const;
		//oerator
		Character& operator=(Character const & rhs);
		//
		void recoverAP(void);
        void equip(AWeapon* ar);
        void attack(Enemy* en);
};

std::ostream& operator<<(std::ostream& o, Character const & rhs);

#endif