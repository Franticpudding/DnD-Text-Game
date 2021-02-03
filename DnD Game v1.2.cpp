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
string weapon;
int shortSwordDmg = 3;
string weaponGap;
string ropeGap;
string coinsGap;
string rationsGap;
string arrowsGap;
int health;
int hunger;
char statCheckLet;
bool statChecktf;
bool testName;


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

void satchel() {

    cout << " _____________________\n"
        "| Arrows: " << arrows << arrowsGap << "|\n"
        "| Rations: " << rations << "d" << rationsGap << "|\n"
        "| Rope: " << rope << "m" << ropeGap << "|\n"
        "| Coins: " << coins << coinsGap << "|\n"
        "| Weapon: " << weapon << weaponGap << "|\n"
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

    arrows = 0;
    rations = 0;
    rope = 0;
    coins = 0;
    weapon = "None";

    health = 100;
    hunger = 100;

    //weapons Gap
    if (weapon == "None") {

        weaponGap = "       ";

    }

    //rope Gap
    if (rope == 0) {

        ropeGap = "           ";

    }

    if (rope > 1) {

        ropeGap = "           ";
    }

    if (rope > 9) {

        ropeGap = "          ";
    }

    if (rope > 99) {

        ropeGap = "         ";
    }

    //coins Gap
    if (coins == 0) {

        coinsGap = "           ";
    }

    if (coins > 1) {

        coinsGap = "           ";
    }

    if (coins > 9) {

        coinsGap = "          ";
    }

    if (coins > 99) {

        coinsGap = "         ";
    }

    //rations Gap
    if (rations == 0) {

        rationsGap = "        ";
    }

    if (rations > 1) {

        rationsGap = "        ";
    }

    if (rations > 9) {

        rationsGap = "       ";
    }

    if (rations > 99) {

        rationsGap = "      ";
    }

    //arrows Gap
    if (arrows == 0) {

        arrowsGap = "          ";
    }

    if (arrows > 1) {

        arrowsGap = "          ";
    }

    if (arrows > 9) {

        arrowsGap = "         ";
    }

    if (arrows > 99) {

        arrowsGap = "        ";
    }

    //end of gap code  


    //start of dialogue

    cout << yellow << "Narrator: " << normal << "You wake up from being knocked unconscious. Through weary eyes you notice that you are in a small, empty \n tavern which you do not recognise. Your head and right arm throb with pain and you see a clumsily wrapped bandage \n over a deep cut on your right arm, soaked in blood. As you become more awake you notice a large half orc towering \n over you with a sword secured neatly in a sheath. The figure looks surprised that you've woken." << purple << ("\n\n  (Press enter to continue)") << normal << "\n";

    cin.ignore();
    cout << yellow << "Narrator: " << normal << "The half-orc asks what your name is." << "\n";

    testName = false;

    while (!testName) {

        cout << green << "  What's your name? " << normal;
        getline(cin, name);
        if (name.empty()) { testName = false; }
        else {

            break;
        }
    }

    cout << "\n" << blue << " " << name << normal;
    cout << green << " is it? A fine name for an adventurer!" << normal;

    cout << green << "\n I found this satchel on your wagon when I picked you up. It was about the only thing I could salvage from it.\n" << normal;

    cout << yellow << "\nNarrator: " << normal << "The satchel contains:\n";
    satchel();

    cout << purple << "\n  (Press enter to continue)" << normal;
    cin.ignore();

    cout << green << "\n" << "You don't seem to have a weapon on yourself... you're welcome to take one of my spares. " << normal;

    cout << red << "Short Sword *5 dmg*." << normal << green << " I've got loads \nin the shop." << normal;
    cout << purple << "\n\n  (Press enter to take sword)\n" << normal;
    cin.ignore();

    cout << yellow << "\nSteel Short Sword added to your satchel!\n" << normal;

    weapon = "Short Sword";

    if (weapon == "Short Sword") {

        weaponGap = "";
    }

    satchel();

    statCheckQ();


    return 0;
}