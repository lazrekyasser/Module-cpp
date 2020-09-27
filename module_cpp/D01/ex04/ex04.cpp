#include <iostream>
#include <string>

int main() {
    std::string     str = "HI THIS IS BRAIN";
    std::string*    ptr = &str;
    std::string&    ref= str;

    std::cout<<"affiche Pointeur ="<<*ptr<<std::endl;
    std::cout<<"affiche reference ="<<ref<<std::endl;
    return 0;
}