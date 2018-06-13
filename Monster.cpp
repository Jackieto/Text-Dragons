#include "Monster.h"

Monster::Monster(std::string name, int health, int damage){
    setName("default");
    setHealth(100);
    setDamage(30);
}

void Monster::setName(std::string name)
{
    name = name;
}

void Monster::setHealth(int health){
    
    health = 100;
}

void Monster::setDamage(int damage){
    
    damage = 30;
}

std::string Monster::getName() const{
    
    return name;
    
}

int Monster::getHealth() const{
    
    return health;
}

int Monster::getDamage() const{
    
    return damage;
            
}
