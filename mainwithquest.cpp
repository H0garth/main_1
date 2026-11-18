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
    printWithDelay("The path winds and bends when suddenly NAME trips and falls, feeling a net hoist them up into the air.");
    printWithDelay("As PLACENAME cuts themselves free, they see a group of goblins surrounding them. It's time to put their skills to the test.");
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
    startQuest(2);

    if lose:
    cout<<"The goblins have proven to be too much for PLACENAME and they have been defeated."<<endl;
    cout<<"Retry? (Y/N)"<<endl;
    if retry == Y:
    startQuest1();

void startQuest2() {
    printWithDelay("NAME recovers from the victory, and proceeds where they were going. ");
    printWithDelay("A sign appears, diverging two paths before NAME, will they turn Left(1) into a cave or Right(2) deeper into the forest?");
    if (cin = 1){
    printWithDelay("Name ventures Left, and follows the light deep within the cave. A stronghold door appears before Name. Open the door(1) or Return to the Forest(2)?
    }
    if (cin = 2){
    printwithDelay("Name ventures Right, and eventually reaches a dead end. Turn around(1) or go off the path(2)?")
    if (cin = 1 ){
    printwithDelay("Name turns around and treads deep within the cave, passing by a door to a stronghold. Open the door(1) or Return to the Forest(2)?
    }
    if (cin = 2){
    printwithDelay("Name walks off the beaten path, when all of a sudden they step into a stone circle. An angry pixie appears!")
    printwithDelay(" "How dare you step into my territory!" she exclaims" ")
    printwithDelay("You feel the ground shake before you, and sense 
    }
    
    cout<<"ENTER BATTLE - QUEST 1"<<endl;
    
}
    

    */

