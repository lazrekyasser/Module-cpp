#ifndef TACTICALMARINE_H
#define TACTICALMARINE_H

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
	public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine const & src);
		~TacticalMarine(void);

		TacticalMarine& operator=(TacticalMarine const & rhs);

		virtual ISpaceMarine* clone(void) const;
		virtual void battleCry(void) const;
		virtual void rangedAttack(void) const;
		virtual void meleeAttack(void) const;
};

#endif