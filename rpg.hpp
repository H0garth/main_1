#include <string>
using namespace std;
//Character
struct Character {
    string name;
    int level;
    int hp;
    int maxHp;
    int attack;
    int defense;
    int xp;
    int xpToNextLevel;
    int gold;
};
//RNG
int randomInt(int min, int max);

//Checking
Character createCharacter(const std::string& name, int hp, int attack, int defense);
bool isAlive(const Character& c);
void printStats(const Character& c);


//Levels

bool gainXp(Character& c, int amount);
void levelUp(Character& c);
