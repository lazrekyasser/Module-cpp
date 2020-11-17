#ifndef PEON_H
#define PEON_H

#include "Victim.hpp"

class Peon : public Victim {
	private:
		std::string _nom;
	public:
		Peon(void);
		Peon(std::string n);
		Peon(Peon const & src);
		~Peon(void);

		//operator
		Peon& operator=(Peon const & rhs);
		///
		virtual void getPolymorphed(void) const;
};

#endif