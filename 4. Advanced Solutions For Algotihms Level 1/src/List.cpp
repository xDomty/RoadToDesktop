#pragma once
#include "../include/List.hpp"

namespace List
{
    void Print()
    {
        cout << "************************************\n\n";
        cout << "[1] Problem 1: Print Mohammed\n";
        cout << "[2] Problem 2: Enter your name then print your name\n";
        cout << "[3] Problem 3: Know if the number is odd or even\n";
        cout << "[4] Problem 4: Enter your age and driver license" << endl;
        cout << "[5] Problem 5: Enter your age and driver license (BUT WITH RECOMMENDATIONS)\n";
        cout << "[6] Problem 6: FirstName + LastName\n";
        cout << "[7] Problem 7: Take the half of the number\n";
        cout << "[8] Problem 8: Checks if student failed or not" << endl;
        cout << "[9] Problem 9: The sum of 3 numbers\n";
        cout << "[10] Problem 10: 3 marks then the average of them\n\n";
        cout << "[11] Problem 11: 3 marks then the average of them (BUT WITH FAIL OR PASS)\n";
        cout << "[12] Problem 12: The biggest number from 2 numbers you enter" << endl;
        cout << "[13] Problem 13: The biggest number from 2 numbers you enter\n";
        cout << "[14] Problem 14: Swipe 2 numbers\n";
        cout << "[15] Problem 15: Rectangle Area from (length , width)" << endl;
        cout << "[16] Problem 16: Rectangle Area from (length , diameter)\n";
        cout << "[17] Problem 17: Triangle Area from (base , height)\n";
        cout << "[18] Problem 18: Circle Area (by radius)\n";
        cout << "[19] Problem 19: Circle Area (by diameter)\n";
        cout << "[20] Problem 20: Circle Area (by square width)" << endl << endl;
        cout << "[21] Problem 21: Circle Area (by circumference)\n";
        cout << "[22] Problem 22: Circle Area (by Isosceles Triangle)\n";
        cout << "[23] Problem 23: Circle Area (by Arbitrary Triangle)\n";
        cout << "[24] Problem 24: The Age (Must be between 18 and 45)" << endl;
        cout << "[25] Problem 25: The Age (Must be between 18 and 45) but with while loop\n";
        cout << "[26] Problem 26: 0 to what number\n";
        cout << "[27] Problem 27: What number to 0\n";
        cout << "[28] Problem 28: The sum of odd numbers" << endl;
        cout << "[29] Problem 29: The sum of even numbers\n";
        cout << "[30] Problem 30: Program calculates the factorial of numbers you put in\n\n";
        cout << "[31] Problem 31: Program calculates (number ^ (2,3,4))\n";
        cout << "[32] Problem 32: Program calculates (number ^ power)" << endl;
        cout << "[33] Problem 33: Enter the mark and know your grade!\n";
        cout << "[34] Problem 34: 1% For (1M) , 2% For (500k to 1M) , 3% For (100k to 500k) , 5% For (50k to 100k) , Otherwise 0%\n";
        cout << "[35] Problem 35: (Pennies, Nickels, Dimes, Quarters, Dollars) to (Pennies,Dollars)\n";
        cout << "[36] Problem 36: Enter 2 numbers and select the operation" << endl;
        cout << "[37] Problem 37: Sum until -99\n";
        cout << "[38] Problem 38: Check if the number is prime or not\n";
        cout << "[39] Problem 39: read a TotalBill and CashPaid and calculate the remainder to be paid back.\n";
        cout << "[40] Problem 40: 10% Service fee and 16% sales tax" << endl << endl;
        cout << "[41] Problem 41: Total Hours to (Weeks,Days)\n";
        cout << "[42] Problem 42: (days, hours, minutes, and seconds) to total seconds\n";
        cout << "[43] Problem 43: total seconds to (days, hours, minutes, and seconds)\n";
        cout << "[44] Problem 44: Number of Day of the week" << endl;
        cout << "[45] Problem 45: Number of month of the year\n";
        cout << "[46] Problem 46: A TO Z\n";
        cout << "[47] Problem 47: Loan amount and monthly payment\n";
        cout << "[48] Problem 48: LoanAmount and how many months you need to settle the loan" << endl;
        cout << "[49] Problem 49: Bank password verification (pasword is : 1234)\n";
        cout << "[50] Problem 50: Bank password verification (pasword is : 1234) but with limited time you get the password wrong\n\n";
        cout << "************************************\n" << endl;
    }
    void ChooseFromList(short choose)
    {
        if (choose < 25)
        {
           switch (choose) {
              case 1:
                  clearScreen();
                  Problem1::main();
                  break;
              case 2:
                  clearScreen();
                  Problem2::main();
                  break;
              case 3:
                  clearScreen();
                  Problem3::main();
                  break;
              case 4:
                  clearScreen();
                  Problem4::main();
                  break;
              case 5:
                  clearScreen();
                  Problem5::main();
                  break;
              case 6:
                  clearScreen();
                  Problem6::main();
                  break;
              case 7:
                  clearScreen();
                  Problem7::main();
                  break;
              case 8:
                  clearScreen();
                  Problem8::main();
                  break;
              case 9:
                  clearScreen();
                  Problem9::main();
                  break;
              case 10:
                  clearScreen();
                  Problem10::main();
                  break;
              case 11:
                  clearScreen();
                  Problem11::main();
                  break;
              case 12:
                  clearScreen();
                  Problem12::main();
                  break;
              case 13:
                  clearScreen();
                  Problem13::main();
                  break;
              case 14:
                  clearScreen();
                  Problem14::main();
                  break;
              case 15:
                  clearScreen();
                  Problem15::main();
                  break;
              case 16:
                  clearScreen();
                  Problem16::main();
                  break;
              case 17:
                  clearScreen();
                  Problem17::main();
                  break;
              case 18:
                  clearScreen();
                  Problem18::main();
                  break;
              case 19:
                  clearScreen();
                  Problem19::main();
                  break;
              case 20:
                  clearScreen();
                  Problem20::main();
                  break;
              case 21:
                  clearScreen();
                  Problem21::main();
                  break;
              case 22:
                  clearScreen();
                  Problem22::main();
                  break;
              case 23:
                  clearScreen();
                  Problem23::main();
                  break;
              case 24:
                  clearScreen();
                  Problem24::main();
                  break;
              case 25:
                  clearScreen();
                  Problem25::main();
                  break;
            }
        }
        else if(choose = 25)
        {
            clearScreen();
            Problem25::main();
        }
        else
        {
              switch (choose) {
              case 26:
                  clearScreen();
                  Problem26::main();
                  break;
              case 27:
                  clearScreen();
                  Problem27::main();
                  break;
              case 28:
                  clearScreen();
                  Problem28::main();
                  break;
              case 29:
                  clearScreen();
                  Problem29::main();
                  break;
              case 30:
                  clearScreen();
                  Problem30::main();
                  break;
              case 31:
                  clearScreen();
                  Problem31::main();
                  break;
              
              }
        }
    }
    void WantToTryAgain()
    {
        cout << endl << endl;
        bool tryAgain = InputForce::NumBetween(0, 1, "Do you want to try again? (1 for Yes, 0 for No): ", "Invalid input. Try again.");
        while (tryAgain)
        {
            clearScreen();
            Print();
            short choose = InputForce::NumBetween<short>(1, 50, "Choose a number from the list: ", "Invalid input. Try again.");
            ChooseFromList(choose);
            PressAnyKeyToContinue();
            clearScreen();
            tryAgain = InputForce::NumBetween(0, 1, "Do you want to try again? (1 for Yes, 0 for No): ", "Invalid input. Try again.");
        }
        
    }
}