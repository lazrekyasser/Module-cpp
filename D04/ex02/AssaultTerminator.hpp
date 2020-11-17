#ifndef ASSAULTTERMINATOR_H
#define ASSAULTTERMINATOR_H

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const & src);
		~AssaultTerminator(void);

		AssaultTerminator& operator=(AssaultTerminator const & rhs);

		virtual ISpaceMarine* clone(void) const;
		virtual void battleCry(void) const;
		virtual void rangedAttack(void) const;
		virtual void meleeAttack(void) const;
};

#endif