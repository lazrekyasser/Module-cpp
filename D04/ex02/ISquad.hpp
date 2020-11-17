#ifndef ISQUAD_H
#define ISQUAD_H

#include "ISpaceMarine.hpp"

class ISquad
{
	public:
		virtual ~ISquad() {}
		virtual int getCount(void) const = 0;
		virtual ISpaceMarine* getUnit(int n) const = 0;
		virtual int push(ISpaceMarine* u) = 0;
};


#endif