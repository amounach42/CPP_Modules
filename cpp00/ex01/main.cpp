#include "PhoneBook.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        if (av[1] == "ADD")
            ADD();
        else if (av[1] == "SEARCH")
            SEARCH();
        else if (av[1] == "EXIT")
            EXIT();
    }
}