#include <iostream>

class Weapon
{
private:
    std::string type;
    std::string const& getType();
    void setType(std::string);

public:
    Weapon();
};