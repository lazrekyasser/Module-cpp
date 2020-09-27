#ifndef CONTACT_H
# define CONTACT_H
#include <string>
#include <iostream>
#include <iomanip>

class Contact {
    private:
        static std::string _name_chp[11];
        std::string _champs[11];
    public:
        Contact(void);
        ~Contact(void);
        void get_contact(void);
        std::string get_chp(int i);
        void display(void) const;
        
};

#endif