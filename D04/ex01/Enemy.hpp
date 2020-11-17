#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>
#include <string>

class Enemy {
	private:
		int			_hp;
		std::string _type;
	public:
		Enemy(void);
		Enemy(int hp, std::string type);
		Enemy(Enemy const & src);
		virtual ~Enemy(void);

		//get
		std::string getType(void) const;
		int			getHP(void) const;
		//set
		void		setType(std::string t);
		void		setHP(int hp);
		//operator
		Enemy& operator=(Enemy const & rhs);
		////
		virtual void takeDamage(int damage);
};

#endif