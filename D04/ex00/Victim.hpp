#ifndef VICTIM_H
#define VICTIM_H

#include <string>
#include <iostream>

class Victim {
	private:
		std::string _nom;
	public:
		Victim(void);
		Victim(std::string n);
		Victim(Victim const & src);
		~Victim(void);

		//operator
		Victim& operator=(Victim const & rhs);

		//get
		std::string get_nom(void) const;
		virtual void		getPolymorphed(void) const;
};

std::ostream& operator<<(std::ostream& o, Victim const & rhs);

#endif