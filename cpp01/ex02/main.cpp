#include <iostream>

int main ()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPtr = &str;
    std::string &stringRef = str; 

    std::cout << "Memory address of the string str: " << &str << std::endl;
    std::cout << "Memory address held by stringPTR: " << &stringPtr << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringRef << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << "The value of the string variable: " << str << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPtr << std::endl;
    std::cout << "The value pointed by stringREF: " << stringRef << std::endl;
}
