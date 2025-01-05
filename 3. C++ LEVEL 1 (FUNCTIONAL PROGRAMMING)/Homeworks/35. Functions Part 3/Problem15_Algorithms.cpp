//Problem 15 Algorithms
#include <iostream>
using namespace std;


     //The Program
        float RectangleArea(float length,float width)
        {
           return length * width;
        }

        void TheProgram()
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
           cout << " squared cintemeters";
        }


int main()
{
    TheProgram();
}