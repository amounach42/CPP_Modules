#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    PhoneBook myPhoneBook;
    std::string command;
    while (command != "EXIT") {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::cin >> command;
        if (command == "ADD") {
            myPhoneBook.ADD();
        } else if (command == "SEARCH") {
            myPhoneBook.SEARCH();
        }
    }
    return 0;
}
