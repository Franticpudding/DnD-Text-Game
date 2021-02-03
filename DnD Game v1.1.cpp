// 02 02 2021

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

// Variables
string name;
int arrows;
int rations;
int rope;
int coins;
string weapon = "None";
string gap;
int shortSwordDmg = 3;
string weaponGap;
string dummyWeapon;
int health;
int hunger;
char statCheckLet;
bool statChecktf;


// Colour list
char red[] = { 0x1b, '[', '1', ';', '3', '1', 'm', 0 };
char blue[] = { 0x1b, '[', '1', ';', '3', '4', 'm', 0 };
char yellow[] = { 0x1b, '[', '0', ';', '3', '3', 'm', 0 };
char green[] = { 0x1b, '[', '0', ';', '3', '2', 'm', 0 };
char purple[] = { 0x1b, '[', '0', ';', '3', '5', 'm', 0 };
char normal[] = { 0x1b, '[', '0', ';', '3', '9', 'm', 0 };


void sign1() {

    cout << "                       _____________\n"
        << "                       |  Good ol' |\n"
        << "                       |   Tavern  |\n"
        << "                       |           |\n"
        << "                       -------------\n";
}

void backpack() {

    cout << " _____________________\n"
        "| Arrows: " << arrows << "          |\n"
        "| Rations: " << rations << "d        |\n"
        "| Rope: " << rope << "m          |\n"
        "| Weapon: " << weapon << weaponGap << "|\n"
        "| Coins: " << coins << "           |\n"
        " ---------------------\n";
}

void stats() {

    cout << "\nYour health is: " << yellow << health << normal;
    cout << "\nYour hunger is: " << yellow << hunger << normal;
    cout << "\n\n";
}

void statCheckQ() {

    cout << "Do you want to check stats? (Y or N): ";
    cin >> statCheckLet;

    switch (statCheckLet) {
    case 'N':  case 'n':
        statChecktf = false;
        break;
    case 'Y':  case 'y':
        statChecktf = true;
        stats();
        break;
    }
}

int main() {

    rope = 2;
    rations = 2;
    arrows = 5;
    coins = 0;

    health = 10;
    hunger = 10;

    if (weapon == "None") {

        weaponGap = "       ";

    }

    cout << yellow << "Narrator: " << normal << "You wake up from being knocked unconscious and notice that you are in a small, shady tavern with a large half-orc \ntowering over you, surprised that you've survived" << purple << (" (Press enter to continue)") << normal << "\n";

    cin.ignore();
    cout << yellow << "Narrator : " << normal << "The half-orc asks what you name is." << "\n" << green << "What's your name? " << normal;

    getline(cin, name);

    cout << "\n" << blue << name << normal << " is it? A fine name for an adventurer.\n";

    cout << green << "\nI found a backpack on your wagon when I picked you up\n" << normal;

    cout << yellow << "\nNarrator:" << normal << "The backpack contains:,\n";
    backpack();

    cout << purple << "\nPress enter to continue" << normal;
    cin.ignore();

    cout << green << "\n" << "You don't seem to have a weapon on yourself... here, take my " << normal;

    cout << red << "Short Sword *5 dmg*" << normal;
    cout << " (Press enter to take sword)\n";
    cin.ignore();

    cout << yellow << "\nSteel Short Sword added to backpack!\n" << normal;

    weapon = "Short Sword";

    if (weapon == "Short Sword") {

        weaponGap = "";
    }

    backpack();

    statCheckQ();


    return 0;
}