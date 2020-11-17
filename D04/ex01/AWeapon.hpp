#ifndef AWEAPON_H
#define AWEAPON_H

#include <iostream>
#include <string>

class AWeapon {
	private:
		std::string _name;
		int			_apcost;
		int			_damage;
	public:
		AWeapon(void);
		AWeapon(std::string const & name, int damage, int apcost);
		AWeapon(AWeapon const & src);
		~AWeapon(void);

		//get
		std::string getName(void) const;
		int			getAPCost(void) const;
		int			getDamage(void) const;
		//operator
		AWeapon&	operator=(AWeapon const & rhs);
		////
		virtual void attack(void) const = 0; 
};

#endif