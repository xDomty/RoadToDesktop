#include <iostream>
#include <cmath> 
#include <string>
using namespace std;

            //For problem 1
                string mohammed()
                {
                    return "Mohammed";
                }

void Problem1()
{
    cout << mohammed();
}

         //FOR PROBLEM 2
                 string name()
                 {
                     string name;
                     cout << "Please enter your name\n";
                     cin >> name;
                     return name;
                 }

void Problem2()
{
    cout << name();
}

void Problem3()
{
    int number;
    cout << "Hello,This program makes you enter a number then it prints if it odd or even";
    cout << "Please enter your number\n";
    cin >> number;
    int result = number % 2;
    if (result == 0)
    {
        cout << "Your number is even\n";
    }
    else
    {
        cout << "Your number is odd\n";
    }
}

void Problem4()
{
    bool license;
    int age;
    cout << "Please enter your age\n";
    cin >> age;
    cout << "Do you have license? (0 if no / 1 if yes)\n";
    cin >> license;
    cout << endl;
    if (age >= 21 && license == 1)
    {
        cout << "HIRED";
    }
    else
    {
        cout << "REJECTED";
    }
}

void Problem5()
{
    bool license;
    bool recommendation;
    int age;
    cout << "Please enter your age\n";
    cin >> age;
    cout << "Do you have license? (0 if no / 1 if yes)\n";
    cin >> license;
    cout << "Do you have recommendations? (0 if no / 1 if yes)\n";
    cin >> recommendation;
    cout << endl;
    if (age >= 21 && license == 1 || recommendation == 1)
    {
        cout << "HIRED";
    }
    else
    {
        cout << "REJECTED";
    }
}

void Problem6()
{
    string FirstName, LastName;
    cout << "Hello, Please enter first name\n";
    cin >> FirstName;
    cout << "Please enter your last name\n";
    cin.ignore();
    getline(cin, LastName);
    cout << "\nYour name is " << FirstName << " " << LastName;
}
 
void Problem7()
{
    //defining vars
    long double UserNum;
    long double half = 0.5;

    cout << "Hello, This program is taking the half of the number\n";
    cout << "Please enter the number\n";
    cin >> UserNum;
    long double result = UserNum * half;
    cout << "Here is the half of the number : " << result << endl;
    system("pause");
}

void Problem8()
{
    cout << "HELLO!";
    cout << "\nThis program makes you enter the mark from 100\n";
    float mark;
    cout << "Please enter your mark?\n";
    cin >> mark;
    if (mark >= 50)
    {
        cout << "PASS";
    }
    else
    {
        cout << "FAIL";
    }
}

void Problem9()
{
    //defining vars
    long double Num1User;
    long double Num2User;
    long double Num3User;
    cout << "Hello!\nThis program makes you enter 3 numbers then it calculates the sum of it.\n";
    cout << "Please enter the first number.\n";
    cin >> Num1User;
    cout << "Ok, Please enter the second number.\n";
    cin >> Num2User;
    cout << "Ok, Please enter the third number." << endl;
    cin >> Num3User;
    long double result = Num1User + Num2User + Num3User;
    cout << "Ok, here is the sum of your number: ";
    cout << Num1User << " + " << Num2User << " + " << Num3User << " = " << result << ".\n";
    system("pause");
}

void Problem10()
{
    //defining vars
    float mark1;
    float mark2;
    float mark3;
    cout << "Hello!\nThis program makes you enter 3 marks then it calculates the average of it.\n";
    cout << "Please enter the first mark.\n";
    cin >> mark1;
    cout << "Ok, Please enter the second mark.\n";
    cin >> mark2;
    cout << "Ok, Please enter the third mark." << endl;
    cin >> mark3;
    float result = (mark1 + mark2 + mark3) / 3;
    cout << "Ok, here is the average of your marks : ";
    cout << "(" << mark1 << " + " << mark2 << " + " << mark3 << ") /3" << " = " << result << ".\n";
    system("pause");
}

    //FOR PROBLEM 11
                    float average;
                    
                    void WELCOME()
                    {
                        cout << "HELLO!";
                        cout << "\nThis program makes you enter 3 marks and it calculates the average of them from 100\n";
                    }
                    
                    void TakeMarks(float mark[3])
                    {
                        cout << "Please enter the first mark\n";
                        cin >> mark[0];
                        cout << "Please enter the second mark\n";
                        cin >> mark[1];
                        cout << "Please enter the third mark\n";
                        cin >> mark[2];
                    }
                    
                    void FUNCaverage(float mark[3])
                    {
                        average = (mark[0] + mark[1] + mark[2]) / 3;
                        cout << "The Average of the 3 marks is : " << average << endl;
                    }
                    
                    void PassOrFail()
                    {
                        float mark[3];
                        TakeMarks(mark);
                        FUNCaverage(mark);
                        if (average >= 50)
                        {
                            cout << "PASS";
                        }
                        else
                        {
                            cout << "FAIL";
                        }
                    }

void Problem11()
{
    WELCOME();
    PassOrFail();
}

void Problem12()
{
    float number1;
    float number2;
    cout << "Hello, This program print to you the biggest number from both numbers you type\n";
    cout << "Please enter the first number\n";
    cin >> number1;
    cout << "Ok, And the second number\n";
    cin >> number2;
    if (number1 > number2)
    {
        cout << "The first number is bigger than second number  \n( " << number1 << " > " << number2 << " )\n";
    }
    else if (number1 < number2)
    {
        cout << "The second number is bigger than first number  \n( " << number1 << " < " << number2 << " )\n";
    }
    else
    {
        cout << "The second number equals the first number  \n( " << number1 << " = " << number2 << " )\n";
    }
}

void Problem13()
{
    float a;
    float b;
    float c;
    cout << "Hello, This program print to you the biggest number from both numbers you type\n";
    cout << "Please enter the first number\n";
    cin >> a;
    cout << "Ok, And the second number\n";
    cin >> b;
    cout << "Ok, And the third number\n";
    cin >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "The biggest number is " << a;
        }
        else
        {
            cout << "The biggest number is " << c;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "The biggest number is " << b;
        }
        else
        {
            cout << "The biggest number is " << c;
        }
    }
    
}

    //FOR PROBLEM 14
       float swipe(float num1, float num2)
       {
           cout << num2 << endl;
           return num1;
       }
       
       float withoutSwipe(float num1, float num2)
       {
           cout << num1 << endl;
           return num2;
       }

void Problem14()
{
    //defining vars
    float num1;
    float num2;
    //begining
    cout << "Hello,\nThis program is made to swipe 2 numbers you enter\n";
    cout << "Please enter the first number\n";
    cin >> num1;
    cout << "Ok, and the second number\n";
    cin >> num2;
    cout << "\nOk, Here is the 2 numbers you had enter:\n";
    cout << withoutSwipe(num1, num2) << "\n";
    cout << "\nAnd here is after swiping them:\n";
    cout << swipe(num1, num2) << endl;
}

      //for problem 15
           float RectangleArea(float length, float width)
           {
               return length * width;
           }

void Problem15()
{
    //defining vars
    float length;
    float width;
    //begining
    cout << "Hello,\nThis program calculates the area of rectangle\n";
    cout << "Please enter the length by cm\n";
    cin >> length;
    cout << "Ok, enter the width by cm\n";
    cin >> width;
    cout << "Ok, Here is your result" << endl;
    cout << "Rectangle area = length * width = " << length << " * " << width << " = " << RectangleArea(length, width);
    cout << " squared cintemeters\n";

}

     //For problem 16
            float RectangleAreaFromDiameter(float length, float rectangleDiameter)
            {
                float result = length * sqrt(pow(rectangleDiameter, 2) - (pow(length, 2)));
                return result;
            }

void Problem16()
{
    float length, RectangleDiameter;
    cout << "Hello!\nThis program calculates rectangle area through diagonal and side area of rectangle and print it on the screen.\n";
    cout << "Please enter the length of the rectangle\n";
    cin >> length;
    cout << "Ok, and the rectangle diameter?\n";
    cin >> RectangleDiameter;
    cout << "Ok, Here is your result by squared length units : " << RectangleAreaFromDiameter(length, RectangleDiameter) << endl;
}

void Problem17()
{
    //defining vars
    long double base;
    long double height;
    //The Begining
    cout << "Hello,\nThis program calculates the area of triangle\n";
    cout << "Please enter the length of the base by cm\n";
    cin >> base;
    cout << "Ok, And please enter the height of the triangle\n";
    cin >> height;
    cout << "Ok, Here is your result\n\n";
    long double result = base * height * 0.5;
    cout << "The area of triangle = 0.5 * base * height = 0.5 * " << base << " * " << height << " = " << result << endl;
    system("pause");
}

       //FOR PROBLEM 18
             float CircleAreaByRadius(float radius)
             {
                 const float pi = 3.14;
                 return pi * radius * radius;
             }

string Problem18()
{
    float radius;
    // Let's gooooooooo
    cout << "Hello,\nThis program calculates the area of circle.\n";
    cout << "Please enter the radius by cm:\n";
    cin >> radius;
    cout << "Ok, Here is the area of circle : " << CircleAreaByRadius(radius);
    return " squared centimeters.\n";
}

         //For problem 19
                  float result1;
                  float CircleAreaFromDiameter(float& diameter)
                  {
                      const float pi = 3.14;
                      result1 = (pi * diameter * diameter) / 4;
                      return result1;
                  }

void Problem19()
{
    //defining vars
    float diameter;
    cout << "Hello\nThis program calculates Circle area by the diameter\n";
    cout << "Please enter the diameter\n";
    cin >> diameter;
    cout << "Ok here is your result\n";
    cout << "(pi * width * width)/4 = (" << 3.14 << " * " << diameter << " * " << diameter << ") / 4 = " << CircleAreaFromDiameter(diameter) << endl;
    cout << "using celi : " << ceil(result1) << endl;
    system("pause");
}

         //For problem 20
              float result2;
              float CircleAreaBySquareWidth(float width)
              {
                  const float pi = 3.14;
                  result2 = (pi * width * width) / 4;
                  return result2;
              }

void Problem20()
{
    float width;
    cout << "Hello\nThis program calculates Circle area inscribed in a square width\n";
    cout << "Please enter the width of the square\n";
    cin >> width;
    cout << "Ok here is your result\n";
    cout << "(pi * width * width)/4 = (" << 3.14 << " * " << width << " * " << width << ") / 4 = " << CircleAreaBySquareWidth(width) << endl;
    cout << "using ceil : " << ceil(result2) << endl;
}

         //for problem 21
               
               float CircleAreaByCircumference(float circumference)
               {
                   float result3;
                   const float pi = 3.14;
                   result3 = ((circumference * circumference) / (4 * pi));
                   return result3;
               }

void Problem21()
{
    float circumference;
    cout << "Hello,\nThis program calculates the area of the circle by entering the circumference of it\n";
    cout << "Please enter the circumference of the circle by cm\n";
    cin >> circumference;
    cout << "Here is the area of the circle by squared cintmeters : " << CircleAreaByCircumference(circumference) << endl;
}

          //for problem 22

                float CircleArea_Inscribed_in_Isosceles_Triangle(float a, float b)
                {
                    float result;
                    const float pi = 3.14;
                    result = (pi * ((b * b) / 4) * ((((2 * a) - b)) / ((2 * a) + b)));
                    return result;
                }

void Problem22()
{
    float a;
    float b;
    cout << "Hello\nthis program calculates circle area Inscribed in an Isosceles Triangle when you input a and b\n";
    cout << "A is equal to any of the two equal sides of an isosceles triangle\n";
    cout << "So please enter the value of A by cm\n";
    cin >> a;
    cout << "B is equal to the base of the isosceles triangle\n";
    cout << "So please enter the value of B by cm" << endl;
    cin >> b;
    cout << "Here is your result by squared cintmeters : " << CircleArea_Inscribed_in_Isosceles_Triangle(a, b) << endl;
}

         //for problem 23
                float CircleArea_described_around_an_arbitrary_triangle(float a, float b, float c)
                          {
                              float area;
                              float p = (a + b + c) / 2;
                              float ForEquation = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
                              const float pi = 3.14;
                              area = pi * ForEquation * ForEquation;
                              return area;
                          }

void Problem23()
{
    float a, b, c;
    cout << "This program calculates the area of a circle described around an arbitrary triangle\n";
    cout << "Please write the length of the first side of the triangle\n";
    cin >> a;
    cout << "Please write the length of the second side of the triangle\n";
    cin >> b;
    cout << "Please write the length of the third side of the triangle\n";
    cin >> c;
    cout << "area =" << CircleArea_described_around_an_arbitrary_triangle(a, b, c);
}

void Problem24()
{
    float age;
    cout << "Hello!\nEnter your age\n";
    cin >> age;
    if (age <= 45)
    {
        if (age >= 18)
        {
            cout << "VAILD AGE";
        }
        else
        {
            cout << "UNVAILD AGE";
        }
    }
    else
    {
        cout << "UNVAILD AGE";
    }
}

           //For Problem 25
                    int Problem25_TheAge(int x, int y)
                    {
                        int number;
                        do
                        {
                           cout << "You must enter your age between " << x << " and " << y << endl;
                           cin >> number;
                         /* code */
                        } while (number < x || number > y);
                        cout << "Your age is ";
                        return number;
                    }
void Problem25()
{
    int x = 18;
    int y = 45;
    cout << Problem25_TheAge(x, y);
}

void Problem26() {
    int i;
    int loop;
    cout << "Want the program to print from 0 to what number?\n";
    cin >> loop;
    i = 0;
    while (i <= loop) {
        cout << i << endl;
        i++;
    }
}

void Problem27() {
    int i;
    int loop;
    cout << "Hello, This program prints from the number you type to 0\n";
    cout << "Please enter your number\n";
    cin >> loop;
    i = loop;
    while (i >= 0) { // Change to 0 so it includes 0 in the output
        cout << i << endl;
        i--;
    }
}

void Problem28() {
    int i;
    int loop;
    cout << "Hello, This program calculates the sum of odd numbers\n";
    cout << "Enter the number?\n";
    cin >> loop;
    int counter = 0;
    i = 1;
    while (i <= loop) {
        counter += i;
        i += 2;
    }
    cout << "The sum of odd numbers between 1 and " << loop << " = " << counter << endl;
}

void Problem29() {
    int i;
    int loop;
    cout << "Hello, This program calculates the sum of even numbers\n";
    cout << "Enter the number?\n";
    cin >> loop;
    int counter = 0;
    i = 0;
    while (i <= loop) {
        counter += i;
        i += 2;
    }
    cout << "The sum of even numbers between 0 and " << loop << " = " << counter << endl;
}

void ForProblem30() {
    int number;
    int counter;
    long double factorial = 1;
    cin >> number;
    if (number >= 0) {
        counter = number;
        while (counter >= 1) {
            factorial *= counter;
            cout << counter << " * ";
            counter--;
        }
        cout << "\b\b\b"; // Erase the last " * "
        cout << " = " << factorial;
    }
    else {
        cout << "PLEASE ENTER A POSITIVE NUMBER\n";
        ForProblem30(); // Recursive call for invalid input
    }
}

void Problem30() {
    cout << "Hello, This program calculates the factorial of numbers you put in\n";
    cout << "Please enter your number\n";
    ForProblem30();
}

          //For problem 31
                    float Power2(float input)
                    {
                        return pow(input, 2);
                    }
                    
                    float Power3(float input)
                    {
                        return pow(input, 3);
                    }
                    
                    float Power4(float input)
                    {
                        return pow(input, 4);
                    }

void Problem31()
{
    float input;
    cout << "Hello,\nThis program makes the number you type power to (2,3,4)\n";
    cout << "Please enter the number\n";
    cin >> input;
    cout << "Here is your result:\n";
    cout << input << "^2 = " << Power2(input) << endl;
    cout << input << "^3 = " << Power3(input) << endl;
    cout << input << "^4 = " << Power4(input) << endl;
    system("pause");
}

void Problem32() {
    float number;
    float power;
    cout << "Hello, This program calculates (number ^ power)\n";
    cout << "Please enter the number\n";
    cin >> number;
    cout << "Please enter the power\n";
    cin >> power;
    cout << "Here is your result: " << number << " ^ " << power << " = " << pow(number, power) << endl;
}

void Problem33()
{
    float grade;
    cout << "Please enter your grade\n";
    cin >> grade;
    if (90 <= grade && grade <= 100)
    {
        cout << "A";
    }
    else if (80 <= grade && grade <= 89)
    {
        cout << "B";
    }
    else if (70 <= grade && grade <= 79)
    {
        cout << "C";
    }
    else if (60 <= grade && grade <= 69)
    {
        cout << "D";
    }
    else if (50 <= grade && grade <= 59)
    {
        cout << "E";
    }
    else
    {
        cout << "F";
    }
}

void Problem34()
{
    string ToFloat;
    float TotalSales;
    cout << "Please enter your Total Sales\n";
    cin >> TotalSales;
    float result1 = TotalSales * (1.0 / 100.0);
    float result2 = TotalSales * (2.0 / 100.0);
    float result3 = TotalSales * (3.0 / 100.0);
    float result4 = TotalSales * (5.0 / 100.0);

    if (TotalSales == 1000000)
    {
        cout << result1;
    }
    else if (500000 <= TotalSales && TotalSales < 1000000)
    {
        cout << result2;
    }
    else if (100000 <= TotalSales && TotalSales < 500000)
    {
        cout << result3;
    }
    else if (50000 <= TotalSales && TotalSales < 100000)
    {
        cout << result4;
    }
    else
    {
        cout << "0";
    }
}

void Problem35()
{
    float TotalPennies;
    float TotalDollars;
    float Pennies;
    float Nickels;
    float Dimmes;
    float Quarters;
    float Dollars;
    cout << "this program orders pennies,nickels,dimes,quarters,dollars\n";
    cout << "Then it calculates it to TotalPennies & TotalDollars\n";
    cout << "So, Please enter the pennies\n";
    cin >> Pennies;
    cout << "So, Please enter the nickels (Nickel = 5 Pennies)\n";
    cin >> Nickels;
    cout << "So, Please enter the dimmes (Dime = 10 Pennies)\n";
    cin >> Dimmes;
    cout << "So, Please enter the quarters (Quarter = 25 Pennies)\n";
    cin >> Quarters;
    cout << "So, Please enter the dollars (Dollar = 100 Pennies)\n";
    cin >> Dollars;
    TotalPennies = Pennies + Nickels * 5 + Dimmes * 10 + Quarters * 25 + Dollars * 100;
    TotalDollars = TotalPennies / 100;
    cout << "Here is the total pennies and total dollars:\n";
    cout << TotalPennies << endl;
    cout << TotalDollars << endl;
}

       //For problem 36
              enum enOperationType { sum = 1, division = 2, substract = 3, multiplication = 4 };
              
              
              void Problem36_Welcome()
              {
                  cout << "Hello, This program calculates the operation of 2 numbers\n";
              }
              
              void SelectOperation()
              {
                  cout << "Please enter your operation\n";
                  cout << "**********************\n";
                  cout << "(1) sum\n";
                  cout << "(2) division\n";
                  cout << "(3) substract\n";
                  cout << "(4) multiplication\n";
                  cout << "**********************\n";
              }
              
              void TakeOperation()
              {
                  float num1;
                  float num2;
                  enOperationType OperationType;
                  int operation;
              
                  cin >> operation;
              
                  OperationType = (enOperationType)operation;
              
              
                  cout << "Please enter number 1\n";
                  cin >> num1;
                  cout << "Please enter number 2\n";
                  cin >> num2;
              
              
                  switch (OperationType)
                  {
                  case enOperationType::sum:
                      cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                      break;
                  case enOperationType::division:
                      cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                      break;
                  case enOperationType::substract:
                      cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                      break;
                  case enOperationType::multiplication:
                      cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                      break;
                  default:
                      cout << "WRONG OPERATION DUDE\n";
                      cout << "Repeating....\n";
                      SelectOperation();
                      TakeOperation();
                      break;
                  }
              
              
              
                  char repeat;
                  cout << "Do you want to do another Operation? (y/n)\n";
                  cin >> repeat;
                  if (repeat == 'y')
                  {
                      SelectOperation();
                      TakeOperation();
                  }
                  else
                  {
                      cout << "Thanks for using my program :)\n";
                      cout << "made by adam\n";
                      cout << "EXITING PROGRAM...";
                  }
              
              }

void Problem36()
{
    Problem36_Welcome();
    SelectOperation();
    TakeOperation();
}

void Problem37() {
    int number;
    int sum = 0;
    cout << "Hello, This program calculates the sum of numbers you input until you put -99\n";
    cout << "Please enter the numbers you want\n";
    cin >> number;
    while (number != -99) {
        sum = sum + number;
        cin >> number;
    }
    sum += 109;
    cout << "Ok, Here is your result:\n" << sum << endl;
}

void Problem38()
{
    int number;
    std::cout << "Hello, This program knows if the number you type is prime or not\n";
    std::cout << "Please enter your number\n";
    std::cin >> number;

    while (number < 0)
    {
        std::cout << "Please enter a positive number\n";
        std::cin >> number;
    }

    // Handle edge cases
    if (number <= 1) {
        std::cout << number << " is not a prime number\n";
        return;
    }

    if (number == 2) {
        std::cout << number << " is a prime number\n";
        return;
    }

    if (number % 2 == 0) {
        std::cout << number << " is not a prime number\n";
        return;
    }

    // Check for factors from 3 to the square root of the number
    bool isPrime = true;
    int limit = static_cast<int>(std::sqrt(number));

    for (int i = 3; i <= limit; i += 2) {
        if (number % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        std::cout << number << " is a prime number\n";
    }
    else {
        std::cout << number << " is not a prime number\n";
    }
}

void Problem39()
{
    float TotalBill;
    float CashPaid;
    cout << "Hello\nThis program makes a remainder to be paid back\n";
    cout << "Please enter the total bill by pounds\n";
    cin >> TotalBill;
    cout << "Please enter the Cash Paid by pounds\n";
    cin >> CashPaid;
    float result = TotalBill - CashPaid;
    cout << "The Paid back is : " << result << " pounds\n";
}

void Problem40()
{
    float BillValue;
    float ServiceFee;
    cout << "Hello!,\nThis program you can enter in it the bill value and service taxes to print the result of it\n";
    cout << "Please enter the bill value\n";
    cin >> BillValue;
    cout << "Please enter the service fee by persent but do not type %\n";
    cin >> ServiceFee;
    float ServiceFeeDevidedBy100 = BillValue * (ServiceFee / 100);
    float result = BillValue + ServiceFeeDevidedBy100;
    cout << "The total bill is " << result << " pounds\n";
    system("pause");
}

void Problem41()
{
    float NumberOfHours;
    cout << "Hello, This program makes you enter the number of hours then it converts it to weeks and days\n";
    cout << "Please enter the number of hours\n";
    cin >> NumberOfHours;
    float weeks = NumberOfHours / 168;
    float days = NumberOfHours / 24;
    cout << "The number if it converted to weeks, it will be " << weeks << endl;
    cout << "The number if it converted to days, it will be " << days << endl;
}

            //For problem 42
                   double DetailsToSeconds(double Days, double Hours, double Minutes, double Seconds)
                   {
                       double TotalSeconds = Days * 86400 + Hours * 3600 + Minutes * 60 + Seconds;
                       return TotalSeconds;
                   }

void Problem42()
{
    double Days;
    double Hours;
    double Minutes;
    double Seconds;
    cout << "Hello!,\nThis program calculates the days, hours, minutes and seconds to Total seconds\n";
    cout << "So please enter the number of the days\n";
    cin >> Days;
    cout << "please enter the number of the hours\n";
    cin >> Hours;
    cout << "please enter the number of the minutes\n";
    cin >> Minutes;
    cout << "Finally enter the number of the seconds" << endl;
    cin >> Seconds;
    cout << "Here is your result:\n" << DetailsToSeconds(Days, Hours, Minutes, Seconds) << " seconds\n";
}

           //For problem 43

                   //Global Seconds
                  long long int TotalSeconds;
                  
                  void Problem43_Welcome()
                  {
                      cout << "Hello!,\nThis program calculates the total seconds to days, hours, minutes\n";
                      cout << "Please enter the total seconds\n";
                  }
                  
                  void ChangeGlobalSeconds()
                  {
                      cin >> TotalSeconds;
                  }
                  
                  long long int SecondsToDays(long long int seconds)
                  {
                      int SecondsPerDay = 24 * 60 * 60;
                      short int SecondsPerHour = 60 * 60;
                      short int SecondsPerMinute = 60;
                      long long int NumberOfDays = floor(seconds / SecondsPerDay);
                      return NumberOfDays;
                  }
                  
                  long long int SecondsToHours(long long int seconds)
                  {
                      int SecondsPerDay = 24 * 60 * 60;
                      short int SecondsPerHour = 60 * 60;
                      short int SecondsPerMinute = 60;
                      long long int NumberOfDays = floor(seconds / SecondsPerDay);
                      long long int TheRest = seconds % SecondsPerDay;
                      int TheRestInt = TheRest;
                      int NumberOfHours = floor(TheRestInt / SecondsPerHour);
                      return NumberOfHours;
                  }
                  
                  long long int SecondsToMinutes(long long int seconds)
                  {
                      int SecondsPerDay = 24 * 60 * 60;
                      short int SecondsPerHour = 60 * 60;
                      short int SecondsPerMinute = 60;
                      long long int NumberOfDays = floor(seconds / SecondsPerDay);
                      long long int TheRest = seconds % SecondsPerDay;
                      int TheRestInt = TheRest;
                      int NumberOfHours = floor(TheRestInt / SecondsPerHour);
                      TheRestInt = TheRestInt % SecondsPerHour;
                      short int TheRestShortInt = TheRestInt;
                      short int NumberOfMinutes = floor(TheRestShortInt / SecondsPerMinute);
                      return NumberOfMinutes;
                  }
                  
                  long long int RemainingSeconds(long long int seconds)
                  {
                      int SecondsPerDay = 24 * 60 * 60;
                      short int SecondsPerHour = 60 * 60;
                      short int SecondsPerMinute = 60;
                      long long int NumberOfDays = floor(seconds / SecondsPerDay);
                      long long int TheRest = seconds % SecondsPerDay;
                      int TheRestInt = TheRest;
                      int NumberOfHours = floor(TheRestInt / SecondsPerHour);
                      TheRestInt = TheRestInt % SecondsPerHour;
                      short int TheRestShortInt = TheRestInt;
                      short int NumberOfMinutes = floor(TheRestShortInt / SecondsPerMinute);
                      TheRestShortInt = TheRestShortInt % SecondsPerMinute;
                      short int NumberOfSeconds = TheRestShortInt;
                      return NumberOfSeconds;
                  }
                  
                  void TheResults()
                  {
                      cout << "The number of days is : " << SecondsToDays(TotalSeconds) << " Days,\n";
                      cout << "The number of hours is : " << SecondsToHours(TotalSeconds) << " hours," << endl;
                      cout << "The number of minutes is : " << SecondsToMinutes(TotalSeconds) << " minutes,\n";
                      cout << "And lastely the number of seconds is : " << RemainingSeconds(TotalSeconds) << " seconds.\n";
                  }

void Problem43()
{
    Problem43_Welcome();
    ChangeGlobalSeconds();
    TheResults();
}

          //For problem 44
                      enum enDAYS { saturday = 1, sunday = 2, monday = 3, tuesday = 4, wednesday = 5, thursday = 6, friday = 7 };
                      
                      void Problem44_Welcome()
                      {
                          cout << "Hello, please choose your day\n";
                      }
                      
                      void ChooseDay()
                      {
                          cout << "**********************\n";
                          cout << "(1) saturday\n";
                          cout << "(2) sunday\n";
                          cout << "(3) monday\n";
                          cout << "(4) tuesday\n";
                          cout << "(5) wednesday\n";
                          cout << "(6) thursday\n";
                          cout << "(7) friday\n";
                          cout << "**********************\n";
                      }
                      
                      void TakeUserDecision()
                      {
                          enDAYS Today;
                          int TakeTheDay;
                          cin >> TakeTheDay;
                          Today = (enDAYS)TakeTheDay;
                          switch (Today)
                          {
                          case enDAYS::saturday:
                              cout << "YOUR DAY ISSSSSS ";
                              cout << "saturday\n";
                              break;
                      
                          case enDAYS::sunday:
                              cout << "YOUR DAY ISSSSSS ";
                              cout << "sunday\n";
                              break;
                          case enDAYS::monday:
                              cout << "YOUR DAY ISSSSSS ";
                              cout << "monday\n";
                              break;
                      
                          case enDAYS::tuesday:
                              cout << "YOUR DAY ISSSSSS ";
                              cout << "tuesday\n";
                              break;
                      
                          case enDAYS::wednesday:
                              cout << "YOUR DAY ISSSSSS ";
                              cout << "wednesday\n";
                              break;
                          case enDAYS::thursday:
                              cout << "YOUR DAY ISSSSSS ";
                              cout << "thursday\n";
                              break;
                          case enDAYS::friday:
                              cout << "YOUR DAY ISSSSSS ";
                              cout << "friday\n";
                              break;
                          default:
                              cout << "HEY, THIS IS NOT EVEN A DAY NUMBER , EWW BROTHER\n";
                              break;
                          }
                          cout << "Do you want to enter another day?\n";
                          string decision;
                          cin >> decision;
                          if (decision == "y")
                          {
                              cout << "OK, Choose it\n";
                              ChooseDay();
                              TakeUserDecision();
                          }
                      }

void Problem44()
{
    Problem44_Welcome();
    ChooseDay();
    TakeUserDecision();
}

          //For problem 45
                   enum enMONTH { january = 1, feburary = 2, march = 3, april = 4, may = 5, june = 6, july = 7, august = 8, september = 9, october = 10, november = 11, december = 12 };
                   
void Problem45()
{
    cout << "Hello, please choose your month\n";
    cout << "**********************\n";
    cout << "(1) january\n";
    cout << "(2) feburary\n";
    cout << "(3) march\n";
    cout << "(4) april\n";
    cout << "(5) may\n";
    cout << "(6) june\n";
    cout << "(7) july\n";
    cout << "(8) august\n";
    cout << "(9) september\n";
    cout << "(10) october\n";
    cout << "(11) november\n";
    cout << "(12) december\n";
    cout << "*********************\n";
    enMONTH currently;
    int TakeTheMonth;
    cin >> TakeTheMonth;
    currently = (enMONTH)TakeTheMonth;
    switch (currently)
    {
    case enMONTH::january:
        cout << "YOUR MONTH ISSSSSS ";
        cout << "january\n";
        break;

    case enMONTH::feburary:
        cout << "YOUR MONTH ISSSSSS ";
        cout << "feburary\n";
        break;
    case enMONTH::march:
        cout << "YOUR MONTH ISSSSSS ";
        cout << "march\n";
        break;

    case enMONTH::april:
        cout << "YOUR MONTH ISSSSSS ";
        cout << "april\n";
        break;

    case enMONTH::may:
        cout << "YOUR MONTH ISSSSSS ";
        cout << "may\n";
        break;
    case enMONTH::june:
        cout << "YOUR MONTH ISSSSSS ";
        cout << "june\n";
        break;
    case enMONTH::july:
        cout << "YOUR MONTH ISSSSSS ";
        cout << "july\n";
        break;
    case enMONTH::august:
        cout << "YOUR MONTH ISSSSSS ";
        cout << "august\n";
        break;

    case enMONTH::september:
        cout << "YOUR MONTH ISSSSSS ";
        cout << "september\n";
        break;

    case enMONTH::october:
        cout << "YOUR MONTH ISSSSSS ";
        cout << "october\n";
        break;
    case enMONTH::november:
        cout << "YOUR MONTH ISSSSSS ";
        cout << "november\n";
        break;
    case enMONTH::december:
        cout << "YOUR MONTH ISSSSSS ";
        cout << "december\n";
        break;
    default:
        cout << "HEY, THIS IS NOT EVEN A MONTH NUMBER , EWW BROTHER\n";
        break;
    }
}

void Problem46() {
    cout << "HERE WE GOOO, IT IS A TO Z\n";
    char letter;
    short int counter = 65;
    while (counter <= 90) {
        letter = counter;
        cout << letter << endl;
        counter++;
    }
}

void Problem47()
{
    float LoanAmount;
    float MonthlyPayment;
    cout << "Hello!,\nThis program makes you input Loan Amount and Monthly Payment and it calculates how many months you need to settle the loan,\n";
    cout << "Please enter the loan amount\n";
    cin >> LoanAmount;
    cout << "Please enter the monthly payment\n";
    cin >> MonthlyPayment;
    float result = LoanAmount / MonthlyPayment;
    cout << "You can pay them in " << result << " months.\n";
}

void Problem48()
{
    float LoanAmount;
    float Months;
    cout << "Hello!,\nThis program makes you input Loan Amount and how many monthes you will pay it and it calculates the monthlly installment,\n";
    cout << "Please enter the loan amount\n";
    cin >> LoanAmount;
    cout << "Please enter the number of the months you would like to pay in\n";
    cin >> Months;
    float result = LoanAmount / Months;
    cout << "You can pay " << result << " pounds every 1 month.\n";
}

           //For problem49
                  void Require()
                  {
                      cout << "Please enter pin code\n";
                  }
                  
                  void repeater()
                  {
                      short int pinCODE;
                      cin >> pinCODE;
                      if (pinCODE == 1234)
                      {
                          cout << "Your Balance is: 7500";
                      }
                      else
                      {
                          cout << "WRONG PIN\nPlease enter THE PIN AGAIN\n";
                          repeater();
                      }
                  }

void Problem49()
{
    Require();
    repeater();
}

void Problem50() {
    int password = 1234;
    int PasswordEntered;
    int attempts = 0;
    cout << "Hello, Please enter your bank password\n";

    while (attempts < 3) {
        cin >> PasswordEntered;
        if (PasswordEntered == password) {
            cout << "Password correct. Access granted.\n";
            cout << "Your balance is 7500\n";
            return; // Exit function after correct password
        }
        else {
            attempts++;
            cout << "Incorrect password. Try again (" << (3 - attempts) << " attempts left).\n";
        }
    }
    cout << "Too many incorrect attempts. Access denied.\n";
}

void menu() {
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
    cout << "What do you want to view of this?\n";
}



void SelectFromMenu() {
    int choose;
    menu();
    cin >> choose;
    switch (choose) {
    case 1:
        Problem1();
        break;
    case 2:
        Problem2();
        break;
    case 3:
        Problem3();
        break;
    case 4:
        Problem4();
        break;
    case 5:
        Problem5();
        break;
    case 6:
        Problem6();
        break;
    case 7:
        Problem7();
        break;
    case 8:
        Problem8();
        break;
    case 9:
        Problem9();
        break;
    case 10:
        Problem10();
        break;
    case 11:
        Problem11();
        break;
    case 12:
        Problem12();
        break;
    case 13:
        Problem13();
        break;
    case 14:
        Problem14();
        break;
    case 15:
        Problem15();
        break;
    case 16:
        Problem16();
        break;
    case 17:
        Problem19();
        break;
    case 18:
        cout << Problem18();
        break;
    case 19:
        Problem19();
        break;
    case 20:
        Problem20();
        break;
    case 21:
        Problem21();
        break;
    case 22:
        Problem22();
        break;
    case 23:
        Problem23();
        break;
    case 24:
        Problem24();
        break;
    case 25:
        Problem25();
        break;
    case 26:
        Problem26();
        break;
    case 27:
        Problem27();
        break;
    case 28:
        Problem28();
        break;
    case 29:
        Problem29();
        break;
    case 30:
        Problem30();
        break;
    case 31:
        Problem31();
        break;
    case 32:
        Problem32();
        break;
    case 33:
        Problem33();
        break;
    case 34:
        Problem34();
        break;
    case 35:
        Problem35();
        break;
    case 36:
        Problem36();
        break;
    case 37:
        Problem37();
        break;
    case 38:
        Problem38();
        break;
    case 39:
        Problem39();
        break;
    case 40:
        Problem40();
        break;
    case 41:
        Problem41();
        break;
    case 42:
        Problem42();
        break;
    case 43:
        Problem43();
        break;
    case 44:
        Problem44();
        break;
    case 45:
        Problem45();
        break;
    case 46:
        Problem46();
        break;
    case 47:
        Problem47();
        break;
    case 48:
        Problem48();
        break;
    case 49:
        Problem49();
        break;
    case 50:
        Problem50();
        break;
    default:
        cout << "WRONG CHOICE, PLEASE CHOOSE AGAIN\n";
        SelectFromMenu();
    }
    char WantAnother;
    cout << "\n\nDo you want to do another operation? (y/n)\n";
    cin >> WantAnother;
    if (WantAnother == 'y') {
        SelectFromMenu();
    }
    else {
        cout << "Thanks for using my program :)\n";
        cout << "Made by Adam\n";
        cout << "EXITING PROGRAM...\n";
        system("pause");
    }
}

int main() {
    SelectFromMenu();
    return 0;
}