#include "ct_data.hpp"

Ct_data::Ct_data(void) : _nbrct(0){}
Ct_data::~Ct_data(void){}

int Ct_data::count(void) const {
    return this->_nbrct;
}

void Ct_data::add_contact(Contact c) {
    if (this->_nbrct >= 8)
        return;
    this->_contacts[_nbrct] = c;
    _nbrct++;
}

void Ct_data::aff_chp(std::string ch) const {
    if (ch.size() > 10)
        std::cout<<ch.substr(0,9)<<'.';
    else
        std::cout<<std::setw(10)<<std::right<<std::setfill(' ')<<ch;
    std::cout<<'|';
}

void Ct_data::aff_contact(void) const {
    aff_chp("index");
    aff_chp("prenom");
    aff_chp("nom");
    aff_chp("pseudo");
    std::cout<<std::endl;

    std::cout<<std::setw(44)<<std::setfill('-')<<'-'<<std::endl;   
    for (int i=0; i < this->_nbrct ; i++) {
        Contact c = this->_contacts[i];
        aff_chp(std::to_string(i));
        aff_chp(c.get_chp(0));
        aff_chp(c.get_chp(1));
        aff_chp(c.get_chp(2));
        std::cout<<std::endl;
    }
}

Contact Ct_data::getContact(int index) const {
    return this->_contacts[index];
}