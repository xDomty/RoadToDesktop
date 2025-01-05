#include <iostream>
using namespace std;

enum enOperationType{Add=1,Sub=2,Mul=3,Div=4};

enOperationType ReadOperationType(string Message)
{
     short Number;
     do
     {
        
          cout<<Message<<"\n";
          
          cin>>Number;
          
          if(Number>4||Number<1)
              {
                cout<<"Wrong Number\n";
              }
     }
     while(Number>4||Number<1);

return (enOperationType)Number;

}

float ResultOfOp(int Number1,int Number2, enOperationType OperationType)
{
    switch(OperationType)
    {
       case enOperationType ::Add:
       return Number1+Number2;
       case enOperationType::Sub:
       return Number1-Number2;
       case enOperationType::Mul:
       return Number1*Number2;
       case enOperationType::Div:
       return (float)Number1/Number2;
       default :
       return Number1+Number2;
    }
}

void PrintTableHeader()
{

     cout<<"\n\n\t\t    Multiplication Table From 1 to 10\n\n";
     cout<<"\t";
     
     for(int i=1;i<=10;i++)
      {  
         cout<<i<<"\t";
      }  

     cout<<"\n_________________________________________________________________________________________\n";

}

string columSperator(int i)
{
     if(i<10)
        return"  |";
     
     else
        return " |";
}

void PrintMultiplacationTable()
{
     enOperationType OP = ReadOperationType("Please enter your operation Type (1 To Add, 2 To Sub , 3 TO Mul , 4 To Div)");
     PrintTableHeader();
     for(int i=1;i<=10;i++)
      {
        cout<<" "<<i<<columSperator(i)<<"\t";
           
        for(int j=1;j<=10;j++)
        {
           cout << ResultOfOp(i,j,OP) << "\t";
        }

      cout<<endl;
     } 
}
int main()
{
 PrintMultiplacationTable();
 return 0;
}
