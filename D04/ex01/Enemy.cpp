#include "Enemy.hpp"

Enemy::Enemy(void) : _hp(0), _type("dft_enmy") {
	std::cout<<"constructeur defaut Enemy"<<std::endl;
}

Enemy::Enemy(int hp, std::string type) : _hp(hp), _type(type) {
	std::cout<<"constructeur surcharger Enemy"<<std::endl;
}

Enemy::Enemy(Enemy const & src) {
	std::cout<<"constructeur copy Enemy"<<std::endl;
	*this = src;
}

Enemy::~Enemy(void) {
	std::cout<<"deconstructeur Enemy"<<std::endl;
}

//get
std::string Enemy::getType(void) const {
	return this->_type;
}

int			Enemy::getHP(void) const {
	return this->_hp;
}

//set
void Enemy::setHP(int hp) {
	this->_hp = hp;
}

void Enemy::setType(std::string t) {
	this->_type = t;
}

//operator
Enemy& Enemy::operator=(Enemy const & rhs) {
	if (this != &rhs) {
		this->_hp = rhs.getHP();
		this->_type = rhs.getType();
	}
	return *this;
}

///
void	Enemy::takeDamage(int damage) {
	int d;

	d = this->_hp - damage;
	if (damage > 0 && d <= 0)
		this->_hp = 0;
	else if (damage > 0)
		this->_hp = this->_hp - damage;
}
