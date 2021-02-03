// 02 02 2021

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

// Variables
int arrows = 0;
int rations = 0;
int rope = 0;
int coins = 0;
string weapon = "None";
string name;
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

    cout << " ____________________\n"
        "| Arrows: " << arrows << arrowsGap << "|\n"
        "| Rations: " << rations << "d" << rationsGap << "|\n"
        "| Rope: " << rope << "m" << ropeGap << "|\n"
        "| Coins: " << coins << coinsGap << "|\n"
        "| Weapon: " << weapon << weaponGap << "|\n"
        " --------------------\n";

}

void GapRun() {

    if (weapon == "None") {

        weaponGap = "       ";

    }

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

    if (weapon == "Short Sword") {

        weaponGap = "";
    }

    //end of gap code

}

void satchelRun() {

    GapRun();
    satchel();

}

void stats() {

    cout << "\nYour health is: " << yellow << health << normal << "  (Max 100)";
    cout << "\nYour hunger is: " << yellow << hunger << normal << "  (Max 100)";
    cout << "\n\n";
}

void statCheckQ() {

    cout << "\nDo you want to check stats? (Y or N): ";
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

    health = 100;
    hunger = 100;

    //start of dialogue

    cout << yellow << "Narrator: " << normal << "You wake up from being knocked unconscious. Through weary eyes you notice that you are in a small, empty \n tavern which you do not recognise. Your head and right arm throb with pain and you see a clumsily wrapped bandage \n over a deep cut on your right arm, soaked in blood. As you become more awake you notice a large half orc towering \n over you with a sword secured neatly in a sheath. The figure looks surprised that you've woken." << purple << ("\n\n  (Press enter to continue)") << normal << "\n";

    cin.ignore();
    cout << yellow << "Narrator: " << normal << "The half-orc asks you what your name is." << "\n";

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
    satchelRun();

    cout << purple << "\n  (Press enter to continue)" << normal;
    cin.ignore();

    cout << green << "\n" << "You don't seem to have a weapon on yourself... you're welcome to take one of my spares. " << normal;

    cout << red << "Short Sword *5 dmg*." << normal << green << " I've got \nloads in the shop." << normal;
    cout << purple << "\n\n  (Press enter to take sword)\n" << normal;
    cin.ignore();

    cout << yellow << "\nSteel Short Sword added to your satchel!\n" << normal;

    weapon = "Short Sword";

    satchelRun();

    statCheckQ();



    return 0;
}

// TO VIEW SATCHEL IN GAME, RUN * satchelRun(); *