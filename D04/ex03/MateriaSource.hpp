#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
	AMateria* 	_inventaire[4];
	int			_indx;
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & src);
		~MateriaSource(void);

		MateriaSource& operator=(MateriaSource const & rhs);

		virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
};

#endif