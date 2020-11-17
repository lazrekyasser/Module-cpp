#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _indx(0) {
	for (int i = 0; i < 4; i++) {
		this->_inventaire[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	*this = src;
}

MateriaSource::~MateriaSource(void) {
}

void		MateriaSource::learnMateria(AMateria* m) {
	if (this->_indx < 3) {
		this->_inventaire[this->_indx] = m;
		this->_indx++;
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	if (type == "ice") {
		return (new Ice());
	}
	else if (type == "cure") {
		return (new Cure());
	}
	return (NULL);
}

MateriaSource&	MateriaSource::operator=(MateriaSource const & rhs) {
	if (this != &rhs)
    {
        for (int i = 0; i < 4; i += 1)
        {
            this->_inventaire[i] = NULL;
            this->_inventaire[i] = rhs._inventaire[i]->clone();
        }
        this->_indx = rhs._indx;
    }
    return (*this);
}