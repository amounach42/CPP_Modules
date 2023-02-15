#include <iostream>

class ClapTrap{
    private:
        std::string Name;
        int HitPoint;
        int EnergyPoint;
        int AttackDamage;
    public:
        /*Constructers*/
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string Name);
        /*getters*/
        std::string getName();
        int getHitPoint();
        int getEnergyPoint();
        int getAttackDamage();
        /*Setters*/
        void    setName(std::string name);
        void    setHitPoint(int hitpoint);
        void    setEnergyPoint(int hitpoint);
        void    setAttackDamage(int hitpoint);
        /*Mebmber functions*/
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};