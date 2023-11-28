#include "Replace.hpp"

int main(int ac, char **av)
{
    
    if (ac != 4)
    {
        std::cout << "Error !\nWrong number of arguments ! <filename> <s1> <s2>" << std::endl;
        return (EXIT_FAILURE);
    }
    
    Replace replace(av[1], av[2], av[3]);
    replace.replaceFile();

    return 0;
}
