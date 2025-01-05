//Problem 16 algorithms
#include <iostream>
#include <cmath>
using namespace std;
     //The Program
        float RectangleArea(float length,float rectangleDiameter)
	    {
			float result = length * sqrt(pow(rectangleDiameter,2)-(pow(length,2)));
				return result;
	    }
		void TheProgram()
		{
			float length, RectangleDiameter;
			cout << "Hello!\nThis program calculates rectangle area through diagonal and side area of rectangle and print it on the screen.\n";
			cout << "Please enter the length of the rectangle\n";
			cin >> length;
			cout << "Ok, and the rectangle diameter?\n";
			cin >> RectangleDiameter;
			cout << "Ok, Here is your result by squared length units : " << RectangleArea(length, RectangleDiameter) << endl;
		}
using namespace std;
int main()
{
	TheProgram();
}