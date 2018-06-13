#include <cstdlib>
#include "Player.h"
#include "Monster.h"
#include <iostream>
#include <string>


/*
 * 
 */


int main(int argc, char** argv) {
    std::string name;
    std::cout <<"Hello! Write your name "<<std::endl;
    getline(std::cin, name);
    Player player(name, 100, 30);
    std::cout <<"Welcome "<<player.getName();
}
