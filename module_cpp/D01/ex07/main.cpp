#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char** av) {
    if (ac == 4) {
        std::string file(av[1]);
        std::string s1(av[2]);
        std::string s2(av[3]);
        if (s1.compare("")==0 || s2.compare("")==0)
            std::cout<<"l'un des chaine est vide"<<std::endl;
        std::ifstream myfile(file);
        std::string line;
        if (myfile.is_open())
        {
            std::ofstream rep(file + ".replace");
            if (rep.is_open()) {
                int i = 0;//occurance
                while (std::getline(myfile, line))
                {
                    std::size_t found = line.find(s1);
                    while (found != std::string::npos) {
                        i++;
                        line.replace(found, s1.size(), s2);
                        found = line.find(s1,found+s1.size());
                    }
                        rep << line;
                        rep << std::endl;
                }
                std::cout<<i<<std::endl;
                myfile.close();
                rep.close();
            }
            else
                std::cout <<"error:Unable to open file "<<file<<".replace"<<std::endl;
        }
        else
            std::cout <<"error:Unable to open file "<<file<<std::endl;
    }
    else
        std::cout << "error: numbre of argument is diff to 4"<<std::endl;
    return 0;
}