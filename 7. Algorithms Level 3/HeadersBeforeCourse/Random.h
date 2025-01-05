#pragma once
#include <iostream>
#include <vector>
using namespace std;


namespace Random
{
     namespace Numbers
     {
        namespace OneVariable
        {
           namespace VariableType
           {
               short Short(short From, short To)
                {
                   short randNum = rand() % (To - From + 1) + From; 
                	return randNum;
                }
   
                int Integar(int From, int To) 
                { 
                	//Function to generate a random number
                	int randNum = rand() % (To - From + 1) + From; 
                	return randNum;
                }
   
                long Long(long From, long To)
                {
                   long randNum = rand() % (To - From + 1) + From; 
                	return randNum;
                }
   
                float Float(float From, float To)
                {
                   float randNum = From + static_cast <float> (rand()) / ( static_cast <float> (RAND_MAX/(To-From)));
                   return randNum; 
                }
   
               double Double(double From, double To)
               {
                   double randNum = From + static_cast <double> (rand()) / ( static_cast <double> (RAND_MAX/(To-From)));
                   return randNum;
               }
                
               long double LongDouble(long double From, long double To)
               {
                   long double randNum = From + static_cast <long double> (rand()) / ( static_cast <long double> (RAND_MAX/(To-From)));
                   return randNum;
               }
           }
             



        } 

        ////////////////////////////////////////////

        namespace FillVector2DimensionalArray
        {
            namespace VariableType
            {
                void ShortIntegar(vector <vector<short>> &arr,unsigned short NumberOfRows, unsigned short NumberOfCols,short RandomNumbersFrom,short RandomNumbersTo)
                {
                    
                       for (unsigned short x = 0; x < NumberOfRows; x++)
                       {
                           vector <short> temp; // Think of temp as your rows
                           for (unsigned short y = 0; y < NumberOfCols; y++)
                           {
                            temp.push_back(Random::Numbers::OneVariable::VariableType::Short(RandomNumbersFrom,RandomNumbersTo)); // Think of temp elements as your Cols elements
                           }
                           arr.push_back(temp);
                       }
                }

                void Integar(vector <vector<int>> &arr,unsigned int NumberOfRows, unsigned int NumberOfCols,int RandomNumbersFrom,int RandomNumbersTo)
                {
                       for (unsigned int x = 0; x < NumberOfRows; x++)
                       {
                           vector <int> temp; // Think of temp as your rows
                           for (unsigned int y = 0; y < NumberOfCols; y++)
                           {
                            temp.push_back(Random::Numbers::OneVariable::VariableType::Integar(RandomNumbersFrom,RandomNumbersTo)); // Think of temp elements as your Cols elements
                           }
                           arr.push_back(temp);
                       }
                }

                void LongIntegar(vector <vector<long>> &arr,unsigned long NumberOfRows, unsigned long NumberOfCols,long RandomNumbersFrom,long RandomNumbersTo)
                {
                    
                       for (unsigned long x = 0; x < NumberOfRows; x++)
                       {
                           vector <long> temp; // Think of temp as your rows
                           for (unsigned long y = 0; y < NumberOfCols; y++)
                           {
                            temp.push_back(Random::Numbers::OneVariable::VariableType::Long(RandomNumbersFrom,RandomNumbersTo)); // Think of temp elements as your Cols elements
                           }
                           arr.push_back(temp);
                       }
                }

                void Float(vector <vector<float>> &arr,unsigned long NumberOfRows, unsigned long NumberOfCols,float RandomNumbersFrom,float RandomNumbersTo)
                {
                    
                       for (unsigned long x = 0; x < NumberOfRows; x++)
                       {
                           vector <float> temp; // Think of temp as your rows
                           for (unsigned long y = 0; y < NumberOfCols; y++)
                           {
                            temp.push_back(Random::Numbers::OneVariable::VariableType::Float(RandomNumbersFrom,RandomNumbersTo)); // Think of temp elements as your Cols elements
                           }
                           arr.push_back(temp);
                       }
                }

                void Double(vector <vector<double>> &arr,unsigned long NumberOfRows, unsigned long NumberOfCols,double RandomNumbersFrom,double RandomNumbersTo)
                {
                    
                       for (unsigned long x = 0; x < NumberOfRows; x++)
                       {
                           vector <double> temp; // Think of temp as your rows
                           for (unsigned long y = 0; y < NumberOfCols; y++)
                           {
                            temp.push_back(Random::Numbers::OneVariable::VariableType::Double(RandomNumbersFrom,RandomNumbersTo)); // Think of temp elements as your Cols elements
                           }
                           arr.push_back(temp);
                       }
                }

                void LongDouble(vector <vector<long double>> &arr,unsigned long NumberOfRows, unsigned long NumberOfCols,long double RandomNumbersFrom,long double RandomNumbersTo)
                {
                    
                       for (unsigned long x = 0; x < NumberOfRows; x++)
                       {
                           vector <long double> temp; // Think of temp as your rows
                           for (unsigned long y = 0; y < NumberOfCols; y++)
                           {
                            temp.push_back(Random::Numbers::OneVariable::VariableType::LongDouble(RandomNumbersFrom,RandomNumbersTo)); // Think of temp elements as your Cols elements
                           }
                           arr.push_back(temp);
                       }
                }
            }
        }

        ////////////////////////////////////////////

        namespace VectorVars
        {
            namespace VariablesType
            {
                   void Short(vector <short> &vRandomNumbers,short RandomNumbersFrom, short RandomNumbersTo, unsigned short NumberOfRandoms)
                   {
                       
                       for (short i = 0; i < NumberOfRandoms; i ++)
                       {
                           vRandomNumbers.push_back(Random::Numbers::OneVariable::VariableType::Short(RandomNumbersFrom,RandomNumbersTo));
                       }
                   }    

                   void Integar(vector <int> &vRandomNumbers,int RandomNumbersFrom, int RandomNumbersTo, short NumberOfRandoms)
                   {
                       for (short i = 0; i < NumberOfRandoms; i ++)
                       {
                           vRandomNumbers.push_back(Random::Numbers::OneVariable::VariableType::Integar(RandomNumbersFrom,RandomNumbersTo));
                       }
                   }    

                   void LongIntegar(vector <long> &vRandomNumbers,long RandomNumbersFrom, long RandomNumbersTo, short NumberOfRandoms)
                   {
                       for (short i = 0; i < NumberOfRandoms; i ++)
                       {
                           vRandomNumbers.push_back(Random::Numbers::OneVariable::VariableType::Integar(RandomNumbersFrom,RandomNumbersTo));
                       }
                   }

                   void Float(vector <float> &vRandomNumbers,float RandomNumbersFrom, float RandomNumbersTo, short NumberOfRandoms)
                   {
                       for (short i = 0; i < NumberOfRandoms; i ++)
                       {
                           vRandomNumbers.push_back(Random::Numbers::OneVariable::VariableType::Float(RandomNumbersFrom,RandomNumbersTo));
                       }
                   }

                   void Double(vector <double> &vRandomNumbers,double RandomNumbersFrom, double RandomNumbersTo, short NumberOfRandoms)
                   {
                       for (short i = 0; i < NumberOfRandoms; i ++)
                       {
                           vRandomNumbers.push_back(Random::Numbers::OneVariable::VariableType::Double(RandomNumbersFrom,RandomNumbersTo));
                       }                  
                   }

            }

        }
        
        ///////////////////////////////////////////
        
        namespace VectorVarsWithOperations
        {
            namespace variablesType
            {

              ////////////////////////////////////////////

              namespace Short
              {
                       void add(vector <short> &vRandomNumbers,short RandomNumbersFrom, short RandomNumbersTo, short NumberOfRandoms, int &result)
                       {
                            Random::Numbers::VectorVars::VariablesType::Short(vRandomNumbers,RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
                            result=0;
                            for (short i = 0; i < NumberOfRandoms; i ++)
                            {
                                result += vRandomNumbers[i];
                            }
                       }

                       void substract(vector <short> &vRandomNumbers,short RandomNumbersFrom, short RandomNumbersTo, short NumberOfRandoms, int &result)
                       {
                            Random::Numbers::VectorVars::VariablesType::Short(vRandomNumbers,RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
                            result=0;
                            for (short i = 0; i < NumberOfRandoms; i ++)
                            {
                                result -= vRandomNumbers[i];
                            }
                       }

                       void Multiply(vector <short> &vRandomNumbers,short RandomNumbersFrom, short RandomNumbersTo, short NumberOfRandoms, int &result)
                       {
                            Random::Numbers::VectorVars::VariablesType::Short(vRandomNumbers,RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
                            result=0;
                            for (short i = 0; i < NumberOfRandoms; i ++)
                            {
                                result *= vRandomNumbers[i];
                            }
                       }

                       void Division(vector <short> &vRandomNumbers,short RandomNumbersFrom, short RandomNumbersTo, short NumberOfRandoms, int &result)
                       {
                            Random::Numbers::VectorVars::VariablesType::Short(vRandomNumbers,RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
                            result=0;
                            for (short i = 0; i < NumberOfRandoms; i ++)
                            {
                                result /= vRandomNumbers[i];
                            }
                       }
                       
              }
              
              ///////////////////////////////////////////

              
              namespace Integar
              {
                       void add(vector <int> &vRandomNumbers,int RandomNumbersFrom, int RandomNumbersTo, short NumberOfRandoms, long &result)
                       {
                            Random::Numbers::VectorVars::VariablesType::Integar(vRandomNumbers,RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
                            result=0;
                            for (short i = 0; i < NumberOfRandoms; i ++)
                            {
                                result += vRandomNumbers[i];
                            }
                       }

                       void substract(vector <int> &vRandomNumbers,int RandomNumbersFrom, int RandomNumbersTo, short NumberOfRandoms, long &result)
                       {
                            Random::Numbers::VectorVars::VariablesType::Integar(vRandomNumbers,RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
                            result=0;
                            for (short i = 0; i < NumberOfRandoms; i ++)
                            {
                                result -= vRandomNumbers[i];
                            }
                       }

                       void Multiply(vector <int> &vRandomNumbers,int RandomNumbersFrom, int RandomNumbersTo, short NumberOfRandoms, long &result)
                       {
                            Random::Numbers::VectorVars::VariablesType::Integar(vRandomNumbers,RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
                            result=0;
                            for (short i = 0; i < NumberOfRandoms; i ++)
                            {
                                result *= vRandomNumbers[i];
                            }
                       }

                       void Division(vector <int> &vRandomNumbers,int RandomNumbersFrom, int RandomNumbersTo, short NumberOfRandoms, long &result)
                       {
                            Random::Numbers::VectorVars::VariablesType::Integar(vRandomNumbers,RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
                            result=0;
                            for (short i = 0; i < NumberOfRandoms; i ++)
                            {
                                result /= vRandomNumbers[i];
                            }
                       }
    

              }
              
              ///////////////////////////////////////////

              namespace LongIntegar
              {

                       void add(vector <long> &vRandomNumbers,long RandomNumbersFrom, long RandomNumbersTo, short NumberOfRandoms, float &result)
                       {
                            Random::Numbers::VectorVars::VariablesType::LongIntegar(vRandomNumbers,RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
                            result=0;
                            for (short i = 0; i < NumberOfRandoms; i ++)
                            {
                                result += vRandomNumbers[i];
                            }
                       }

                       void substract(vector <long> &vRandomNumbers,long RandomNumbersFrom, long RandomNumbersTo, short NumberOfRandoms, float &result)
                       {
                            Random::Numbers::VectorVars::VariablesType::LongIntegar(vRandomNumbers,RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
                            result=0;
                            for (short i = 0; i < NumberOfRandoms; i ++)
                            {
                                result -= vRandomNumbers[i];
                            }
                       }

                       void Multiply(vector <long> &vRandomNumbers,long RandomNumbersFrom, long RandomNumbersTo, short NumberOfRandoms, float &result)
                       {
                            Random::Numbers::VectorVars::VariablesType::LongIntegar(vRandomNumbers,RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
                            result=0;
                            for (short i = 0; i < NumberOfRandoms; i ++)
                            {
                                result *= vRandomNumbers[i];
                            }
                       }

                       void Division(vector <long> &vRandomNumbers,long RandomNumbersFrom, float RandomNumbersTo, short NumberOfRandoms, float &result)
                       {
                            Random::Numbers::VectorVars::VariablesType::LongIntegar(vRandomNumbers,RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
                            result=0;
                            for (short i = 0; i < NumberOfRandoms; i ++)
                            {
                                result /= vRandomNumbers[i];
                            }
                       }


              }
              
              ///////////////////////////////////////////

              namespace Float
              {
                       void add(vector <float> &vRandomNumbers,float RandomNumbersFrom, float RandomNumbersTo, short NumberOfRandoms, double &result)
                       {
                            Random::Numbers::VectorVars::VariablesType::Float(vRandomNumbers,RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
                            result=0;
                            for (short i = 0; i < NumberOfRandoms; i ++)
                            {
                                result += vRandomNumbers[i];
                            }
                       }

                       void substract(vector <float> &vRandomNumbers,float RandomNumbersFrom, float RandomNumbersTo, short NumberOfRandoms, double &result)
                       {
                            Random::Numbers::VectorVars::VariablesType::Float(vRandomNumbers,RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
                            result=0;
                            for (short i = 0; i < NumberOfRandoms; i ++)
                            {
                                result -= vRandomNumbers[i];
                            }
                       }

                       void Multiply(vector <float> &vRandomNumbers,float RandomNumbersFrom, float RandomNumbersTo, short NumberOfRandoms, double &result)
                       {
                            Random::Numbers::VectorVars::VariablesType::Float(vRandomNumbers,RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
                            result=0;
                            for (short i = 0; i < NumberOfRandoms; i ++)
                            {
                                result *= vRandomNumbers[i];
                            }
                       }

                       void Division(vector <float> &vRandomNumbers,float RandomNumbersFrom, float RandomNumbersTo, short NumberOfRandoms, double &result)
                       {
                            Random::Numbers::VectorVars::VariablesType::Float(vRandomNumbers,RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
                            result=0;
                            for (short i = 0; i < NumberOfRandoms; i ++)
                            {
                                result /= vRandomNumbers[i];
                            }
                       }
              }
              
              ///////////////////////////////////////////

              namespace Double
              {
                       void add(vector <double> &vRandomNumbers,double RandomNumbersFrom, double RandomNumbersTo, short NumberOfRandoms, long double &result)
                       {
                            Random::Numbers::VectorVars::VariablesType::Double(vRandomNumbers,RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
                            result=0;
                            for (short i = 0; i < NumberOfRandoms; i ++)
                            {
                                result += vRandomNumbers[i];
                            }
                       }

                       void substract(vector <double> &vRandomNumbers,double RandomNumbersFrom, double RandomNumbersTo, short NumberOfRandoms,long double &result)
                       {
                            Random::Numbers::VectorVars::VariablesType::Double(vRandomNumbers,RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
                            result=0;
                            for (short i = 0; i < NumberOfRandoms; i ++)
                            {
                                result -= vRandomNumbers[i];
                            }
                       }

                       void Multiply(vector <double> &vRandomNumbers,double RandomNumbersFrom, double RandomNumbersTo, short NumberOfRandoms, long double &result)
                       {
                            Random::Numbers::VectorVars::VariablesType::Double(vRandomNumbers,RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
                            result=0;
                            for (short i = 0; i < NumberOfRandoms; i ++)
                            {
                                result *= vRandomNumbers[i];
                            }
                       }

                       void Division(vector <double> &vRandomNumbers,double RandomNumbersFrom, double RandomNumbersTo, short NumberOfRandoms, long double &result)
                       {
                            Random::Numbers::VectorVars::VariablesType::Double(vRandomNumbers,RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
                            result=0;
                            for (short i = 0; i < NumberOfRandoms; i ++)
                            {
                                result /= vRandomNumbers[i];
                            }
                       }

              }

              ///////////////////////////////////////////
           }


        }

        
     }
}

namespace Random
{
    namespace Strings
    {
        
    }
}