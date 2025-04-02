// UN-COMPLETED YET
#include <iostream>
#include <cstdlib>
using namespace std;

enum enQeLevel {easy, medium, hard, mix};
enum enOpType { add, sub, mul, div, mix };
enum enFinalResult { Fail , Pass };

struct stFinalResult
{
    int HowManyPlayerGotCorrect = 0;
    int HowManyPlayerGotWrong = 0;
    enFinalResult FinalResult = (enFinalResult)(HowManyPlayerGotCorrect > HowManyPlayerGotWrong);
};

void SetScreenColorByQuestion(bool TrueOrFalse)
{
    if (TrueOrFalse == true)
        system("color 2F");
    else
        system("color 4F");
        cout << "\a";
}

void ResetScreen()
{
    system("cls");

}


int RandomNumber(int From, int To)
{
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

int EnterAPositiveNumber(string message)
{
    int positive;
    do
    {
        cout << message;
        cin >> positive;
    } while (positive < 0);
    return positive;
}

void StartGame()
{
     
}

int main()
{
    StartGame();
}
