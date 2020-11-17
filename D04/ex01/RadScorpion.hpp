#ifndef RADSCORPION_H
#define RADSCORPION_H

#include "Enemy.hpp"

class RadScorpion : public Enemy {
	public:
		RadScorpion(void);
		RadScorpion(RadScorpion const & src);
		~RadScorpion(void);

		//operator
		RadScorpion& operator=(RadScorpion const & rhs);
};

#endif