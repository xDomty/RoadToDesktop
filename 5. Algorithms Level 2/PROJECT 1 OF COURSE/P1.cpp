#include <iostream>
using namespace std;

int EnterANumberBetween(string message,int From,int To)
{
    int number;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number < From || number > To);
    return number;
}

enum en_WinDrawLose {win = 1, draw = 2, lose = 3};
enum en_TheChoiseOfTheGame {Stone = 1, Paper = 2, Scissors = 3};
enum en_TheScreenColor {Green = 1, Red = 2, Yellow = 3};

int RandomNumber(int From, int To)
{
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

en_TheChoiseOfTheGame TheChoise(int &Choise)
{
    if (Choise = en_TheChoiseOfTheGame::Stone)
        return en_TheChoiseOfTheGame::Stone;
    else if (Choise == en_TheChoiseOfTheGame::Paper)
        return en_TheChoiseOfTheGame::Paper;
    else if (Choise == en_TheChoiseOfTheGame::Scissors)
        return en_TheChoiseOfTheGame::Scissors;
    else
    { 
        cout << "WRONG CHOISE .... Please Retry:\n";
        cin >> Choise;
        TheChoise(Choise);
    }
}


en_WinDrawLose DidPlayerWin(int ChoiseOfPlayer,int ChoiseOfComputer, int &HowManyPlayerWins, int &HowManyComputerWins, int &HowManyDraw, bool DoYouWantToPrintPlayerAndComputerChoise)
{
    if (ChoiseOfPlayer == en_TheChoiseOfTheGame::Paper)
    {
        if (ChoiseOfComputer == en_TheChoiseOfTheGame::Paper)
        {
            HowManyDraw++;

            if (DoYouWantToPrintPlayerAndComputerChoise == true)
            {
                cout << "Player Choise : Paper\n";
                cout << "Computer Choise : Paper\n";
            }
            
            return en_WinDrawLose::draw;
        }
        else if (ChoiseOfComputer == en_TheChoiseOfTheGame::Scissors)
        {
            HowManyComputerWins++;

            if (DoYouWantToPrintPlayerAndComputerChoise == true)
            {
                 cout << "Player Choise : Paper\n";
                 cout << "Computer Choise : Scissors\n";
            }
            
            return en_WinDrawLose::lose;
        }
        else if (ChoiseOfComputer == en_TheChoiseOfTheGame::Stone)
        {
            HowManyPlayerWins++;
            if (DoYouWantToPrintPlayerAndComputerChoise == true)
            {
                 cout << "Player Choise : Paper\n";
                 cout << "Computer Choise : Stone\n";
            }
            
           return en_WinDrawLose::win;
        }
            
    }

    else if (ChoiseOfPlayer == en_TheChoiseOfTheGame::Stone)
    {
        if (ChoiseOfComputer == en_TheChoiseOfTheGame::Paper)
        {
            HowManyComputerWins++;
            if (DoYouWantToPrintPlayerAndComputerChoise == true)
            {
                 cout << "Player Choise : Stone\n";
                 cout << "Computer Choise : Paper\n";
            }

            return en_WinDrawLose::lose;
        }
            
        else if (ChoiseOfComputer == en_TheChoiseOfTheGame::Scissors)
        {
             HowManyPlayerWins++;
             if (DoYouWantToPrintPlayerAndComputerChoise == true)
             { 
                 cout << "Player Choise : Stone\n";
                 cout << "Computer Choise : Scissors\n";
             }
             
             return en_WinDrawLose::win;
        }
            
        else if (ChoiseOfComputer == en_TheChoiseOfTheGame::Stone)
        {
             HowManyDraw++;

             if (DoYouWantToPrintPlayerAndComputerChoise == true)
             {
                 cout << "Player Choise : Stone\n";
                 cout << "Computer Choise : Stone\n";
             }
             
             return en_WinDrawLose::draw;
        }
            
    }

    else if (ChoiseOfPlayer == en_TheChoiseOfTheGame::Scissors)
    {
        if (ChoiseOfComputer == en_TheChoiseOfTheGame::Paper)
        {
             HowManyPlayerWins++;
             if (DoYouWantToPrintPlayerAndComputerChoise == true)
             {
                 cout << "Player Choise : Scissors\n";
                 cout << "Computer Choise : Paper\n";
             }
             
             return en_WinDrawLose::win;
        }
            
        else if (ChoiseOfComputer == en_TheChoiseOfTheGame::Scissors)
        {
             HowManyDraw++;
             if (DoYouWantToPrintPlayerAndComputerChoise == true)
             {
                 cout << "Player Choise : Scissors\n";
                 cout << "Computer Choise : Scissors\n";;
             }
             
             return en_WinDrawLose::draw;
        }
            
        else if (ChoiseOfComputer == en_TheChoiseOfTheGame::Stone)
        {
             HowManyComputerWins++;
             if (DoYouWantToPrintPlayerAndComputerChoise == true)
             {
                 cout << "Player Choise : Paper\n";
                 cout << "Computer Choise : Paper\n";
             }
             
             return en_WinDrawLose::lose;
        }
            
    }
}

string TheResult(en_WinDrawLose WinOrDraw)
{
    if (WinOrDraw == en_WinDrawLose::win)
    {
        system("color 2F"); //Make The Window GREEN!
        return "Player Wins! ... Computer Loses!"; 
    }
    else if (WinOrDraw == en_WinDrawLose::lose)
    { 
        system("color 4F"); //Make The Window RED!
        return "Player Loses! ... Computer Wins!";
    }
    else if (WinOrDraw == en_WinDrawLose::draw)
    {
        system("color 6F"); //Make The Window YELLOW!
        return "Nobody Wins! .... DRAW!";
    }
}

void TheRoundsWithLoop(int HowManyRounds, int &HowManyPlayerWins , int &HowManyComputerWins, int &HowManyDraw)
{
    int PlayerChoise = 0;
    int ComputerRandomChoise = 0;

    HowManyPlayerWins = 0;
    HowManyComputerWins = 0;
    HowManyDraw = 0;
    en_WinDrawLose WinOrLose;
    ///////////////////////////////////////////
    for (int i = 1; i <= HowManyRounds; i++)
    {
         cout << "Round [" << i << "] Begins:\n\n";
         PlayerChoise = EnterANumberBetween("Your Choise: [1]:Stone, [2]:Paper, [3]:Scissors ? " , 1 , 3);
         cout << endl;
         ComputerRandomChoise = RandomNumber(1, 3);
         WinOrLose = DidPlayerWin(PlayerChoise, ComputerRandomChoise, HowManyPlayerWins, HowManyComputerWins, HowManyDraw , true);
         cout << TheResult(WinOrLose);
         cout << endl << endl;
         system("pause");
         cout << endl << endl;
         system("color 0F"); // Make The Terminal Black
    }
    
}

void GameOver(int RoundsCount, int HowManyPlayerWins, int HowManyComputerWins, int HowManyDraw)
{
    string FinalWinner = "";
    
    
    cout << endl << endl;
    cout << "\t\t";
    cout << "________________________________________________________________________\n\n";
    cout << "\t\t";
    cout << "____________________ + + +  G A M E  O V E R  + + + ____________________\n\n";
    cout << "\t\t";
    cout << "________________________________________________________________________\n\n"; 
    

    cout << endl << endl;
    cout << "\t\t";
    cout << "______________________ [  G A M E  R E S U L T S ] _____________________\n\n";
    cout << "\t\t";
    cout << "ROUNDS COUNT ----------------------------------------------------- [ " << RoundsCount << " ]\n";
    cout << "\t\tPLAYER WINS TIMES ------------------------------------------------ [ " << HowManyPlayerWins << " ]\n";
    cout << "\t\tCOMPUTER WINS TIMES ---------------------------------------------- [ " << HowManyComputerWins << " ]\n";
    cout << "\t\tDRAW TIMES ------------------------------------------------------- [ " << HowManyDraw << " ]\n";

    if (HowManyPlayerWins > HowManyComputerWins)
    cout << "\t\tFINAL WINNER ------------------------------------------------ [ " << "PLAYER" << " ]\n";

    else
    cout << "\t\tFINAL WINNER ---------------------------------------------- [ " << "COMPUTER" << " ]\n\n";
     
    ///////////////

    cout << "\t\t";
    cout << "________________________________________________________________________\n\n";
}

int main()
{

    srand((unsigned)time(NULL));

    int RoundsCount = EnterANumberBetween("How many rounds do you want? (from 1 to 10) :" , 1 , 10);
    int HowManyPlayerWins = 0, HowManyComputerWins = 0, HowManyDraw = 0;
    TheRoundsWithLoop(RoundsCount, HowManyPlayerWins, HowManyComputerWins, HowManyDraw);
    GameOver(RoundsCount, HowManyPlayerWins, HowManyComputerWins, HowManyDraw);

    ////////////////////////////////////////////////

    bool AnotherGame = false;
    cout << endl << endl;
    cout << "\t\tDo you want to make another game ( [0]: No , [1]: Yes ,  )? ";
    cin >> AnotherGame;
    if (AnotherGame == true)
    {
        system("cls");
        main();
    }

    else;
}

