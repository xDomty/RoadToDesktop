#pragma once
#include <iostream>
#include <string>
#include <optional>
#include <vector>
using namespace std;

namespace OPERATIONS{

// IMPORTANT NOTE TO SUMROWS AND SUMCOLS NAMESPACE --> 
    // YOU CHOOSE SPECIFIC TO SUM SPECIFIC (ROWS OR COLS) FROM YOUR CHOISE FROM A VECTOR INPUT IN FUNCTION REQUIREMENTS
      // YOU CHOOSE TO IF YOU WANT TO SUM (ROWS OR COLS) FROM 1 TO THE ROW YOU WANT
           //ALSO THE DATATYPE YOU CHOOSE IS THE DATATYPE FOR 2D VECTOR AND THE SUM (SOON I WILL ADD ANOTHER OPERATIONS) , AND FOR THE (WhatRowsToCalculate & HowManyRowsToCalculate) ITS ALWAYS UNSIGNED SHORT BECAUSE IT CAN'T BE THAT MUCH
   // MADE WITH LOVE BY : ADAM AMER.

      namespace _2DVectors
      {
          namespace SumRows
          {
             
                      template < typename FunctionType , typename TypeOf2dVector >
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
      
                      template < typename FunctionType , typename TypeOf2dVector >
                      optional <FunctionType> To(vector <vector <TypeOf2dVector>> vVector, unsigned short HowManyRowsToCalculate, bool HandleCoreDumped = true)
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
                                  if (HowManyRowsToCalculate > vVector.size())
                                  {
                                      cout << "ERROR : YOU CANNOT PUT NUMBER OF ROWS THAT IS NOT INCLUDED IN THE VECTOR\n";
                                      return nullopt;
                                  }
                          }
      
                          FunctionType sum = 0;
      
                          for (short i = 0; i < HowManyRowsToCalculate; i++)
                          {
                              for (short j = 0; j < vVector[0].size(); j++)
                              {
                                   sum += vVector[i][j];
                              }
                          }
      
                          return sum;
                      }
      
          }
          
          namespace SumCols
          {
              
                      template < typename FunctionType , typename TypeOf2dVector >
                      optional <FunctionType> Specific(vector <vector <TypeOf2dVector>> vVector, vector <unsigned short> WhatColsToCalculate, bool HandleCoreDumped = true)
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
                              for (short f = 0; f < WhatColsToCalculate.size(); f++)
                              {
                                  if (WhatColsToCalculate[f] > vVector[0].size())
                                  {
                                      cout << "ERROR : YOU CANNOT PUT COLS THAT IS NOT INCLUDED IN THE VECTOR\n";
                                      return nullopt;
                                  }
                              }
                          }
      
                          FunctionType sum = 0;
      
                          for (short i = 0; i < vVector.size(); i++)
                          {
                              for (short j = 0; j < WhatColsToCalculate.size(); j++)
                              {
                                  sum += vVector[i][WhatColsToCalculate[j]-1];
                              }
                          }
      
                          return sum;
                      }
      
                      template < typename FunctionType , typename TypeOf2dVector >
                      optional <FunctionType> To(vector <vector <TypeOf2dVector>> vVector, unsigned short HowManyColsToCalculate, bool HandleCoreDumped = true)
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
                                  if (HowManyColsToCalculate > vVector.size())
                                  {
                                      cout << "ERROR : YOU CANNOT PUT NUMBER OF COLS THAT IS NOT INCLUDED IN THE VECTOR\n";
                                      return nullopt;
                                  }
                          }
      
                          FunctionType sum = 0;
      
                          for (short i = 0; i < vVector.size(); i++)
                          {
                              for (short j = 0; j < HowManyColsToCalculate; j++)
                              {
                                   sum += vVector[i][j];
                              }
                          }
      
                          return sum;
                      
              }
          }
      } 
}

