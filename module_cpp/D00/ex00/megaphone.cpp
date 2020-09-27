#include <iostream>
#include <string>

int main(int ac, char **av)
{
    int i;

    i = 1;
    if (ac <= 1)
    {
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
        return (0);
    }
    else
    {
        while (i < ac)
        {
            std::string str = av[i];
            unsigned int j = 0;
            while (j < str.size())
            {
                //str.at(j) = std::toupper(str.at(j));
                if (av[i][j] >= 'a' && av[i][j] <= 'z')
                    av[i][j] -= 32;
                j++;
            }
            std::cout<<av[i];
            i++;
        }
        std::cout<<std::endl;
    }
    return (0);
}