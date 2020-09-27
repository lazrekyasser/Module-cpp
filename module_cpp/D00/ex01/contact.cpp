#include "contact.hpp"

std::string Contact::_name_chp[11] = {
        "First name",
        "Last name",
        "Nickname",
        "Login",
        "Postal address",
        "Email address",
        "Phone number",
        "Birthday date",
        "Favorite meal",
        "Underwear color",
        "Darkest secret"
};

Contact::Contact(void){
}
Contact::~Contact(void){
}

void Contact::get_contact(void) {
    std::cout<<"creation un nv contact"<<std::endl;
    for (int i=0;i < 11;i++) {
        std::string t = "";
        while (t.compare("")==0){
            std::cout<<(i+1)<<"|"<<this->_name_chp[i]<<">";
            std::getline(std::cin,t);
            if (std::cin.good() == 0)
                exit(0);
            if (t.compare("")==0)
                std::cout<<"error:le champ doit etre plein"<<std::endl;
        }
        this->_champs[i] = t;
    }
}

std::string Contact::get_chp(int i) {
    return this->_champs[i];
}

void Contact::display(void) const {
    for (int i=0;i < 11;i++) {
        std::cout<<Contact::_name_chp[i]<<'='<<this->_champs[i]<<std::endl;
    }
}