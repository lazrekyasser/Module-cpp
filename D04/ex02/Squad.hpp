#ifndef SQUAD_H
#define SQUAD_H

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

typedef struct	s_tabunit 
{
	ISpaceMarine*	_unite;
	s_tabunit*		next;
}				t_tabunit;


class Squad : public ISquad {
	private:
		t_tabunit*	_tabSquad;
		int			_nbrUnite;
	public:
		Squad(void);
		Squad(Squad const & src);
		~Squad(void);

		//function virtal de interface
		virtual int getCount(void) const;
		virtual ISpaceMarine* getUnit(int n) const;//recherche
		virtual int push(ISpaceMarine* u);//ajouter

		//operator
		Squad&	operator=(Squad const & rhs);
		////
		bool	unite_in(ISpaceMarine* u, t_tabunit* e) const;
		void	destroyUnits(void);
		void	copyUnits(Squad const & s);
};

#endif