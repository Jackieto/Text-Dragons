#include "Player.h"

Player::Player(std::string name, int health, int damage){
    setName("default");
    setHealth(100);
    setDamage(30);
}

void Player::setName(std::string name)
{
    name = name;
}

void Player::setHealth(int health){
    
    health = 100;
}

void Player::setDamage(int damage){
    
    damage = 30;
}

std::string Player::getName() const{
    
    return name;
    
}

int Player::getHealth() const{
    
    return health;
}

int Player::getDamage() const{
    
    return damage;
            
}
