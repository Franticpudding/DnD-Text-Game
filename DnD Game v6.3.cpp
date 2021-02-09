// 08 02 2021

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
bool townWhile;
bool alreadyInnEvent;
bool alreadyEnteredInn2;
bool alreadyEnteredInn3 = false;
char startPenelopeQuest;
bool startPenelopetf;
bool penelopeQuestRedo = false;
char startPenelopeQuest2;
bool startPenelopetf2;
bool penelopeCompleted = false;
bool askSaveWhile;
bool loadSaveWhile;
bool foodQuestCompleted;
bool alreadyEnteredFoodShop;
bool alreadyEnteredFoodShop2;
bool alreadyEnteredFoodShop3;
bool alreadyFoodShopEvent;
char startFoodShopQuest;
bool startFoodShopQuesttf;
char buyRationsQ;
bool buyRations;
bool buyRationsQ2;
bool foodShopQuestRedo;
char startFoodShopQuest2;
bool startFoodShopQuesttf2;
char buyStockQ1;
bool buyStockQ2;
bool buyStockFoodShop2;
char buyStockQ3;
bool buyStockQ4;
bool testFood1;
bool appleCorrect;
bool sackCorrect;
bool cabbageCorrect;
string pickFoodCollect;
bool loopPickFood = false;
bool collectSackFinished;
bool pickCabbagesFinished;
bool pickApplesFinished;
bool finishedAllFood;
int totalFoodScore;
int sackScore;
int cabbageScore;
int appleScore;
string sackContents;
string foodTreeChoice;
bool treeWhile;
bool sackWhile;
bool pickCabbagesQuestFinished;
bool collectSackQuestFinished;
bool pickApplesQuestFinished;

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


    ifstream playerFile;
    playerFile.open("playerData.txt");
    if (playerFile) {

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

// quests:
void penelopeQuest()
{
    cout << "Penelope quest begins";
    penelopeCompleted = true;
    cin.ignore();
    enter();
}

void foodShopListGUI()
{

    cout << "\n\n";
    cout << R"###(     ____________________________________)###";
    cout << "\n";
    cout << R"###(    |____________________________________|)###";
    cout << "\n";
    cout << R"###(        | |                       | |)###";
    cout << "\n";
    cout << R"###(        \_/                       \_/)###";
    cout << "\n";

    cout << "\n\n";
    cout << R"###(     ____________________________________)###";
    cout << "\n";
    cout << R"###(    |____________________________________|)###";
    cout << "\n";
    cout << R"###(        | |                       | |)###";
    cout << "\n";
    cout << R"###(        \_/                       \_/)###";
    cout << "\n";
        
    cout << "\n\n";
    cout << R"###(     ____________________________________)###";
    cout << "\n";
    cout << R"###(    |____________________________________|)###";
    cout << "\n";
    cout << R"###(        | |                       | |)###";
    cout << "\n";
    cout << R"###(        \_/                       \_/)###";
    cout << "\n";
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

    if (enemy == "Goblin Footman")
    {
        enemyDamage = 10;
        enemyHealth = 60;
    }
    if (enemy == "Goblin Archer")
    {
        enemyDamage = 20;
        enemyHealth = 60;
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

void signPost()
{
    cout << R"###(             _ )###" << "\n";
    cout << R"###(            / \ )###" << "\n";
    cout << R"###(            | |_________ )###" << "\n";
    cout << R"###(   _________| |         \ )###" << "\n";
    cout << R"###(  /         | |_________/ )###" << "\n";
    cout << R"###(  \_________| | )###" << "\n";
    cout << R"###(            | \ )###" << "\n";
    cout << R"###(            |  | )###" << "\n";
    cout << R"###(            | \| )###" << "\n";
    cout << R"###(            | | )###" << "\n";
    cout << R"###(            | | )###" << "\n";
    cout << R"###(            | | )###" << "\n";
    cout << R"###(            | | )###" << "\n";
    cout << R"###(         ___|_|___ )###" << "\n";
    cout << R"###(        /_________\ )###" << "\n";
}

//quest GUI
void questGUI()
{
    cout << "\n   ___________________________\n"
        "  |                           |\n"
        "  |  Quest 1 = " << quest1 << questGap1 << "|\n"
        "  |  Quest 2 = " << quest2 << questGap2 << "|\n"
        "  |  Quest 3 = " << quest3 << questGap3 << "|\n"
        "  |___________________________|\n";
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
    if (quest1 == "Find Penelope")
    {
        questGap1 = "  ";
    }
    else if (quest1 == "Food Quest")
    {
        questGap1 = "     ";
    }
    else if (quest1 == "None")
    {
        questGap1 = "           ";
    }

    if (quest2 == "Find Penelope")
    {
        questGap2 = "  ";
    }
    else if (quest2 == "Food Quest")
    {
        questGap2 = "      ";
    }
    else if (quest2 == "None")
    {
        questGap2 = "           ";
    }

    if (quest3 == "Find Penelope")
    {
        questGap3 = "  ";
    }
    else if (quest3 == "Food Quest")
    {
        questGap3 = "      ";
    }
    else if (quest3 == "None")
    {
        questGap3 = "           ";
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

void pickApples()
{   
    while (!treeWhile)
    {
        cout << "\n You walk towards a field, three fruit trees sit there, apple, orange and pear";
        cout << "\n Which tree do you pick from? ";
        getline(cin, foodTreeChoice);

        if (foodTreeChoice == "apple")
        {
            appleScore = appleScore + 10;
            treeWhile = true;
        }
        else if (foodTreeChoice == "orange")
        {
            appleScore = appleScore + 0;
            treeWhile = true;
        }
        else if (foodTreeChoice == "pear")
        {
            appleScore = appleScore + 0;
            treeWhile = true;
        }
        else
        {
            system("CLS");
            treeWhile = false;
        }
    }

    cout << "apples yes";
    
    pickApplesQuestFinished = true;
}
void pickCabbage()
{
    cout << "You walk towards the cabbage patch, how many do you pick?";
    cout << "cabbages yes";
    
    pickCabbagesQuestFinished = true;
}
void collectSack()
{
    cout << yellow << "\n Narrator: " << normal << "You walk into a dark and dingy barn, there are 3 sacks lying on the floor";
    
    while (!sackWhile)
    {
        cout << yellow << "\n Narrator: " << normal << "Do you choose: " << yellow << "Barley" << normal << ", " << yellow << "Wheat " << normal << "or " << yellow << "Flour?" << normal;
        cin >> sackContents;

        if (sackContents == "Wheat")
        {
            sackScore = sackScore = 0;
            sackWhile = true;
        }
        else if (sackContents == "Barley")
        {
            sackScore = sackScore + 0;
            sackWhile = true;
        }
        else if (sackContents == "Flour")
        {
            sackScore = sackScore + 10;
            sackWhile = true;
        }
        else
        {
            sackWhile = false;
        }
    }

    cout << "sack yes";
    collectSackQuestFinished = true;
}

void foodShopQuest()
{
    cout << yellow << "\n Narrator: " << normal << "You turn ____ and walk towards the farm," << normal;
    cout << yellow << "\n\n Narrator: " << normal << "As you exit the food shop, you read the note she handed you. It reads:\n\n   List:\n   12 Apples,\n   1 Sack of flour,\n   4 Cabbages.\n\n";

    while (!loopPickFood)
    {

        if (pickCabbagesQuestFinished == true && pickApplesQuestFinished == true && collectSackQuestFinished == true)
        {
            finishedAllFood = true;
            satchelRun();
            cout << "\n Your total score: ";
            totalFoodScore = sackScore + cabbageScore + appleScore;
            cout << totalFoodScore;
            coins = coins + totalFoodScore;
            satchelRun();
            cin.ignore();
            loopPickFood = true;
        }
        else if (finishedAllFood == !true)
        {
            cout << yellow << "\n Narrator: " << normal << "Do you: Collect the sack? Pick the cabbages or Collect the other fruit?\n\n  ";
            getline(cin, pickFoodCollect);

            if (pickFoodCollect == "Collect the sack" && collectSackFinished == !true)
            {
                collectSack();
                collectSackFinished = true;
                cin.ignore();
                enter();
                loopPickFood = false;
            }
            else if (pickFoodCollect == "Pick the cabbages" && pickCabbagesFinished == !true)
            {
                pickCabbage();
                pickCabbagesFinished = true;
                cin.ignore();
                enter();
                loopPickFood = false;
            }
            else if (pickFoodCollect == "Collect the other fruit" && pickApplesFinished == !true)
            {
                pickApples();
                pickApplesFinished = true;
                cin.ignore();
                enter();
                loopPickFood = false;
            }
            else
            {
                system("CLS");
                loopPickFood = false;
            }
        }
    }
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
    cout << yellow << "\n Narrator: " << normal << "Do you want to check stats? (Y or N): ";
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
    while (loadSaveWhile == !true)
    {
        cout << "\n\n " << yellow << "    Do you want to save? (Y / N): " << normal;
        cin >> saveQ;

        if (saveQ == 'N' || saveQ == 'n')
        {
            loadSaveWhile = true;
            cout << "\n  You did not save";
        }
        else if (saveQ == 'Y' || saveQ == 'y')
        {
            loadSaveWhile = true;
            cout << "\n  Data saved";
            file1();
        }

        else
        {
            cout << "\nEnter Y or N for save";
            loadSaveWhile = false;
        }
    }
}

void loadSave() {

    ifstream ifs("playerData.txt", std::ios::ate);

    if (ifs.tellg() > 1) {
        while (askSaveWhile == !true)
        {
            cout << "\n\n     " << red << "Do you want to load your old save? (Y / N): " << normal;
            cin >> loadSaveQ;

            if (loadSaveQ == 'Y' || loadSaveQ == 'y' || loadSaveQ == 'N' || loadSaveQ == 'n')
            {
                askSaveWhile = true;
            }
            else if (loadSaveQ == !'Y' || loadSaveQ == !'y' || loadSaveQ == !'N' || loadSaveQ == !'n')
            {
                askSaveWhile = false;
            }
        }

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
        cout << "  |     " << green << "Normal" << red << "   Hardcore" << normal << "     |\n  ";
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

void buyStockFoodShop()
{
    cout << "Do you want to buy stock? (Y / N): ";
    cin >> buyStockQ1;

    switch (buyStockQ1) {
    case 'N':  case 'n':
        buyStockQ2 = false;
        break;
    case 'Y':  case 'y':
        buyStockQ2 = true;
        break;
    }

    if (buyStockQ2 == true)
    {
        foodShopListGUI();
        whereGo1 = false;
    }
    else if (buyStockQ2 == false)
    {
        cout << "no stock for u";
        whereGo1 = false;
    }

    enter();
    cin.ignore();
}

void normalInn()
{
    system("CLS");
    cout << "\n\n";
    cout << R"###(                       __ )###";
    cout << "\n";
    cout << R"###(                       ||                 _)###";
    cout << "\n";
    cout << R"###(                      /  \               /_\)###";
    cout << "\n";
    cout << R"###(                     |    |             _| |_)###";
    cout << "\n";
    cout << R"###(                     |    |            /~~~~~\)###";
    cout << "\n";
    cout << R"###(     __________   ___|____|___________/_______\_______)###";
    cout << "\n";
    cout << R"###(    |          | |____________________________________|)###";
    cout << "\n";
    cout << R"###(    |          |     | |               ___      | |)###";
    cout << "\n";
    cout << R"###(    |          |     \_/              /   \ _   \_/)###";
    cout << "\n";
    cout << R"###(    |          |                     | ~~~ | \)###";
    cout << "\n";
    cout << R"###(    |          |         __	       |     | |)###";
    cout << "\n";
    cout << R"###(    |          |        _||_         | ~~~ |_/)###";
    cout << "\n";
    cout << R"###(    |__________|  _____|____|________|_____|__________)###";
    cout << "\n";
    cout << R"###(                 |____________________________________|)###";
    cout << "\n";
    cout << R"###(                     | |                        | |)###";
    cout << "\n";
    cout << R"###(                     \_/             __         \_/)###";
    cout << "\n";
    cout << R"###(                                     ||)###";
    cout << "\n";
    cout << R"###(                             __     /  \)###";
    cout << "\n";
    cout << R"###(                             ||     |  |)###";
    cout << "\n";
    cout << R"###(                  __________/__\____|__|______________)###";
    cout << "\n";
    cout << R"###(                 |____________________________________|)###";
    cout << "\n";
    cout << R"###(                     | |                        | |)###";
    cout << "\n";
    cout << R"###(                     \_/                        \_/ )###";
    cout << "\n";
    cout << R"###(                                                     )###";
    cout << "\n";
    cout << R"###(    ___________________________________________________________)###";
    cout << "\n";
    cout << R"###(                                                               |)###";
    cout << "\n";
    cout << R"###(    _______________________________________________________    |)###";
    cout << "\n";
    cout << R"###(                                                           |   |)###";
    cout << "\n";
    cout << R"###(                                                           |   |)###";
    cout << "\n";
    cout << R"###(                                                           |___|)###";
    cout << "\n";

    enter();
    system("CLS");
}

void townWhereGo()
{
    while (!townWhile)
    {
        while (!whereGo1)
        {
            cout << "\n   Where do you want to go?";
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
            if (penelopeCompleted == true) {
                normalInn();
                whereGo1 = false;
            }

            alreadyEnteredInn3 = true;

            if (alreadyEnteredInn == true && alreadyEnteredInn2 == !true)
            {
                alreadyEnteredInn2 = true;
                alreadyInnEvent = true;
                cout << yellow << "\n\n Narrator: " << normal << "From outside you hear raised voices";
                cout << yellow << "\n\n Narrator: " << normal << "You enter the inn";
                cout << yellow << "\n\n Narrator: " << normal << "You see a distressed mother and father asking people if they have seen their daughter. They approach you";
                cout << yellow << "\n\n  Mother: " << green << "You sir, have you seen our daughter? " << normal;
                cout << yellow << "\n\n  Father: " << green << "She has long brown hair and is wearing a light blue dress." << normal;
                cout << "\n\n  I'm afraid I have not";
                cout << yellow << "\n\n  Mother: " << green << "Please help us, we will pay you all the money we have\n" << normal;
                enter();
                system("CLS");
                cout << "\n\n  I shall begin a search.";
                cout << "\n\n  Where was she last known to be ?";
                cout << yellow << "\n\n  Father: " << green << "I believe she was playing with her dog near the edge of the forest behind our house." << normal;
                cout << "\n\n  I have heard of the disappearances";
                cout << "\n\n  I will try my best to find your daughter, what is her name ?";
                cout << yellow << "\n\n  Mother: " << green << "Thank you sir, her name is Penelope." << normal;
                cout << "\n\n  I will begin my search right away";
                cout << yellow << "\n\n  Father: " << green << "We cannot thank you enough." << normal;

                addQuest = "Find Penelope";
                fullQuest();
                alreadyEnteredInn3 = false;

                cout << yellow << "\n  Narrator: " << normal << "Do you want to start the quest now? ";
                cin >> startPenelopeQuest;

                switch (startPenelopeQuest) {
                case 'N':  case 'n':
                    startPenelopetf = false;
                    break;
                case 'Y':  case 'y':
                    startPenelopetf = true;
                    break;
                }

                if (startPenelopetf == true)
                {
                    penelopeQuest();
                }
                else if (startPenelopetf == false)
                {
                    penelopeQuestRedo = true;
                    cout << yellow << "\n Narrator: " << normal << "Come back to do Penelope Quest";
                    cin.ignore();
                    enter();
                    system("CLS");
                }

                whereGo1 = false;
            }

            if (alreadyEnteredInn == false)
            {
                system("CLS");
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

                    cout << yellow << "\n  Inn Keep: " << green << "Have a good day sir\n" << normal;
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
            if (alreadyEnteredInn == true && alreadyEnteredInn2 == true && alreadyEnteredInn3 == true)
            {
                if (penelopeQuestRedo == true && penelopeCompleted == !true)
                {
                    cout << yellow << "\n  Do you want to start the quest now? " << normal;
                    cin >> startPenelopeQuest2;

                    switch (startPenelopeQuest2) {
                    case 'N':  case 'n':
                        startPenelopetf2 = false;
                        break;
                    case 'Y':  case 'y':
                        startPenelopetf2 = true;
                        break;
                    }

                    if (startPenelopetf2 == true)
                    {
                        penelopeQuest();
                    }
                    else if (startPenelopetf2 == false)
                    {
                        cout << "You leave the inn";
                        whereGo1 = false;
                    }
                }
            }
        }
        else if (locationChoice1 == "The Food Shop" || locationChoice1 == "Food Shop")
        {

            alreadyEnteredFoodShop3 = true;

            if (alreadyEnteredFoodShop == true && alreadyEnteredFoodShop2 == !true)
            {
                alreadyEnteredFoodShop2 = true;
                alreadyFoodShopEvent = true;

                cout << yellow << "\n  Shop Keeper: " << green << "Hello there, wee lad! Would you like to buy some rations ? \n               We've got some fresh stock in this morning" << normal;

                cout << "\n\n  I'm full up on supplies at the moment. Have you got any work for me?";
                cout << yellow << "\n\n  Shop keeper: " << green << "It depends" << normal;
                cout << yellow << "\n\n  Shop keeper: " << green << "What kinda work ya' lookn for?" << normal;
                cout << "\n\n  I'll take anything that'll pay.";
                cout << yellow << "\n\n  Shop keeper: " << green << "In that case, I can use a hand re-stocking produce" << normal;
                cout << yellow << "\n\n  Shop keeper: " << green << "I'll need (highlight items) 2 bags o' flour from the mill, 12 apples from the orchard, \n               and 7 cabbages from the patch out back." << normal;
                cout << "\n\n  I see, where should I leave the produce when I've collected it?";
                cout << yellow << "\n\n  Shop keeper: " << green << "You can bring it straight to me, so I can see that you ain't giving me any damaged stock." << normal;
                cout << "\n\n  Right, will do";
                cout << yellow << "\n\n  Shop keeper: " << green << "Farewell, son." << normal;

                addQuest = "Food Quest";
                fullQuest();
                alreadyEnteredFoodShop3 = false;

                cout << yellow << "\n  Narrator: " << normal << "Do you want to start the food quest now? ";
                cin >> startFoodShopQuest;

                switch (startFoodShopQuest) {
                case 'N':  case 'n':
                    startFoodShopQuesttf = false;
                    break;
                case 'Y':  case 'y':
                    startFoodShopQuesttf = true;
                    break;
                }

                if (startFoodShopQuesttf == true)
                {
                    system("CLS");
                    foodShopQuest();
                }
                else if (startFoodShopQuesttf == false)
                {
                    foodShopQuestRedo = true;
                    cout << yellow << "\n Narrator: " << normal << "Come back to do food Quest";
                    cin.ignore();
                    enter();
                    system("CLS");
                }

                whereGo1 = false;
            }

            if (alreadyEnteredFoodShop == false)
            {
                system("CLS");

                alreadyEnteredFoodShop = true;

                while (!buyRationsQ2)
                {
                    cout << yellow << "\n\n Narrator: " << normal << "Hello there, wee lad! Would you like to buy some rations? \n           We've got some fresh stock in this morning. \n\n(Y / N): ";
                    cin >> buyRationsQ;

                    switch (buyRationsQ) {
                    case 'N':  case 'n':
                        buyRations = false;
                        buyRationsQ2 = true;
                        break;
                    case 'Y':  case 'y':
                        buyRations = true;
                        buyRationsQ2 = true;
                        break;
                    }
                }

                if (buyRations == true)
                {
                    system("CLS");
                    cout << "\n  I'll take it!";

                    coins = coins - 5;
                    cout << yellow << "\n\n Narrator: " << normal << "Minus 5 coins\n";

                    cout << yellow << "\n Narrator: " << normal << "The shop keeper hands you 2 rations";
                    cout << purple << "\n\n  (Press enter to take rations)";

                    cin.ignore();
                    cin.ignore();
                    system("CLS");

                    rations = rations + 2;

                    cout << yellow << "\n  Inn Keep: " << green << "Have a good day laddie!\n" << normal;
                    enter();
                    system("CLS");
                    buyRations = false;
                    buyRationsQ2 = false;
                    whereGo1 = false;
                }
                else if (buyRations == !true)
                {
                    system("CLS");
                    cout << "\n  I'm good thanks.";
                    cout << yellow << "\n\n Narrator: " << normal << "You exit the food store\n";
                    cin.ignore();
                    enter();
                    system("CLS");
                    buyRations = false;
                    buyRationsQ2 = false;
                    whereGo1 = false;
                }
            }
            if (alreadyEnteredFoodShop == true && alreadyEnteredFoodShop2 == true && alreadyEnteredFoodShop3 == true && testFood1 == false)
            {
                buyStockFoodShop2 = true;

                buyStockFoodShop();

                if (buyStockQ2 == false && foodShopQuestRedo == true)
                {
                    if (foodShopQuestRedo == true && foodQuestCompleted == !true)
                    {
                        cout << yellow << "\n  Do you want to start the quest now? " << normal;
                        cin >> startFoodShopQuest2;

                        switch (startFoodShopQuest2) {
                        case 'N':  case 'n':
                            startFoodShopQuesttf2 = false;
                            break;
                        case 'Y':  case 'y':
                            startFoodShopQuesttf2 = true;
                            break;
                        }

                        if (startFoodShopQuesttf2 == true)
                        {
                            foodShopQuest();
                        }
                        else if (startFoodShopQuesttf2 == false)
                        {
                            cout << "You leave the food shop";
                            whereGo1 = false;
                        }
                    }
                }
            }
            else if (alreadyEnteredFoodShop == true && alreadyEnteredFoodShop2 == true && alreadyEnteredFoodShop3 == true && testFood1 == true)
            {
                buyStockFoodShop();
                system("CLS");
            }
        }
        else if (locationChoice1 == "The Clothes Shop" || locationChoice1 == "Clothes Shop")
        {
            cout << "";
            whereGo1 = false;
        }
        else if (locationChoice1 == "Elgran's Shop" || locationChoice1 == "Elgrans Shop")
        {
            cout << "";
            whereGo1 = false;
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

    foodShopQuest();

    start();

    loadSave();

    difficultyChoice();

    classChoice();

    cin.ignore();
    enter();
    system("CLS");

    cout << yellow << "\n Narrator: " << normal << "You wake up from being knocked unconscious. Through weary eyes you notice that you are in a small,\n           empty tavern which you do not recognise. Your head and right arm throb with pain and you see a \n           clumsily wrapped bandage over a deep cut on your right arm, soaked in blood. As you become more\n           awake you notice a large half orc towering over you with a sword secured neatly in a sheath. The\n           figure looks surprised that you've woken.\n";

    cout << yellow << "\n Narrator: " << normal << "The half-orc asks you what your name is." << "\n";

    //tests if name field is empty

    while (!testName)
    {
        if (dataLoaded == false)
        {
            cout << green << "\n\n    What's your name? " << normal;
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

    cout << "\n  " << blue << name << normal;
    cout << green << " is it? A fine name!" << normal;

    cout << yellow << "\n\n  Stranger: " << green << "I found this satchel on your wagon when I picked you up. It was about the only thing I \n            could salvage from it.\n" << normal;

    enter();

    cout << yellow << "\n Narrator: " << normal << "The satchel contains:\n";
    satchelRun();

    enter();
    system("CLS");

    cout << yellow << "\n  Stranger: " << green << "You don't seem to have a weapon on yourself... you're welcome to take one of my spares, " << normal;

    cout << red << "Short Sword." << green << " \n            I've got loads in the shop.\n" << normal;
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

    cout << yellow << "\n  Stranger: " << green << "You're in one of the most ancient blacksmith towns in all of Braxia! \n" << normal;

    cout << "\n  Braxia? I don't recognise that name.\n" << normal;
    enter();
    system("CLS");

    cout << yellow << "\n  Stranger: " << green << "Huh, really? It's what folk around here call the known world that surrounds this place. \n" << normal;

    cout << "\n  Strange. I don't recall hearing of a place called Braxia. \n" << normal;

    cout << yellow << "\n  Stranger: " << green << "And anyway, I must ask... \n" << normal;
    cout << yellow << "\n  Stranger: " << green << "What were you doing out on a trail in that neck of the woods? Folk around here don't dare \n            enter those forests" << normal;

    cout << "\n\n  Why not? \n" << normal;
    enter();
    system("CLS");

    cout << yellow << "\n  Stranger: " << green << "Well... " << "\n" << yellow << "\n Narrator: " << purple << "He lowers his voice" << "\n" << normal;
    cout << yellow << "\n  Stranger: " << green << "Ever since the first few disappearances, folk don't dare leave the town. \n" << normal;

    cout << "\n  Disappearances? \n" << normal;

    cout << yellow << "\n  Stranger: " << green << "Women and children who wandered to far from public view would often never be seen again. Not a trace. \n" << normal;
    cout << yellow << "\n  Stranger: " << green << "It's like the forest is under a sinister curse. \n" << normal;
    enter();
    system("CLS");

    cout << "\n  Sounds like this needs investigating. \n" << normal;

    cout << yellow << "\n  Stranger: " << green << "Indeed. That's why I was so surprised when I found you pinned down by those dire wolves, alive. \n" << normal;
    cout << yellow << "\n  Stranger: " << green << "I managed to kill a few with my bow but the rest fled. \n" << normal;
    enter();
    system("CLS");

    cout << "\n  Thank you. Sounds like I owe you. \n" << normal;

    cout << yellow << "\n  Stranger: " << green << "It's my duty as a worker in this town to protect any folk who enter these parts. \n" << normal;
    cout << yellow << "\n  Stranger: " << green << "But there are jobs I can give you, if you're up to it. \n" << normal;

    cout << "\n  I actually came in search of work, that's about all I can remember though. \n" << normal;

    cout << yellow << "\n  Stranger: " << green << "For now you need to rest and give your wounds time to heal. \n" << normal;
    cout << yellow << "\n  Stranger: " << green << "You're welcome to take shelter in my place, but there is also an inn called the Hollow Oak \n            on the other side of town. \n" << normal;
    enter();
    system("CLS");

    cout << "\n  You've done enough for me now sir and I will be forever grateful for you're kindness. \n  Although, I never remember asking your name. \n" << normal;

    cout << yellow << "\n  Elgran: " << green << "My name is Elgran Kruurk. I have a small blacksmiths shop called the Cobalt Forge on the edge of town \n          which you are welcome to visit at any time. \n" << normal;
    cout << yellow << "\n  Elgran: " << green << "I can get you kitted out with some of the best armour and weaponry in all of Braxia. \n" << normal;
    enter();
    system("CLS");

    cout << "\n  I will be sure to visit, Elgran. \n" << normal;
    cout << "\n  Thank you again for saving my life. \n" << normal;

    cout << yellow << "\n  Elgran: " << green << "Farewell," << normal;
    cout << blue << " " << name << normal;
    cout << yellow << "\n\n  Elgran: " << green << "I hope to see you around town. \n" << normal;
    cout << yellow << "\n Narrator: " << normal << "You exit the tavern\n";
    enter();
    system("CLS");

    saveCharacterQ();

    enter();
    system("CLS");

    cout << yellow << "\n Narrator: " << normal << "You duck below the door frame and enter the muddy street of the town. Your eyes have trouble \n           adjusting to the evening sunlight, because you have been in the dark tavern for so long. A thick treeline \n           borders the town on every side. There is low cut grass on either side of the path. Down the street to your \n           right there is a cross road with a sign post.";
    cout << "\n\n";
    signPost();

    townWhereGo();

    cout << "End Town";

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
