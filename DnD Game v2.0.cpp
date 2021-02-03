// 03 02 2021

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
int shortSwordDmg = 10;
int longSwordDmg = 15;
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
string enemy;
int enemyDamage;
int enemyHealth;
int playerDamage;
char swingYesNo;
int finalEnemyHealth;

// Colour list
char red[] = { 0x1b, '[', '1', ';', '3', '1', 'm', 0 };
char gray[] = { 0x1b, '[', '1', ';', '3', '7', 'm', 0 };
char blue[] = { 0x1b, '[', '1', ';', '3', '4', 'm', 0 };
char yellow[] = { 0x1b, '[', '0', ';', '3', '3', 'm', 0 };
char green[] = { 0x1b, '[', '0', ';', '3', '2', 'm', 0 };
char purple[] = { 0x1b, '[', '0', ';', '3', '5', 'm', 0 };
char normal[] = { 0x1b, '[', '0', ';', '3', '9', 'm', 0 };

void enter() {

    cout << purple << "\n  (Press enter to continue)\n" << normal;
    cin.ignore();

}

void healthDamage() {

    (finalEnemyHealth = enemyHealth - playerDamage);
    cout << "Enemy Health: " << finalEnemyHealth;
}

void combat() {

    //weapon damage
    if (weapon == "Short Sword") {

        playerDamage = shortSwordDmg;

    }
    else if (weapon == "Long Sword") {

        playerDamage = longSwordDmg;

    }

    //enemy stats
    if (enemy == "zombie") {

        enemyDamage = 15;
        enemyHealth = 75;

    }
    if (enemy == "ghoul") {

        enemyDamage = 10;
        enemyHealth = 50;

    }
    if (enemy == "dragon") {

        enemyDamage = 20;
        enemyHealth = 200;

    }

    cout << "\n\nDo you swing at them? (Y or N) ";
    cin >> swingYesNo;

    if (swingYesNo == 'Y') {

        cout << "\nYou swung!\n";
        cout << "You did " << playerDamage << " damage!\n\n";
        healthDamage();
        cout << "\n\n";

    }
    else if (swingYesNo == 'N') {

        cout << "\nYou did not swing\n\n";

    }
    else {

        cout << "Please enter Y or N";

    }
}

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

    cout << "\n --------------------------------";
    cout << "\n| Your health is: " << yellow << health << normal << "  (Max 100) |";
    cout << "\n| Your hunger is: " << yellow << hunger << normal << "  (Max 100) |";
    cout << "\n --------------------------------";
    cout << "\n";
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

    system("CLS");
    cout << yellow << "Narrator: " << normal << "You wake up from being knocked unconscious. Through weary eyes you notice that you are in a small, empty \n tavern which you do not recognise. Your head and right arm throb with pain and you see a clumsily wrapped bandage \n over a deep cut on your right arm, soaked in blood. As you become more awake you notice a large half orc towering \n over you with a sword secured neatly in a sheath. The figure looks surprised that you've woken.\n";

    enter();
    system("CLS");

    cout << yellow << "Narrator: " << normal << "The half-orc asks you what your name is." << "\n";

    testName = false;

    while (!testName) {

        cout << green << "\n  What's your name? " << normal;
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

    enter();
    system("CLS");

    cout << green << "You don't seem to have a weapon on yourself... you're welcome to take one of my spares. " << normal;

    cout << red << "Short Sword *5 dmg*." << normal << green << " I've got \nloads in the shop.\n" << normal;
    enter();
    system("CLS");

    cout << yellow << "\n  Steel Short Sword added to your satchel!\n" << normal;

    weapon = "Short Sword";

    satchelRun();

    statCheckQ();

    enter();
    cin.ignore();
    system("CLS");

    cout << gray << " Thank you sir, but where am I? \n" << normal;

    cout << green << "\n You're in one of the most ancient blacksmith towns in all of Braxia! \n" << normal;

    cout << gray << "\n Braxia? I don't recognise that name.\n" << normal;
    enter();
    system("CLS");

    cout << green << " Huh, really? It's what folk around here call the known world that surrounds this place. \n" << normal;

    cout << gray << "\n Strange. I don't recall hearing of a place called Braxia. \n" << normal;

    cout << green << "\n And anyway, I must ask... \n" << normal;
    cout << green << "\n What were you doing out on a trail in that neck of the woods? Folk around here don't dare enter those forests \n" << normal;

    cout << gray << "\n Why not? \n" << normal;
    enter();
    system("CLS");

    cout << green << " Well... he lowers his voice \n" << normal;
    cout << green << "\n Ever since the first few disappearances, folk don't dare leave the town. \n" << normal;

    cout << gray << "\n Disappearances? \n" << normal;

    cout << green << "\n Women and children who wandered to far from public view would often never be seen again. Not a trace. \n" << normal;
    cout << green << "\n It's like the forest is under a sinister curse. \n" << normal;
    enter();
    system("CLS");

    cout << gray << "\n Sounds like this needs investigating. \n" << normal;

    cout << green << "\n Indeed. That's why I was so surprised when I found you pinned down by those dire wolves, alive. \n" << normal;
    cout << green << "\n I managed to kill a few with my bow but the rest fled. \n" << normal;
    enter();
    system("CLS");

    cout << gray << " Thank you. Sounds like I owe you. \n" << normal;

    cout << green << "\n It's my duty as a worker in this town to protect any folk who enter these parts. \n" << normal;
    cout << green << "\n But there are jobs I can give you, if you're up to it. \n" << normal;

    cout << gray << "\n I actually came in search of work, that's about all I can remember though. \n" << normal;

    cout << green << "\n For now you need to rest and give your wounds time to heal. \n" << normal;
    cout << green << "\n You're welcome to take shelter in my place, but there is also an inn called the Hollow Oak on the other side of town. \n" << normal;

    cout << gray << "\n You've done enough for me now sir and I will be forever grateful for you're kindness. Although, I never remember asking your name. \n" << normal;

    cout << green << "\n My name is Elgran Kruurk. I have a small blacksmiths shop called the Cobalt Forge on the edge of town which you are welcome to visit at any time. \n" << normal;
    cout << green << "\n I can get you kitted out with some of the best armour and weaponry in all of Braxia. \n" << normal;
    enter();
    system("CLS");

    cout << gray << " I will be sure to visit, Elgran. \n" << normal;
    cout << gray << "\n And thank you again for saving my life. \n" << normal;

    cout << green << "\n Farewell," << normal;
    cout << blue << " " << name << normal;
    cout << green << " I hope to see you around town. \n" << normal;

    enter();
    system("CLS");



    return 0;
}

// TO VIEW SATCHEL IN GAME, RUN * satchelRun(); *
// TO RUN COMBAT, SPECIFY THE ENEMY THEN RUN * combat(); *