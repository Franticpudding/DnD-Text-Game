// 06 02 2021

#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <limits>
#include <cstdlib>
#include <ctime>

using namespace std;

// Variables
int health;
int hunger;
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
char statCheckLet;
bool statChecktf;
bool testName;
bool testClass;
string enemy;
int enemyDamage;
int enemyHealth;
int playerDamage;
string classChoice1;
string itemToPickUp;
char pickUpQ2;
int itemAmount;
int itemAmountMax;
bool continuePickUp;
char saveQ;
char saveResetQ;
bool alreadyResetSave;
bool wantToFight;
char attackYesNo;
string dead;
char damageLoopYorN;
int randomD20ShortSword;
bool continueCombat;
bool noWeapon;
bool noNo;
string difficulty;
string difficultyQ;
char difficultyQ2;
bool difficultyQ3;
bool difficultyQ4;
bool difficultyQ5;
bool difficultyQ6;
char loadSaveQ;
bool loadSavetf;
bool dataLoaded;
string quest1 = "None";
string quest2 = "None";
string quest3 = "None";
string addQuest;
string questGap1;
string questGap2;
string questGap3;
string locationChoice1;
bool alreadyEnteredInn;
bool buyRoom;
char buyRoomQ;
bool buyRoomQ2;
bool whereGo1;
bool test10;
bool AlreadyInnEvent;
bool alreadyEnteresInn2;

// Attribues (Variables)
int strength;
int intelligence;
int wisdom;
int dexterity;
int constitution;
int charisma;

string classes[3] = { "Rogue", "Fighter", "Bard" };

// Colour list
char red[] = { 0x1b, '[', '1', ';', '3', '1', 'm', 0 };
char gray[] = { 0x1b, '[', '1', ';', '3', '7', 'm', 0 };
char blue[] = { 0x1b, '[', '1', ';', '3', '4', 'm', 0 };
char yellow[] = { 0x1b, '[', '0', ';', '3', '3', 'm', 0 };
char green[] = { 0x1b, '[', '0', ';', '3', '2', 'm', 0 };
char purple[] = { 0x1b, '[', '0', ';', '3', '5', 'm', 0 };
char normal[] = { 0x1b, '[', '0', ';', '3', '9', 'm', 0 };

void start()
{
    cout << "\n     Developed by Press Enter Group";
    cout << "\n";
    cout << R"###(                                                      /\      *                                  )###" << "\n";
    cout << R"###(                     /\                              /  \                            /\          )###" << "\n";
    cout << R"###(                    /  \                /\          /    \      *       /\          /\/\         )###" << "\n";
    cout << R"###(                   /    \      /\      /  \        /      \  *         /  \        /    \        )###" << "\n";
    cout << R"###(                  /      \    /  \    /    \      /\/\/\/\/\          /    \      /______\       )###" << "\n";
    cout << R"###(                 /\/\/\/\/\  /\/\/\  /\/\//\\    /          \ *      /      \    /~ ~/____\      )###" << "\n";
    cout << R"###(                /          \/      \/    /  \\  /           *\      /\/\/\/\/\  /|  |      \     )###" << "\n";
    cout << R"###(               /            \      /    /    \\/           *  \    /          \/ |  |       \    )###" << "\n";
    cout << R"###(              /    __        \    /    /\/\/\/\\          __*  \  /            \ |  |        \   )###" << "\n";
    cout << R"###(             /    /  \        \  /    /        \\        /   \  \/              \|* |         \  )###" << "\n";
    cout << R"###(            /____/____\________\/____/__________\\_______[___]___\_______________\ *|__________\ )###" << "\n";
    cout << R"###(                                                                                /* */            )###" << "\n";
    cout << R"###(                                                                               /   /             )###" << "\n";
    cout << R"###(                                        (Press enter to continue)             / ~ /              )###" << "\n";
    cout << R"###(                                                                             /   /               )###" << "\n";
    cout << R"###(                          __________________________________________________/   /                )###" << "\n";
    cout << R"###(                         /   ~              ~         ~        ~            ~  /                 )###" << "\n";
    cout << R"###(                        /    _________~____________________~__________________/                  )###" << "\n";
    cout << R"###(                       / ~  /                                                                    )###" << "\n";


    ifstream ifile;
    ifile.open("playerData.txt");
    if (ifile) {

    }
    else {
        std::ofstream outfile("playerData.txt");
        outfile.close();
    }

    cout << "\n  ";
    cin.ignore();
    system("CLS");
}

//"Press enter to continue"
void enter() {

    cout << purple << "\n  (Press enter to continue)\n" << normal;
    cin.ignore();

}

//combat code

void shortSwordRoll()
{
    int no_of_numbers = shortSwordDmg;
    int first_number = 1;

    std::srand((unsigned int)std::time(0));

    randomD20ShortSword = rand() % no_of_numbers + first_number;
}

void rollDamage()
{
    if (weapon == "ShortSword")
    {
        playerDamage = (randomD20ShortSword + 2);
        playerDamage = playerDamage + strength;
    }
    else if (weapon == "None")
    {
        playerDamage = 0;
    }
}

void fullRole()
{
    if (weapon == "ShortSword")
    {
        shortSwordRoll();
    }
    rollDamage();
}

void enemyDamage1() {

    fullRole();
    (health = health - (enemyDamage - constitution));
    cout << "\n Your health: " << health;
    cout << "\n They did " << (enemyDamage - constitution);
}

void damage1() {

    fullRole();
    (enemyHealth = enemyHealth - playerDamage);
    cout << "\n Their health: " << enemyHealth;
    cout << "\n You did " << playerDamage << "\n";
}

void finalDamage() {

    if (enemyHealth <= 0) {

        dead = "enemy";
        cout << "\n\n " << yellow << "Enemy died!" << normal << "\n";
    }
    else {

    }
}

void finalDamage2() {

    if (health <= 0) {

        if (difficulty == "Hardcore")
        {
            ofstream ofs;
            ofs.open("playerData.txt", std::ofstream::out | std::ofstream::trunc);
            ofs.close();
            dead = "player";
            cout << "\n\nYou died... a great adventure over...\n Save file deleted.\n";
            enter();
            cin.ignore();
            exit(1);
        }
        else if (difficulty == "Normal")
        {
            dead = "player";
            cout << "\n\nYou died... a great adventure over...\n";
            enter();
            cin.ignore();
            exit(1);
        }
        else
        {
            cout << "Incorrect difficulty";
        }
    }
}

void damageLoop() {

    do {
        cout << "\n\nDo you attack again? (Y / N): ";
        cin >> damageLoopYorN;

        if (damageLoopYorN == 'Y' || damageLoopYorN == 'y') {

            fullRole();
            damage1();
            enemyDamage1();
        } 
        else if (damageLoopYorN == 'N' || damageLoopYorN == 'n') 
        {
            break;
        }

    } while (health > 0 && enemyHealth > 0);
    finalDamage2();
    finalDamage();
}

void combatTotal()
{
    fullRole();

    damage1();

    enemyDamage1();

    damageLoop();

    if (damageLoopYorN == 'N' || damageLoopYorN == 'n')
    {
        cout << "You retreat";
    }
}

void combat1() {

    if (enemy == "zombie")
    {
        enemyDamage = 50;
        enemyHealth = 75;
    }
    if (enemy == "ghoul")
    {
        enemyDamage = 5;
        enemyHealth = 50;
    }
    if (enemy == "dragon")
    {
        enemyDamage = 20;
        enemyHealth = 200;
    }

    if (weapon == "None")
    {
        continueCombat = false;
        noWeapon = true;
    }
    else if (weapon == "ShortSword")
    {
        continueCombat = true;
        noWeapon = false;
    }

    cout << "\n Do you fight? (Y or N) ";
    cin >> attackYesNo;

    if (attackYesNo == 'N' || attackYesNo == 'n')
    {
        cout << "\n You did not swing\n";
        noNo = true;
    }

    if (continueCombat == true && noWeapon == false && noNo == !true)
    {
        if (attackYesNo == 'Y' || attackYesNo == 'y')
        {
            combatTotal();
        }
        else
        {
            cout << "Please enter Y or N";
        }
    }
    else if (continueCombat == false && noWeapon == true && noNo == !true)
    {
        cout << "\n You don't have a weapon\n";
    }
    else
    {
    }
}
//end of combat code

//sign
void sign1() 
{
    cout << "                       _____________\n"
        << "                       |  Good ol' |\n"
        << "                       |   Tavern  |\n"
        << "                       |           |\n"
        << "                       -------------\n";
}

//quest GUI
void questGUI() 
{
    cout << "\n   ___________________\n"
        "  |                   |\n"
        "  |  Quest 1 = " << quest1 << questGap1 << "|\n"
        "  |  Quest 2 = " << quest2 << questGap2 << "|\n"
        "  |  Quest 3 = " << quest3 << questGap3 << "|\n"
        "  |___________________|\n";
}

void questCheck()
{
    if (quest1 == "None")
    {
        quest1 = addQuest;
    } 
    else if (quest2 == "None")
    {
        quest2 = addQuest;
    }
    else if (quest3 == "None")
    {
        quest3 = addQuest;
    }
    else if (quest1 != "None" && quest2 != "None" && quest3 != "None")
    {
        cout << "Quests full";
    }
    else 
    {
        cout << "error";
    }
}

void questGap()
{
    if (quest1 == "None")
    {
        questGap1 = "   ";
    }
    else if (quest1 == "Cave")
    {
        questGap1 = "   ";
    }
    else if (quest1 == "Towns")
    {
        questGap1 = "  ";
    }
    else if (quest1 == "Hi")
    {
        questGap1 = "      ";
    }

    if (quest2 == "None")
    {
        questGap2 = "   ";
    }
    else if (quest2 == "Cave")
    {
        questGap2 = "   ";
    }
    else if (quest2 == "Towns")
    {
        questGap2 = "  ";
    }
    else if (quest2 == "Hi")
    {
        questGap2 = "      ";
    }

    if (quest3 == "None")
    {
        questGap3 = "   ";
    }
    else if (quest3 == "Cave")
    {
        questGap3 = "   ";
    }
    else if (quest3 == "Towns")
    {
        questGap3 = "  ";
    }
    else if (quest3 == "Hi")
    {
        questGap3 = "      ";
    }
}

void fullQuest()
{
    questCheck();
    questGap();
    questGUI();
}

void addAnotherQuest() 
{
    questCheck();
    questGap();
}

//satchel GUI
void satchel() 
{
    cout << "\n   ____________________\n"
        "  | Arrows: " << arrows << arrowsGap << "|\n"
        "  | Rations: " << rations << "d" << rationsGap << "|\n"
        "  | Rope: " << rope << "m" << ropeGap << "|\n"
        "  | Coins: " << coins << coinsGap << "|\n"
        "  | Weapon: " << weapon << weaponGap << "|\n"
        "   --------------------\n";
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

    if (weapon == "ShortSword") {

        weaponGap = " ";
    }
    //end of gap code
}

//runs satchel properly
void satchelRun()
{
    GapRun();
    satchel();
}

//all stats
void stats()
{
    cout << "\n --------------------------------";
    cout << "\n| Your health is: " << yellow << health << normal << "  (Max 100) |";
    cout << "\n| Your hunger is: " << yellow << hunger << normal << "  (Max 100) |";
    cout << "\n --------------------------------";
    cout << "\n";
}

//check if player wants to stat check
void statCheckQ()
{
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

void classChoice()
{
    if (dataLoaded == !true)
    {

        cout << "\n  " << yellow << "Choose your class: " << normal;

        for (auto const& value : classes)
            cout << value << ", ";

        cout << "\n\n" << red << "  Rogue:   " << normal << "Agile and stealty.\n\n" << red << "  Fighter: " << normal << "Strong and powerful.\n\n" << red << "  Bard:    " << normal << "Charismatic and quick footed";

        testClass = false;

        while (!testClass)
        {
            cout << "\n\n " << yellow << "What class do you want? " << normal;
            cin >> classChoice1;
            if (classChoice1 == "Rogue") { testClass = true; }
            else if (classChoice1 == "Bard") { testClass = true; }
            else if (classChoice1 == "Fighter") { testClass = true; }
            else if (classChoice1 == "Franticpudding") { testClass = true; }
            else if (testClass = true && classChoice1 == "\n") {
                break;
            }
            else {
            }
        }

        if (classChoice1 == "Bard")
        {
            cout << "\n  You chose: " << purple << "Bard" << normal << "\n"
                "\n Strength = 3\n"
                " Intelligence = 2\n"
                " Wisdom = 1\n"
                " Dexterity = 3\n"
                " Constitution = 3\n"
                " Charisma = 2\n";
        }
        else if (classChoice1 == "Fighter")
        {
            cout << "\n  You chose: " << purple << "Fighter" << normal << "\n"
                "\n Strength = 4\n"
                " Intelligence = 1\n"
                " Wisdom = 1\n"
                " Dexterity = 1\n"
                " Constitution = 3\n"
                " Charisma = 1\n";
        }
        else if (classChoice1 == "Rogue")
        {
            cout << "\n  You chose: " << purple << "Rogue" << normal << "\n"
                "\n Strength = 2\n"
                " Intelligence = 2\n"
                " Wisdom = 1\n"
                " Dexterity = 4\n"
                " Constitution = 2\n"
                " Charisma = 1\n";
        }
        else if (classChoice1 == "Franticpudding")
        {
            cout << "\n  You chose: " << yellow << "Franticpudding" << normal << "\n"
                "\n Strength = 10\n"
                " Intelligence = 10\n"
                " Wisdom = 10\n"
                " Dexterity = 10\n"
                " Constitution = 10\n"
                " Charisma = 10\n";
        }

        if (classChoice1 == "Bard") {

            strength = 3;
            intelligence = 2;
            wisdom = 1;
            dexterity = 3;
            constitution = 3;
            charisma = 2;
        }

        if (classChoice1 == "Fighter") {

            strength = 4;
            intelligence = 1;
            wisdom = 1;
            dexterity = 1;
            constitution = 3;
            charisma = 1;

        }

        if (classChoice1 == "Rogue") {

            strength = 2;
            intelligence = 2;
            wisdom = 1;
            dexterity = 4;
            constitution = 2;
            charisma = 1;

        }
        if (classChoice1 == "Franticpudding") {

            strength = 10;
            intelligence = 10;
            wisdom = 10;
            dexterity = 10;
            constitution = 10;
            charisma = 10;

        }
    }
}

void file1() {

    ofstream fout;
    ifstream fin;
    fin.open("playerData.txt");
    fout.open("playerData.txt", ios::app); //append mode

    ifstream ifs("playerData.txt", std::ios::ate);

    if (ifs.tellg() == 0)
    {
        fout << health << "\n";
        fout << hunger << "\n";
        fout << arrows << "\n";
        fout << rations << "\n";
        fout << rope << "\n";
        fout << coins << "\n";
        fout << weapon << "\n";
        fout << classChoice1 << "\n";
        fout << name << "\n";
        fout << difficulty << "\n";
        fin.close();
        fout.close(); //closing the file
    }
    else if (ifs.tellg() > 1)
    {
        if (alreadyResetSave == false) {
            cout << "\nFile full, no save";
            cout << "\n\nDo you want to overwrite save? ";
            cin >> saveResetQ;

            if (saveResetQ == 'N' || saveResetQ == 'n')
            {
                cout << "\n Save not reset.\n";
            }
            else if (saveResetQ == 'Y' || saveResetQ == 'y')
            {
                cout << "\nSave Reset\n";
                ofstream ofs;
                ofs.open("playerData.txt", std::ofstream::out | std::ofstream::trunc);
                ofs.close();
                alreadyResetSave = true;
                file1();
                enter();
                system("CLS");
            }
        }
    }
    else
    {
    }
}

void file2() {

    ifstream file("playerData.txt");
    string str;
    while (getline(file, str)) {
        cout << str << "\n";
    }
}

void saveCharacterQ()
{
    cout << "\n\n " << yellow << "Do you want to save? (Y / N): " << normal;
    cin >> saveQ;

    if (saveQ == 'N' || saveQ == 'n')
    {
        cout << "\nNo save for you";
    }
    else if (saveQ == 'Y' || saveQ == 'y')
    {
        file1();
    }

    else
    {
        cout << "\nEnter Y or N for save";
        saveCharacterQ();
    }
}

void loadSave() {

    ifstream ifs("playerData.txt", std::ios::ate);

    if (ifs.tellg() > 1) {
        cout << "\n\n     " << red << "Do you want to load your old save? (Y / N): " << normal;
        cin >> loadSaveQ;

        switch (loadSaveQ) {
        case 'N':  case 'n':
            loadSavetf = false;
            break;
        case 'Y':  case 'y':
            loadSavetf = true;
            break;
        }

        if (loadSavetf == true) {

            int var1;
            int var2;
            int var3;
            int var4;
            int var5;
            int var6;
            string var7;
            string var8;
            string var9;
            string var10;
            string var11;

            ifstream saveFile("playerData.txt");
            if (saveFile.is_open())
            {
                while (!saveFile.eof())
                {
                    saveFile >> var1;

                    health = var1;
                    break;
                }
                while (!saveFile.eof())
                {
                    saveFile >> var2;

                    hunger = var2;
                    break;
                }
                while (!saveFile.eof())
                {
                    saveFile >> var3;

                    arrows = var3;
                    break;
                }
                while (!saveFile.eof())
                {
                    saveFile >> var4;

                    rations = var4;
                    break;
                }
                while (!saveFile.eof())
                {
                    saveFile >> var5;

                    rope = var5;
                    break;
                }
                while (!saveFile.eof())
                {
                    saveFile >> var6;

                    coins = var6;
                    break;
                }
                while (!saveFile.eof())
                {
                    getline(saveFile, var7);
                    break;
                }
                while (!saveFile.eof())
                {
                    getline(saveFile, var8);

                    weapon = var8;
                    break;
                }
                while (!saveFile.eof())
                {
                    getline(saveFile, var9);

                    classChoice1 = var9;
                    break;
                }
                while (!saveFile.eof())
                {
                    getline(saveFile, var10);

                    name = var10;
                    break;
                }
                while (!saveFile.eof())
                {
                    getline(saveFile, var11);

                    difficulty = var11;
                    break;
                }

                cout << yellow << "\n Save loaded.\n" << normal;

                dataLoaded = true;

                saveFile.close();
            }
        }
        else if (loadSavetf == false)
        {
            cout << "\n\n Save not loaded";
            dataLoaded = false;
        }
    }
    else if (ifs.tellg() == 0)
    {
        cout << "\n  " << yellow << "No data in save file" << normal << "\n";
    }
}

void pickUp() {

    if (itemToPickUp == "coins")
    {
        (coins = coins + itemAmount);
        itemAmount = 0;
        itemToPickUp = "none";
    }
    else if (itemToPickUp == "arrows")
    {
        (arrows = arrows + itemAmount);
        itemAmount = 0;
        itemToPickUp = "none";
    }
    else if (itemToPickUp == "rope")
    {
        (rope = rope + itemAmount);
        itemAmount = 0;
        itemToPickUp = "none";
    }
    else if (itemToPickUp == "rations")
    {
        (rations = rations + itemAmount);
        itemAmount = 0;
        itemToPickUp = "none";
    }
}

void names()
{
    if (name == "Obama")
    {
        cout << "\n http://gph.is/24e8zuB \n";
    }
    if (name == "Biden")
    {
        cout << "\n http://gph.is/1PPtzwP \n";
    }
    if (name == "Trump")
    {
        cout << "\n http://gph.is/1hT3mSp\n";
    }
    if (name == "Joe Mama")
    {
        system("CLS");
        cout << "\n\n    " << red << "Dead Meme\n\n" << normal;
        exit(0);
    }
}

void pickUpQ() {

    cout << "\n Do you want to pick up " << itemToPickUp << "? (Y or N) ";
    cin >> pickUpQ2;

    if (pickUpQ2 == 'Y' || pickUpQ2 == 'y')
    {
        continuePickUp = true;
    }
    else if (pickUpQ2 == 'N' || pickUpQ2 == 'n')
    {
        cout << "\nNo Picky Uppy for you\n\n";
        itemAmountMax = 0;
        continuePickUp = false;
    }
    else
    {
        cout << "Please enter Y or N";
        continuePickUp = false;
        pickUpQ();
    }

    if (continuePickUp == true) {

        cout << " How many do you want to pick up? (Out of " << itemAmountMax << "): ";
        cin >> itemAmount;

        if (itemAmount < (itemAmountMax + 1))
        {
            itemAmountMax = 0;
            pickUp();
        }

        if (itemAmount > (itemAmountMax + 1)) {

            while (itemAmount > (itemAmountMax + 1))
            {
                {
                    cout << "Please enter a number under " << itemAmountMax << ": ";
                    cin >> itemAmount;
                }
            }

            if (itemAmount < (itemAmountMax + 1))
            {
                itemAmountMax = 0;
                pickUp();
            }
        }
    }
    else
    {
    }
}

void difficultyChoice()
{
    difficultyQ5 = false;

    while (difficultyQ5 == false && dataLoaded == !true)
    {

        cout << "\n   ___________________________";
        cout << "\n  |                           |";
        cout << "\n  |  Choose your difficulty:  |\n  |                           |\n";
        cout << "  |     "  << green << "Normal" << red << "   Hardcore" << normal << "     |\n  ";
        cout << "|___________________________|\n";
        cout << "\n\n           ";
        cin >> difficultyQ;


        if (difficultyQ == "Normal")
        {
            difficulty = "Normal";
            cout << difficulty;

            cin.ignore();
            system("CLS");

            return;
        }

        if (difficultyQ == "Hardcore")
        {
            difficultyQ4 = true;
        }

        if (difficultyQ4 == true)
        {

            cout << "\n\n  Warning, if you die your player data will be permenantly deleted\n\n " << red << " Are you sure? (Y / N)" << normal << "\n\n ";
            cin >> difficultyQ2;

            switch (difficultyQ2) {
            case 'N':  case 'n':
                difficultyQ3 = false;
                break;
            case 'Y':  case 'y':
                difficultyQ3 = true;
                break;
            }

            if (difficultyQ3 == true)
            {
                difficulty = "Hardcore";
                cout << "difficulty hardcore";

                cin.ignore();
                system("CLS");

                return;
            }
        }
    }
}

void townWhereGo()
{
    while (!test10)
    {
        while (!whereGo1)
        {
            cout << "\n  Where do you want to go?";
            cout << "\n\n " << yellow << "Options: The Inn, The Food Shop, The Clothes Shop or Elgran's shop" << normal << "\n\n    ";

            getline(cin, locationChoice1);

            if (locationChoice1 == "The Inn" || locationChoice1 == "Inn" || locationChoice1 == "The Food Shop" || locationChoice1 == "Food Shop" || locationChoice1 == "The Clothes Shop" || locationChoice1 == "Clothes Shop" || locationChoice1 == "Elgran's Shop" || locationChoice1 == "Elgrans Shop")
            {
                whereGo1 = true;
            }
            else
            {
                system("CLS");
            }
        }

        if (locationChoice1 == "The Inn" || locationChoice1 == "Inn")
        {
            if (alreadyEnteredInn == true && alreadyEnteresInn2 == !true)
            {
                alreadyEnteresInn2 = true;
                AlreadyInnEvent = true;
                cout << yellow << "\n\n Narrator: " << normal << "From outside you hear raised voices";
                cout << yellow << "\n\n Narrator: " << normal << "You enter the inn";
                cout << yellow << "\n\n Narrator: " << normal << "You see a distressed mother and father asking people if they have seen their daughter. They approach you";
                cout << yellow << "\n\n  Mother: " << green << "You sir, have you seen our daughter? ";

            }

            if (alreadyEnteredInn == false)
            {
                cout << yellow << "\n\n  Inn Keeper:" << green << " Welcome traveller. You look like you need some rest!" << normal;
                cout << "\n\n  That's for sure. How many coins to purchase a room for the night?";
                cout << green << "\n\n  It will cost you 5 coins for 1 night's stay, plus food will cost you around 7." << normal;
                alreadyEnteredInn = true;

                while (!buyRoomQ2)
                {
                    cout << yellow << "\n\n Narrator: " << normal << "Do you buy a room? (Y / N): ";
                    cin >> buyRoomQ;

                    switch (buyRoomQ) {
                    case 'N':  case 'n':
                        buyRoom = false;
                        buyRoomQ2 = true;
                        break;
                    case 'Y':  case 'y':
                        buyRoom = true;
                        buyRoomQ2 = true;
                        break;
                    }
                }

                if (buyRoom == true)
                {
                    system("CLS");
                    cout << "\n  I'll take it!";

                    coins = coins - 7;
                    cout << yellow << "\n\n Narrator: " << normal << "Minus 7 coins\n";

                    cout << yellow << "\n Narrator: " << normal << "The inn keeper hands you a key";
                    cout << purple << "\n\n  (Press enter to take key)";

                    cin.ignore();
                    cin.ignore();
                    system("CLS");

                    cout << green << "\n\n Have a good day sir\n" << normal;
                    enter();
                    system("CLS");
                    buyRoom = false;
                    buyRoomQ2 = false;
                    whereGo1 = false;
                }
                else if (buyRoom == !true)
                {
                    system("CLS");
                    cout << "\n  I'm good thanks.";
                    cout << yellow << "\n\n Narrator: " << normal << "You exit the inn\n";
                    cin.ignore();
                    enter();
                    system("CLS");
                    buyRoom = false;
                    buyRoomQ2 = false;
                    whereGo1 = false;
                }
            }
        }
        else if (locationChoice1 == "The Food Shop" || locationChoice1 == "Food Shop")
        {
            cout << "";
        }
        else if (locationChoice1 == "The Clothes Shop" || locationChoice1 == "Clothes Shop")
        {
            cout << "";
        }
        else if (locationChoice1 == "Elgran's Shop" || locationChoice1 == "Elgrans Shop")
        {
            cout << "";
        }
        else
        {
            cout << "error";
        }
    }
}

int main() {

    health = 100;
    hunger = 100;
    coins = 25;
   
    //start of dialogue

    start();

    loadSave();

    difficultyChoice();

    classChoice();

    cin.ignore();
    enter();
    system("CLS");

    cout << yellow << "\n Narrator: " << normal << "You wake up from being knocked unconscious. Through weary eyes you notice that you are in a small, empty \n  tavern which you do not recognise. Your head and right arm throb with pain and you see a clumsily wrapped bandage \n  over a deep cut on your right arm, soaked in blood. As you become more awake you notice a large half orc towering \n  over you with a sword secured neatly in a sheath. The figure looks surprised that you've woken.\n";

    cout << yellow << "\n Narrator: " << normal << "The half-orc asks you what your name is." << "\n";

    //tests if name field is empty

    while (!testName)
    {
        if (dataLoaded == false)
        {
            cout << green << "\n  What's your name? " << normal;
            getline(cin, name);
            if (name.empty()) { testName = false; }
            else
            {
                break;
            }
        }
        else if (dataLoaded == true)
        {
            break;
        }
    }

    enter();
    system("CLS");

    names();

    townWhereGo();

    cout << "\n" << blue << "  " << name << normal;
    cout << green << " is it? A fine name for an adventurer!" << normal;

    cout << green << "\n  I found this satchel on your wagon when I picked you up. It was about the only thing I could salvage from it.\n" << normal;

    cout << yellow << "\n Narrator: " << normal << "The satchel contains:\n";
    satchelRun();

    enter();
    system("CLS");

    cout << green << "\n  You don't seem to have a weapon on yourself... you're welcome to take one of my spares, " << normal;

    cout << red << "Short Sword." << normal << green << " \n  I've got loads in the shop.\n" << normal;
    enter();
    system("CLS");

    cout << yellow << "\n  Steel Short Sword added to your satchel!\n" << normal;

    weapon = "ShortSword";

    satchelRun();

    statCheckQ();

    enter();
    cin.ignore();
    system("CLS");

    cout << "\n  Thank you sir, but where am I? \n" << normal;

    cout << green << "\n  You're in one of the most ancient blacksmith towns in all of Braxia! \n" << normal;

    cout << "\n  Braxia? I don't recognise that name.\n" << normal;
    enter();
    system("CLS");

    cout << green << "\n  Huh, really? It's what folk around here call the known world that surrounds this place. \n" << normal;

    cout << "\n  Strange. I don't recall hearing of a place called Braxia. \n" << normal;

    cout << green << "\n  And anyway, I must ask... \n" << normal;
    cout << green << "\n  What were you doing out on a trail in that neck of the woods? Folk around here don't dare enter those forests \n" << normal;

    cout << "\n  Why not? \n" << normal;
    enter();
    system("CLS");

    cout << green << "\n  Well... " << "\n" << yellow << "\n Narrator: " << normal << "He lowers his voice" << "\n" << normal;
    cout << green << "\n  Ever since the first few disappearances, folk don't dare leave the town. \n" << normal;

    cout << "\n  Disappearances? \n" << normal;

    cout << green << "\n  Women and children who wandered to far from public view would often never be seen again. Not a trace. \n" << normal;
    cout << green << "\n  It's like the forest is under a sinister curse. \n" << normal;
    enter();
    system("CLS");

    cout << "\n  Sounds like this needs investigating. \n" << normal;

    cout << green << "\n  Indeed. That's why I was so surprised when I found you pinned down by those dire wolves, alive. \n" << normal;
    cout << green << "\n  I managed to kill a few with my bow but the rest fled. \n" << normal;
    enter();
    system("CLS");

    cout << "\n  Thank you. Sounds like I owe you. \n" << normal;

    cout << green << "\n  It's my duty as a worker in this town to protect any folk who enter these parts. \n" << normal;
    cout << green << "\n  But there are jobs I can give you, if you're up to it. \n" << normal;

    cout << "\n  I actually came in search of work, that's about all I can remember though. \n" << normal;

    cout << green << "\n  For now you need to rest and give your wounds time to heal. \n" << normal;
    cout << green << "\n  You're welcome to take shelter in my place, but there is also an inn called the Hollow Oak on the other side of town. \n" << normal;
    enter();
    system("CLS");

    cout << "\n  You've done enough for me now sir and I will be forever grateful for you're kindness. Although, I never \nremember asking your name. \n" << normal;

    cout << green << "\n  My name is Elgran Kruurk. I have a small blacksmiths shop called the Cobalt Forge on the edge of town \nwhich you are welcome to visit at any time. \n" << normal;
    cout << green << "\n  I can get you kitted out with some of the best armour and weaponry in all of Braxia. \n" << normal;
    enter();
    system("CLS");

    cout << "\n  I will be sure to visit, Elgran. \n" << normal;
    cout << "\n  Thank you again for saving my life. \n" << normal;

    cout << green << "\n  Farewell," << normal;
    cout << blue << " " << name << normal;
    cout << green << " I hope to see you around town. \n" << normal;
    cout << yellow << "\n Narrator: " << normal << "You exit the tavern\n";
    enter();
    system("CLS");

    saveCharacterQ();

    cout << yellow << "\n Narrator: " << normal << "You duck below the door frame and enter the muddy street of the town. Your eyes have trouble \nadjusting to the evening sunlight, because you have been in the dark tavern for so long. A thick treeline \nborders the town on every side. There is low cut grass on either side of the path. Down the street to your \nright there is a cross road with a sign post.";

    return 0;
}

// To run satchel sequence, run  * satchelRun(); *


// To run combat sequence, run * enemy = "enemy"; 
//                               combat1();        *

// Example:                      enemy = "zombie";
//                               combat1();

// enemy list: zombie, ghoul, dragon


// to ask to save player data, run * saveCharacterQ(); *
// to ask to load player data, run * loadSave(); *


// for pickup sequence:

// itemToPickUp = "*";
// itemAmountMax = *;
// run pickUpQ();

// item list: coins, arrows, rope, rations


// to add quests, run * addQuest = "*";
//                    * addAnotherQuest();
//                    * addQuest = "*";
//                    * fullQuest();