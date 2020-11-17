#ifndef SUPERMUTANT_H
#define SUPERMUTANT_H

#include "Enemy.hpp"

class SuperMutant : public Enemy {
	public:
		SuperMutant(void);
		SuperMutant(SuperMutant const & src);
		~SuperMutant(void);

		//operator
		SuperMutant& operator=(SuperMutant const & rhs);
		//
		virtual void takeDamage(int damage);
};

#endif