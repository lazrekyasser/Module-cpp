#ifndef PONY_H
# define PONY_H

#include <iostream>
#include <string>

class Pony {
    public:
        Pony(void);
        ~Pony(void);
        void set_name(std::string nm);
        void set_age(int ag);
        void set_color(std::string cl);
        std::string get_name(void) const;
        int         get_age(void) const;
        std::string get_color(void) const;

    private:
        std::string _namep;
        int _agep;
        std::string _color;
};

#endif