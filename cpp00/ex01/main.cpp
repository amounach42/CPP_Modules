#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    PhoneBook phonebook;
    std::string command;
    while (command != "EXIT")
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, command).good())
        {
            std::cerr << "Error: bad input" << std::endl;
            return 1;
        }
        if (command == "ADD")
            phonebook.add();
        else if (command == "SEARCH")
            phonebook.search();
    }
    return 0;
}