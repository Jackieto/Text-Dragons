#ifndef MONSTER_H
#define MONSTER_H
#include <string>

class Monster{
    public:
    Monster(std::string name, int health, int damage);
    
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

    



#endif /* MONSTER_H */
