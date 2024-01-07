#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN"; //stack

    std::string *stringPTR = &str; //heap
    std::string &stringREF = str; //ref

    std::cout << "String Memory Address: " << &str << std::endl;
    std::cout << "Pointer Memory Address: " << stringPTR << std::endl;
    std::cout << "Reference Memory Address: " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "String Value: " << str << std::endl;
    std::cout << "Pointer Value: " << *stringPTR << std::endl;
    std::cout << "Reference Value: " << stringREF << std::endl;

    return 0;
}
