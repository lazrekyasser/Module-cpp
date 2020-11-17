#include "Character.hpp"

Character::Character(void) {
	std::cout<<"constructeur defaut de Character"<<std::endl;
}

Character::Character(std::string const & name) : _name(name) , _AP(40), _arm(NULL) {
	std::cout<<"constructeur surcharger Charcter"<<std::endl;
}

Character::Character(Character const & src) {
	std::cout<<"constructeur copy Charcter"<<std::endl;
	*this = src;
}

Character::~Character(void) {
	std::cout<<"deconstructeur Character"<<std::endl;
}

//get
std::string Character::getName(void) const {
	return this->_name;
}

int			Character::getAP(void) const {
	return this->_AP;
}

AWeapon*	Character::getARM(void) const {
	return this->_arm;
}

//operator
Character&	Character::operator=(Character const & rhs) {
	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_AP = rhs.getAP();
		this->_arm = rhs.getARM();
	}
	return *this;
}
///
void		Character::recoverAP(void) {
	int r;

	r = this->_AP + 10;
	if (r >= 40)
		this->_AP = 40;
	else
		this->_AP += 10;
}

void		Character::equip(AWeapon* ar) {
	this->_arm = ar;
}

void		Character::attack(Enemy* en) {
	if (this->_AP > 0 && this->_arm != NULL)
	{
		int redu_ap;
		redu_ap = this->_AP - this->_arm->getAPCost();
		if (redu_ap >= 0) {
			std::cout<<this->_name<<" attaque "<<en->getType()<<" with a "<<this->_arm->getName()<<std::endl;
			this->_arm->attack();
			int h;
			h = en->getHP() - this->_arm->getDamage();
			if (h <= 0)
			{
				delete en;
			}
			en->setHP(h);
			this->_AP -= this->_arm->getAPCost();
		}
	}
}

std::ostream& operator<<(std::ostream &o, Character const & rhs)
{
    if (rhs.getARM() != NULL)
    {
        o << rhs.getName() << " has " << rhs.getAP()<< " AP and wields a " << rhs.getARM()->getName() << std::endl;
    }
    else
    {
        o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmend" << std::endl;
    }
    return (o);
}