#ifndef CT_DATA_H
# define CT_DATA_H
#include "contact.hpp"

class Ct_data {
    private:
        int _nbrct;
        Contact _contacts[8];
    public:
        Ct_data(void);
        ~Ct_data(void);
        int count(void) const;
        void add_contact(Contact c);
        void aff_contact(void) const;
        void aff_chp(std::string ch) const;
        Contact getContact(int index)const;
};

#endif