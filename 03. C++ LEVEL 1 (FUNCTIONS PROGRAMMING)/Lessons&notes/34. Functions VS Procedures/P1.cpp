#include <iostream>
using namespace std;


   //Types Of Functions:
     //Procedure
      void FunctionVoid() 
      {
	    //Returning nothing
      }
     //functions
      int FunctionInt()
      {
          float x = 7;
          float y = 9;
	    //Must return int
	      return x*y;
      }

      string FunctionString()
      {
	    //must return string
	    return "Returned";
      }

      long double FunctionLongDouble()
      {
	    //must return long double
	    return 1.1;
      }

      double FunctionDouble()
      {
	      //must return double
	      return 2.5;
      }

      float FunctionFloat()
      {
          //must return float
          return 5.4;
      }

      bool FunctionBool()
      {
          //must return true or false
          return true;
      }


int main()
{
   //example
    cout << "x*y = " << FunctionInt();
	return 0;
}