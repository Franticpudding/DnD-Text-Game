#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

// Variables
string name;
int arrows = 5;
int rations = 2;
int rope = 10;
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

void hollowSquare1() {
    int squareHeight = 10, squareWidth = 25;
    for (int width = 1; width <= squareHeight; width++)
    {
        if (width <= 1)
            for (int width = 1; width <= squareWidth; width++)
            {
                cout << "*";
            }
        else if (width < squareHeight)
        {
            cout << endl;
            for (int width2 = 1; width2 <= squareWidth; width2++)
            {
                if (width2 == 1 || width2 == squareWidth)
                    cout << "*";
                else
                    cout << " ";
            } //end of for  variable width2
        }// end of else if
        else
        {
            cout << endl;
            for (int width3 = 1; width3 <= squareWidth; width3++)
            {
                cout << "*";
            }//end of for having variable width3
        }// end of else
    }// end of first for loop
}// end of main function

void solidSquare1() {

    int rows = 10, columns = 20, i, j;
    i = 1;
    do {
        j = 1;
        do {
            cout << "*";//print star
            j++;
        } while (j <= columns);
        cout << "\n";//move to next line
        i++;
    } while (i <= rows);
}

void sign1() {

    cout << "                       _____________\n"
        << "                       |  Good ol' |\n"
        << "                       |   Tavern  |\n"
        << "                       |           |\n"
        << "                       -------------\n";
}

void backpack() {

    cout << "____________________\n"
        "| Arrows: " << arrows << "         |\n"
        "| Rations: " << rations << "d       |\n"
        "| Rope: " << rope << "m         |\n"
        "| Weapon: " << weapon << weaponGap << "|\n"
        "--------------------\n";
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

    health = 10;
    hunger = 10;

    if (weapon == "None") {

        weaponGap = "      ";

    }

    cout << "You wake outside a dark and dingy tavern, a sign above your head reads: (Enter to continue)\n";
    sign1();

    cin.ignore();
    cout << "\nWhat's your name? ";

    getline(cin, name);

    cout << "\n" << blue << name << normal << " is it? A fine name for an adventurer.\n";

    cout << green << "\nWe found a backpack on your possession when we found you. Here is what's inside:\n" << normal;
    backpack();

    cout << green << "\n" << "You don't seem to have a weapon on yourself... here, take my " << normal;

    cout << red << "Short Sword *5 dmg*" << normal;
    cout << " (Press enter to take sword)\n";
    cin.ignore();

    cout << yellow << "\nSteel Short Sword added to backpack!\n" << normal;

    weapon = "shortSword";

    if (weapon == "shortSword") {

        weaponGap = "";
    }

    backpack();

    statCheckQ();

    return 0;
}
