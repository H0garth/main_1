#include <iostream>
#include <random>
#include "rpg.hpp"
#include "combat.hpp"
using namespace std;

int randomInt(int min, int max) {
    static mt19937 rng(random_device{}());
    uniform_int_distribution<int> dist(min, max);
    return dist(rng);
}


Character createCharacter(const string& name, int hp, int attack, int defense) {
    Character c;
    c.name = name;
    c.level = 1;
    c.hp = hp;
    c.maxHp = hp;
    c.attack = attack;
    c.defense = defense;
    c.xp = 0;
    c.xpToNextLevel = 100;
    c.gold = 0;
    return c;
}

bool isAlive(const Character& c) {
    return c.hp > 0;
}

void printStats(const Character& c) {
    std::cout << "=== " << c.name << " ===" << std::endl        
              << "Level: " << c.level << std::endl
              << "HP:    " << c.hp << "/" << c.maxHp << std::endl
              << "ATK:   " << c.attack << std::endl
              << "DEF:   " << c.defense << std::endl
              << "XP:    " << c.xp << "/" << c.xpToNextLevel << std::endl
              << "Gold:  " << c.gold << std::endl;
}
