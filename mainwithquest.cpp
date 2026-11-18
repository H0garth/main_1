#include <iostream>
#include <random>
#include <chrono>
#include <thread>
#include "rpg.hpp"
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
    cout << "=== " << c.name << " ===" << endl;
    cout << "Level: " << c.level << endl;
    cout << "HP:    " << c.hp << "/" << c.maxHp << endl;
    cout << "ATK:   " << c.attack << endl;
    cout << "DEF:   " << c.defense << endl;
    cout << "XP:    " << c.xp << "/" << c.xpToNextLevel << endl;
    cout << "Gold:  " << c.gold << endl;
}

void printWithDelay(const string& message) {
    cout << message << endl;
    this_thread::sleep_for(chrono::seconds(5));
}

void startQuest1() {
    printWithDelay("NAME arises from their slumber and ventures out into the forest where the path towards PLACENAME begins.");
    printWithDelay("The path winds and bends when suddenly PLACENAME trips and falls, feeling a net hoist him up into the air.");
    printWithDelay("As PLACENAME cuts himself free, he sees a group of goblins surrounding him. It's time to put their skills to the test.");
    cout<<"ENTER BATTLE - QUEST 1"<<endl;
    
}

int main()
{
    int start = 0;

    cout << "Welcome to Marc's Magic Adventure!" << endl;

    do {
        cout << "If you are ready, type 1 to Start." << endl;
        cin >> start;

        if (start != 1) {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (start != 1);

    printWithDelay("Loading...");
    startQuest1(); // Call the first quest function

    return 0;
}




    /*
    if win:
    cout<<"The wind has been taken from the goblins and PLACENAME has emerged victorious."<<endl;
    cout<<"The forest still calls out your name. Continue forward brave traveller!"<<endl;
    cout<<"QUEST 1 - Goblin Ambush COMPLETE"<<endl;

    if lose:
    cout<<"The goblins have proven to be too much for PLACENAME and they have been defeated."<<endl;
    cout<<"Retry? (Y/N)"<<endl;
    if retry == Y:
    quest 1 again.

    */

