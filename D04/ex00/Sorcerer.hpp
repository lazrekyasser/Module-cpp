#ifndef SORCERER_H
#define SORCERER_H

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer {
	private:
		std::string _nom;
		std::string _titre;
	public:
		Sorcerer(void);
		Sorcerer(std::string n, std::string t);
		Sorcerer(Sorcerer const & src);
		~Sorcerer(void);

		Sorcerer& operator=(Sorcerer const & rhs);
		//get
		std::string get_nom(void) const;
		std::string get_titre(void) const;
		//
		void		polymorph(Victim const &v) const;

};

std::ostream& operator<<(std::ostream& o, Sorcerer const & rhs);

#endif