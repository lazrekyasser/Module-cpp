#include "Pony.hpp"

void ponyOnTheStack(void) {
    Pony    redpony;
    redpony.set_name("POP");
    redpony.set_age(10);
    redpony.set_color("red");
    std::cout<<"NAME="<<redpony.get_name()<<std::endl;
    std::cout<<"AGE="<<redpony.get_age()<<std::endl;
    std::cout<<"COLOR="<<redpony.get_color()<<std::endl;
}

void ponyOnTheHeap(void) {
    Pony    *bluepony;
    bluepony = new Pony();
    bluepony->set_name("MARK");
    bluepony->set_age(13);
    bluepony->set_color("blue");
    std::cout<<"NAME="<<bluepony->get_name()<<std::endl;
    std::cout<<"AGE="<<bluepony->get_age()<<std::endl;
    std::cout<<"COLOR="<<bluepony->get_color()<<std::endl;
    delete bluepony;///
}

int main() {
    std::cout <<"PONY ON THE STACK"<<std::endl;
    ponyOnTheStack();
    std::cout <<"-----------------"<<std::endl;
    std::cout <<"PONY ON THE HEAP "<<std::endl;
    ponyOnTheHeap();
    return 0;
}