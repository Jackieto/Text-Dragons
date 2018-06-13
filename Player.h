#ifndef PLAYER_H
#define PLAYER_H
#include <string>
class Player{
    public:
    Player(std::string name, int health, int damage);
    
    void setName(std::string name);
    std::string getName() const;
    
    void setHealth(int health);
    int getHealth() const;
    
    void setDamage(int damage);
    int getDamage() const;
    
    
    
    
private:
    std::string name;
    int health;
    int damage;
};
#endif /* JUGADOR_H */

