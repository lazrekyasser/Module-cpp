#include <iostream>
#include "contact.hpp"
#include "ct_data.hpp"

int main()
{
    Ct_data dt;

    std::cout<<"PHONEBOOK CONTACT"<<std::endl;
    std::string command = "";
    while (command.compare("EXIT") != 0)
    {
        std::cout<<"phonebook->";
        std::getline(std::cin, command);
        if(std::cin.good() == 0)
            exit(0);
    
        if (command.compare("ADD") == 0)
        {
            std::cout<<"ADD contact"<<std::endl;
            //check if contact is full
            if (dt.count() >= 8)
            {
                std::cout<<"error:contact is full"<<std::endl;
            }
            else
            {
                Contact ct;
                ct.get_contact();
                dt.add_contact(ct);
            }
        }
        else if (command.compare("SEARCH") == 0)
        {
            std::cout<<"search for contact"<<std::endl;
            dt.aff_contact();
            if (dt.count() == 0)
                continue;
            int chx_int = 0;
            while (true) {
                std::string choix;
                std::cout<<"choisir un index d'un contacte>";
                std::getline(std::cin, choix);
                if (std::cin.good() == 0)
                    exit(0);
                std::stringstream conv(choix);
                conv >> chx_int;
                if (chx_int >=0 && chx_int < dt.count())
                    break;
                std::cout <<"error:ce contact n'existe pas"<<std::endl;
                std::cout <<"choisir entre 0 est "<< (dt.count()-1) <<std::endl;
            }
            dt.getContact(chx_int).display();
        }
    }
    return 0;
}