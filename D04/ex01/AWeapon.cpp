#include "AWeapon.hpp"

AWeapon::AWeapon(void) : _name("dft_weapon"), _apcost(0), _damage(0) {
	std::cout<<"constructeur par defaut de weapon"<<std::endl;
}

AWeapon::AWeapon(std::string const & name, int damage, int apcost) : _name(name), _apcost(apcost), _damage(damage) {
	std::cout<<"constructeur surcharger de weapon"<<std::endl;
}

AWeapon::AWeapon(AWeapon const & src) {
	std::cout<<"constructeur par copy de weapon"<<std::endl;
	*this = src;
}

AWeapon::~AWeapon(void) {
	std::cout<<"deconstructeur de weapon"<<std::endl;
}

//get
std::string AWeapon::getName(void) const {
	return this->_name;
}

int			AWeapon::getAPCost(void) const {
	return this->_apcost;
}

int			AWeapon::getDamage(void) const {
	return this->_damage;
}

//operator
AWeapon& AWeapon::operator=(AWeapon const & rhs) {
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_apcost = rhs.getAPCost();
		this->_damage = rhs.getDamage();
	}
	return *this;
}
