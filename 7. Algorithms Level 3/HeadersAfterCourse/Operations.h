#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <optional>
using namespace std;

namespace OPERATIONS{

// IMPORTANT NOTE TO SUMROWS AND SUMCOLS NAMESPACE --> There is a namespace for every datatype you choose , If you notice There is (Specific & To) functions inside each one 
    // YOU CHOOSE SPECIFIC TO SUM SPECIFIC (ROWS OR COLS) FROM YOUR CHOISE FROM A VECTOR INPUT IN FUNCTION REQUIREMENTS
      // YOU CHOOSE TO IF YOU WANT TO SUM (ROWS OR COLS) FROM 1 TO THE ROW YOU WANT
        // EACH FUNCTION HAS A BOOL DATATYPE (RETURNS TRUE IF THE FUNCTION IS DONE SUCCESSFULLY AND RETURNS FALSE IF THE FUNCTION IS'NOT DONE SUCCESSFULLY)
           //ALSO THE DATATYPE YOU CHOOSE IS THE DATATYPE FOR 2D VECTOR AND THE SUM (SOON I WILL ADD ANOTHER OPERATIONS) , AND FOR THE (WhatRowsToCalculate & HowManyRowsToCalculate) ITS ALWAYS UNSIGNED SHORT BECAUSE IT CAN'T BE THAT MUCH
   // MADE WITH LOVE BY : ADAM AMER.

namespace _2DVectors
{
  
    namespace SumRows
    {
       
                template < typename FunctionType , typename TypeOf2dVector>
                optional <FunctionType> Specific(vector <vector <TypeOf2dVector>> vVector, vector <unsigned short> WhatRowsToCalculate, bool HandleCoreDumped = true)
                {
                    if (vVector.empty() || vVector[0].empty()) 
                    {
                        if (vVector.empty()) {
                            cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        }
                        if (vVector[0].empty()) {
                            cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        }
                        return nullopt;
                    }

                    if (HandleCoreDumped)
                    {
                        for (short f = 0; f < WhatRowsToCalculate.size(); f++)
                        {
                            if (WhatRowsToCalculate[f] > vVector.size())
                            {
                                cout << "ERROR : YOU CANNOT PUT ROWS THAT IS NOT INCLUDED IN THE VECTOR\n";
                                return nullopt;
                            }
                        }
                    }

                    FunctionType sum = 0;

                    for (short i = 0; i < WhatRowsToCalculate.size(); i++)
                    {
                        for (short j = 0; j < vVector[0].size(); j++)
                        {
                            sum += vVector[WhatRowsToCalculate[i]-1][j];
                        }
                    }

                    return sum;
                }

                template < typename FunctionType , typename TypeOf2dVector>
                optional <FunctionType> To(vector <vector <short>> vVector, unsigned short HowManyRowsToCalculate, short &sum , bool PrintResult = false, bool HandleCoreDumped = true)
                {

                    if (vVector.size() == 0 && vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector.size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }

                    if (HandleCoreDumped)
                    {
                            if (HowManyRowsToCalculate > vVector.size())
                            {
                                cout << "ERROR : YOU CANNOT PUT NUMBER OF ROWS THAT IS NOT INCLUDED IN THE VECTOR\n";
                                return false;
                            }
                    }

                    sum = 0;

                    for (short i = 0; i < HowManyRowsToCalculate; i++)
                    {
                        for (short j = 0; j < vVector[0].size(); j++)
                        {
                             sum += vVector[i][j];
                        }
                    }

                    if (PrintResult == true)
                    {
                        if (HowManyRowsToCalculate == 1)
                            cout << "The SUM of row {1} is : " << sum;
                        else
                            cout << "The SUM of rows { 1 to " << HowManyRowsToCalculate << " } is : " << sum;
                    }

                    return 1;
                }

    }
}

    namespace SumCols
    {
        namespace _2dVectorType
        {
            namespace ShortINT
            {
                bool Specific(vector <vector <short>> vVector, vector <unsigned short> WhatColsToCalculate, short &sum , bool PrintResult = false, bool HandleCoreDumped = false)
                {
                    if (vVector.size() == 0 && vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector.size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }

                    if (HandleCoreDumped)
                    {
                        for (short f = 0; f < WhatColsToCalculate.size(); f++)
                        {
                            if (WhatColsToCalculate[f] > vVector[0].size())
                            {
                                cout << "ERROR : YOU CANNOT PUT COLS THAT IS NOT INCLUDED IN THE VECTOR\n";
                                return false;
                            }
                        }
                    }

                    sum = 0;

                    for (short i = 0; i < vVector.size(); i++)
                    {
                        for (short j = 0; j < WhatColsToCalculate.size(); j++)
                        {
                            sum += vVector[i][WhatColsToCalculate[j]-1];
                        }
                    }

                    if (PrintResult)
                    {
                        string ResultSTRING;

                        if (WhatColsToCalculate.size() == 1)
                            ResultSTRING = "The SUM of column { ";
                        else
                            ResultSTRING = "The SUM of colums { ";

                        for (short x = 0; x < WhatColsToCalculate.size(); x++)
                        {
                            ResultSTRING += to_string(WhatColsToCalculate[x]) + " , ";
                        }
                        ResultSTRING.erase(ResultSTRING.length() - 2);
                        ResultSTRING += ("} is : " + to_string(sum));
                        cout << ResultSTRING;
                    }

                    return 1;
                }

                bool To(vector <vector <short>> vVector, unsigned short HowManyColsToCalculate, short &sum , bool PrintResult = false, bool HandleCoreDumped = false)
                {

                    if (vVector.size() == 0 && vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector.size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }

                    if (HandleCoreDumped)
                    {
                            if (HowManyColsToCalculate > vVector.size())
                            {
                                cout << "ERROR : YOU CANNOT PUT NUMBER OF COLS THAT IS NOT INCLUDED IN THE VECTOR\n";
                                return false;
                            }
                    }

                    sum = 0;

                    for (short i = 0; i < vVector.size(); i++)
                    {
                        for (short j = 0; j < HowManyColsToCalculate; j++)
                        {
                             sum += vVector[i][j];
                        }
                    }

                    if (PrintResult == true)
                    {
                        if (HowManyColsToCalculate == 1)
                            cout << "The SUM of column {1} is : " << sum;
                        else
                            cout << "The SUM of colums { 1 to " << HowManyColsToCalculate << " } is : " << sum;
                    }

                    return 1;
                }
            }

            namespace INT
            {
                bool Specific(vector <vector <int>> vVector, vector <unsigned short> WhatColsToCalculate, int &sum , bool PrintResult = false, bool HandleCoreDumped = false)
                {
                    if (vVector.size() == 0 && vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector.size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }

                    if (HandleCoreDumped)
                    {
                        for (short f = 0; f < WhatColsToCalculate.size(); f++)
                        {
                            if (WhatColsToCalculate[f] > vVector[0].size())
                            {
                                cout << "ERROR : YOU CANNOT PUT COLS THAT IS NOT INCLUDED IN THE VECTOR\n";
                                return false;
                            }
                        }
                    }

                    sum = 0;

                    for (short i = 0; i < vVector.size(); i++)
                    {
                        for (short j = 0; j < WhatColsToCalculate.size(); j++)
                        {
                            sum += vVector[i][WhatColsToCalculate[j]-1];
                        }
                    }

                    if (PrintResult)
                    {
                        string ResultSTRING;

                        if (WhatColsToCalculate.size() == 1)
                            ResultSTRING = "The SUM of column { ";
                        else
                            ResultSTRING = "The SUM of columns { ";

                        for (short x = 0; x < WhatColsToCalculate.size(); x++)
                        {
                            ResultSTRING += to_string(WhatColsToCalculate[x]) + " , ";
                        }
                        ResultSTRING.erase(ResultSTRING.length() - 2);
                        ResultSTRING += ("} is : " + to_string(sum));
                        cout << ResultSTRING;
                    }

                    return 1;
                }

                bool To(vector <vector <int>> vVector, unsigned short HowManyColsToCalculate, int &sum , bool PrintResult = false, bool HandleCoreDumped = false)
                {

                    if (vVector.size() == 0 && vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector.size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }

                    if (HandleCoreDumped)
                    {
                            if (HowManyColsToCalculate > vVector.size())
                            {
                                cout << "ERROR : YOU CANNOT PUT NUMBER OF COLS THAT IS NOT INCLUDED IN THE VECTOR\n";
                                return false;
                            }
                    }

                    sum = 0;

                    for (short i = 0; i < vVector.size(); i++)
                    {
                        for (short j = 0; j < HowManyColsToCalculate; j++)
                        {
                             sum += vVector[i][j];
                        }
                    }

                    if (PrintResult == true)
                    {
                        if (HowManyColsToCalculate == 1)
                            cout << "The SUM of column {1} is : " << sum;
                        else
                            cout << "The SUM of colums { 1 to " << HowManyColsToCalculate << " } is : " << sum;
                    }

                    return 1;
                }
            }
 
            namespace LongINT
            {
                bool Specific(vector <vector <long>> vVector, vector <unsigned short> WhatColsToCalculate, long &sum , bool PrintResult = false, bool HandleCoreDumped = false)
                {
                    if (vVector.size() == 0 && vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector.size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }

                    if (HandleCoreDumped)
                    {
                        for (short f = 0; f < WhatColsToCalculate.size(); f++)
                        {
                            if (WhatColsToCalculate[f] > vVector[0].size())
                            {
                                cout << "ERROR : YOU CANNOT PUT COLS THAT IS NOT INCLUDED IN THE VECTOR\n";
                                return false;
                            }
                        }
                    }

                    sum = 0;

                    for (short i = 0; i < vVector.size(); i++)
                    {
                        for (short j = 0; j < WhatColsToCalculate.size(); j++)
                        {
                            sum += vVector[i][WhatColsToCalculate[j]-1];
                        }
                    }

                    if (PrintResult)
                    {
                        string ResultSTRING;

                        if (WhatColsToCalculate.size() == 1)
                            ResultSTRING = "The SUM of column { ";
                        else
                            ResultSTRING = "The SUM of colums { ";

                        for (short x = 0; x < WhatColsToCalculate.size(); x++)
                        {
                            ResultSTRING += to_string(WhatColsToCalculate[x]) + " , ";
                        }
                        ResultSTRING.erase(ResultSTRING.length() - 2);
                        ResultSTRING += ("} is : " + to_string(sum));
                        cout << ResultSTRING;
                    }

                    return 1;
                }

                bool To(vector <vector <long>> vVector, unsigned short HowManyColsToCalculate, long &sum , bool PrintResult = false, bool HandleCoreDumped = false)
                {

                    if (vVector.size() == 0 && vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector.size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }

                    if (HandleCoreDumped)
                    {
                            if (HowManyColsToCalculate > vVector.size())
                            {
                                cout << "ERROR : YOU CANNOT PUT NUMBER OF COLS THAT IS NOT INCLUDED IN THE VECTOR\n";
                                return false;
                            }
                    }

                    sum = 0;

                    for (short i = 0; i < vVector.size(); i++)
                    {
                        for (short j = 0; j < HowManyColsToCalculate; j++)
                        {
                             sum += vVector[i][j];
                        }
                    }

                    if (PrintResult == true)
                    {
                        if (HowManyColsToCalculate == 1)
                            cout << "The SUM of column {1} is : " << sum;
                        else
                            cout << "The SUM of colums { 1 to " << HowManyColsToCalculate << " } is : " << sum;
                    }

                    return 1;
                }
            }

            namespace Float
            {
                bool Specific(vector <vector <float>> vVector, vector <unsigned short> WhatColsToCalculate, float &sum , bool PrintResult = false, bool HandleCoreDumped = false)
                {
                    if (vVector.size() == 0 && vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector.size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }

                    if (HandleCoreDumped)
                    {
                        for (short f = 0; f < WhatColsToCalculate.size(); f++)
                        {
                            if (WhatColsToCalculate[f] > vVector[0].size())
                            {
                                cout << "ERROR : YOU CANNOT PUT COLS THAT IS NOT INCLUDED IN THE VECTOR\n";
                                return false;
                            }
                        }
                    }

                    sum = 0;

                    for (short i = 0; i < vVector.size(); i++)
                    {
                        for (short j = 0; j < WhatColsToCalculate.size(); j++)
                        {
                            sum += vVector[i][WhatColsToCalculate[j]-1];
                        }
                    }

                    if (PrintResult)
                    {
                        string ResultSTRING;

                        if (WhatColsToCalculate.size() == 1)
                            ResultSTRING = "The SUM of column { ";
                        else
                            ResultSTRING = "The SUM of colums { ";

                        for (short x = 0; x < WhatColsToCalculate.size(); x++)
                        {
                            ResultSTRING += to_string(WhatColsToCalculate[x]) + " , ";
                        }
                        ResultSTRING.erase(ResultSTRING.length() - 2);
                        ResultSTRING += ("} is : " + to_string(sum));
                        cout << ResultSTRING;
                    }

                    return 1;
                }

                bool To(vector <vector <float>> vVector, unsigned short HowManyColsToCalculate, float &sum , bool PrintResult = false, bool HandleCoreDumped = false)
                {

                    if (vVector.size() == 0 && vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector.size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }

                    if (HandleCoreDumped)
                    {
                            if (HowManyColsToCalculate > vVector.size())
                            {
                                cout << "ERROR : YOU CANNOT PUT NUMBER OF COLS THAT IS NOT INCLUDED IN THE VECTOR\n";
                                return false;
                            }
                    }

                    sum = 0;

                    for (short i = 0; i < vVector.size(); i++)
                    {
                        for (short j = 0; j < HowManyColsToCalculate; j++)
                        {
                             sum += vVector[i][j];
                        }
                    }

                    if (PrintResult == true)
                    {
                        if (HowManyColsToCalculate == 1)
                            cout << "The SUM of column {1} is : " << sum;
                        else
                            cout << "The SUM of colums { 1 to " << HowManyColsToCalculate << " } is : " << sum;
                    }

                    return 1;
                }
            }

            namespace Double
            {
                bool Specific(vector <vector <double>> vVector, vector <unsigned short> WhatColsToCalculate, double &sum , bool PrintResult = false, bool HandleCoreDumped = false)
                {
                    if (vVector.size() == 0 && vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector.size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }

                    if (HandleCoreDumped)
                    {
                        for (short f = 0; f < WhatColsToCalculate.size(); f++)
                        {
                            if (WhatColsToCalculate[f] > vVector[0].size())
                            {
                                cout << "ERROR : YOU CANNOT PUT COLS THAT IS NOT INCLUDED IN THE VECTOR\n";
                                return false;
                            }
                        }
                    }

                    sum = 0;

                    for (short i = 0; i < vVector.size(); i++)
                    {
                        for (short j = 0; j < WhatColsToCalculate.size(); j++)
                        {
                            sum += vVector[i][WhatColsToCalculate[j]-1];
                        }
                    }

                    if (PrintResult)
                    {
                        string ResultSTRING;

                        if (WhatColsToCalculate.size() == 1)
                            ResultSTRING = "The SUM of column { ";
                        else
                            ResultSTRING = "The SUM of colums { ";

                        for (short x = 0; x < WhatColsToCalculate.size(); x++)
                        {
                            ResultSTRING += to_string(WhatColsToCalculate[x]) + " , ";
                        }
                        ResultSTRING.erase(ResultSTRING.length() - 2);
                        ResultSTRING += ("} is : " + to_string(sum));
                        cout << ResultSTRING;
                    }

                    return 1;
                }

                bool To(vector <vector <double>> vVector, unsigned short HowManyColsToCalculate, double &sum , bool PrintResult = false, bool HandleCoreDumped = false)
                {

                    if (vVector.size() == 0 && vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector.size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }

                    if (HandleCoreDumped)
                    {
                            if (HowManyColsToCalculate > vVector.size())
                            {
                                cout << "ERROR : YOU CANNOT PUT NUMBER OF COLS THAT IS NOT INCLUDED IN THE VECTOR\n";
                                return false;
                            }
                    }

                    sum = 0;

                    for (short i = 0; i < vVector.size(); i++)
                    {
                        for (short j = 0; j < HowManyColsToCalculate; j++)
                        {
                             sum += vVector[i][j];
                        }
                    }

                    if (PrintResult == true)
                    {
                        if (HowManyColsToCalculate == 1)
                            cout << "The SUM of column {1} is : " << sum;
                        else
                            cout << "The SUM of colums { 1 to " << HowManyColsToCalculate << " } is : " << sum;
                    }

                    return 1;
                }
            }

            namespace LongDouble
            {
                bool Specific(vector <vector <long double>> vVector, vector <unsigned short> WhatColsToCalculate, long double &sum , bool PrintResult = false, bool HandleCoreDumped = false)
                {
                    if (vVector.size() == 0 && vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector.size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }

                    if (HandleCoreDumped)
                    {
                        for (short f = 0; f < WhatColsToCalculate.size(); f++)
                        {
                            if (WhatColsToCalculate[f] > vVector[0].size())
                            {
                                cout << "ERROR : YOU CANNOT PUT COLS THAT IS NOT INCLUDED IN THE VECTOR\n";
                                return false;
                            }
                        }
                    }

                    sum = 0;

                    for (short i = 0; i < vVector.size(); i++)
                    {
                        for (short j = 0; j < WhatColsToCalculate.size(); j++)
                        {
                            sum += vVector[i][WhatColsToCalculate[j]-1];
                        }
                    }

                    if (PrintResult)
                    {
                        string ResultSTRING;

                        if (WhatColsToCalculate.size() == 1)
                            ResultSTRING = "The SUM of column { ";
                        else
                            ResultSTRING = "The SUM of colums { ";

                        for (short x = 0; x < WhatColsToCalculate.size(); x++)
                        {
                            ResultSTRING += to_string(WhatColsToCalculate[x]) + " , ";
                        }
                        ResultSTRING.erase(ResultSTRING.length() - 2);
                        ResultSTRING += ("} is : " + to_string(sum));
                        cout << ResultSTRING;
                    }

                    return 1;
                }

                bool To(vector <vector <long double>> vVector, unsigned short HowManyColsToCalculate, long double &sum , bool PrintResult = false, bool HandleCoreDumped = false)
                {

                    if (vVector.size() == 0 && vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector.size() == 0)
                    {
                        cout << "ERROR, VECTOR ROWS CANNOT BE EMPTY!\n";
                        return false;
                    }
                    else if (vVector[0].size() == 0)
                    {
                        cout << "ERROR, VECTOR COLS CANNOT BE EMPTY!\n";
                        return false;
                    }

                    if (HandleCoreDumped)
                    {
                            if (HowManyColsToCalculate > vVector.size())
                            {
                                cout << "ERROR : YOU CANNOT PUT NUMBER OF COLS THAT IS NOT INCLUDED IN THE VECTOR\n";
                                return false;
                            }
                    }

                    sum = 0;

                    for (short i = 0; i < vVector.size(); i++)
                    {
                        for (short j = 0; j < HowManyColsToCalculate; j++)
                        {
                             sum += vVector[i][j];
                        }
                    }

                    if (PrintResult == true)
                    {
                        if (HowManyColsToCalculate == 1)
                            cout << "The SUM of column {1} is : " << sum;
                        else
                            cout << "The SUM of colums { 1 to " << HowManyColsToCalculate << " } is : " << sum;
                    }

                    return 1;
                }
            }

        }
    }
}

