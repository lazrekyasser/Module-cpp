#include "Squad.hpp"

Squad::Squad(void) {
	std::cout<<"constructeur Squad"<<std::endl;
	this->_nbrUnite = 0;
	this->_tabSquad = NULL;
}

Squad::Squad(Squad const & src) {
	std::cout<<"constructeur copy Squad"<<std::endl;
	*this = src;
}

Squad::~Squad(void) {
	std::cout<<"destructeur Squad"<<std::endl;
	this->destroyUnits();
	//delete _tabSquad;
}

///
int				Squad::getCount(void) const {
	return this->_nbrUnite;
}

ISpaceMarine*	Squad::getUnit(int n) const {
	t_tabunit* element;
	int i = 0;

	element = new t_tabunit;
	element = this->_tabSquad;
	while (element != NULL && element->next != NULL) {
		if (n == i)
			return element->_unite;
		element = element->next;
		i++;
	}
	return element->_unite;
}

bool			Squad::unite_in(ISpaceMarine* u, t_tabunit* e) const {
	if (e == NULL)
		return false;
	else if (u == e->_unite)
		return true;
	else
		return (this->unite_in(u, e->next));
}

int			Squad::push(ISpaceMarine *marine)
{
    t_tabunit  *tmp;

    tmp = this->_tabSquad;
    if (marine != NULL && this->unite_in(marine, tmp) == false)
    {
        tmp = this->_tabSquad;
        if (this->_tabSquad != NULL)
        {
            while (tmp->next)
            {
                tmp = tmp->next;
            }
            tmp->next = new t_tabunit;
            tmp->next->_unite = marine;
            tmp->next->next = NULL;
        }
        else
        {
            this->_tabSquad = new t_tabunit;
            this->_tabSquad->_unite = marine;
            this->_tabSquad->next = NULL;
        }
        this->_nbrUnite += 1;
    }
    return (this->_nbrUnite);
}

void			Squad::destroyUnits(void) {
	if (this->_tabSquad != NULL) {
		t_tabunit* tmp;
		delete this->_tabSquad->_unite;
		tmp = this->_tabSquad;
		this->_tabSquad = this->_tabSquad->next;
		delete tmp;
		this->destroyUnits();
	}
}

void 			Squad::copyUnits(Squad const & r) {
	int i = 0;

	while (i < r.getCount()) {
		this->push(r.getUnit(i));
		i++;
	}
}

//operator
Squad&			Squad::operator=(Squad const & rhs) {
	if (this != &rhs) {
		this->destroyUnits();
		this->copyUnits(rhs);
		this->_nbrUnite = rhs._nbrUnite;	
	}
	return *this;
}