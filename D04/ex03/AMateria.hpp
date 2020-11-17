#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
	private:
		static unsigned int	_xp;
		std::string		_type;
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		~AMateria(void);

		//get
		std::string const &	getType(void) const;
		unsigned int		getXP(void) const;
		//set
		void				setXP(unsigned int xp);
		void				setType(std::string type);
		//operator
		AMateria& operator=(AMateria const & rhs);
		///
		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);
};

#endif