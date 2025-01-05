#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <sstream>
using namespace std;

namespace Print
{
	void PrintArrayNumbers(int* arr, int ArrayLength, int FormatOfArray = 1, string message = "", string messagePart2 = "", string TheMeterOfResult = "")
	{
		cout << "_________________________________\n\n";
		for (int i = 0; i < ArrayLength; i++)
		{
			cout << message << " [" << i + 1 << "] " << messagePart2 << " : ";
			printf("%0*d", FormatOfArray, arr[i]);
			cout << ' ' << TheMeterOfResult << endl;
		}
		cout << "_________________________________\n";
	}

	void PrintFile(string FilePath)
	{
		fstream NewFile;
		NewFile.open(FilePath, ios::in); //READ MODE
		if (NewFile.is_open())
		{
			string line;

			while (getline(NewFile, line))
			{
				cout << line << endl;
			}

			NewFile.close();
		}

	}

	// WANT UPGRADEEEEEEEEEEEEEEEEEEEEEEEEE


	void PrintVector(string message, vector <string> vVector, bool PrintNumOfLoop)
	{
		if (PrintNumOfLoop == true)
		{
			int counter = 0;
			for (string Line : vVector)
			{
				counter++;
				cout << message << " [" << counter << "] : ";
				cout << Line << endl;
			}
		}
		else
		{
			for (string Line : vVector)
			{
				cout << message;
				cout << Line << endl;
			}

		}
	}
    
    void PrintVector(string message, vector <short> vVector, bool PrintNumOfLoop)
	{
		if (PrintNumOfLoop = true)
		{
			int counter = 0;
			for (int i : vVector)
			{
				counter++;
				cout << message << " [" << counter << "] : ";
				cout << i << endl;
			}
		}
		else
		{
			for (int i : vVector)
			{
				cout << message << " : ";
				cout << i << endl;
			}

		}

	}

	void PrintVector(string message, vector <int> vVector, bool PrintNumOfLoop)
	{
		if (PrintNumOfLoop = true)
		{
			int counter = 0;
			for (int i : vVector)
			{
				counter++;
				cout << message << " [" << counter << "] : ";
				cout << i << endl;
			}
		}
		else
		{
			for (int i : vVector)
			{
				cout << message << " : ";
				cout << i << endl;
			}

		}

	}

	void PrintVector(string message, vector <double> vVector, bool PrintNumOfLoop)
	{
		if (PrintNumOfLoop = 1)
		{
			int counter = 0;
			for (double Line : vVector)
			{
				counter++;
				cout << message << " [" << counter << "] : ";
				cout << Line << endl;
			}
		}
		else
		{
			for (double Line : vVector)
			{
				cout << message << " : ";
				cout << Line << endl;
			}

		}
	}

	void PrintVector(string message, vector <float> vVector, bool PrintNumOfLoop)
	{
		if (PrintNumOfLoop = 1)
		{
			int counter = 0;
			for (float i : vVector)
			{
				counter++;
				cout << message << " [" << counter << "] : ";
				cout << i << endl;
			}
		}
		else
		{
			for (float i : vVector)
			{
				cout << message << " : ";
				cout << i << endl;
			}

		}

	}

	namespace Vector2D_AsMatrix
	{
       		namespace VectorType
       		{
       			
                 bool ShortInteger(const string message, const vector<vector<short>> vVector, string TheLocationOfTheMatrix,bool PrintTopAndBottomBorder,short NumbersOfRowsToPrint = -1, short NumbersOfColsToPrint = -1) 
                 {
                      // Check if the matrix is empty Or The numbers of rows and cols are less than -1 (-1 FOR PRINTING ALL ROWS BTW)
                      if ((vVector.empty() || vVector[0].empty()) && (NumbersOfRowsToPrint < -1 || NumbersOfColsToPrint < -1)) 
                      {
                          cout << "ERROR : THE VECTOR ROWS OR COLS CANNOT BE EMPTY\n";
                          cout << "ERROR : THE ROWS OR COLS CANNOT BE LESS THAN -1 (-1 FOR PRINTING ALL ROWS BTW)\n";
                          return false;
                      }
                      else if (NumbersOfRowsToPrint < -1 || NumbersOfColsToPrint < -1)
                      {
                          cout << "ERROR : THE ROWS OR COLS CANNOT BE LESS THAN -1 (-1 FOR PRINTING ALL ROWS BTW)\n";
                          return false;
                      }
                      else if ((vVector.empty() || vVector[0].empty()))
                      {
                          cout << "ERROR : THE VECTOR ROWS OR COLS CANNOT BE EMPTY\n";
                          return false;
                      }

                      // If no row limit is given, print all rows
                      if (NumbersOfRowsToPrint == -1) {
                          NumbersOfRowsToPrint = vVector.size();
                      }
                  
                      // If no column limit is given, print all columns
                      if (NumbersOfColsToPrint == -1) {
                          NumbersOfColsToPrint = vVector[0].size();
                      }
                      
                      // Output the message
                      cout << message;
                  
                      // Determine the maximum width needed for formatting numbers
                      size_t maxNumWidth = 0;
                      for (short i = 0; i < NumbersOfRowsToPrint; ++i) {
                          for (short j = 0; j < NumbersOfColsToPrint; ++j) {
                              maxNumWidth = max(maxNumWidth, to_string(vVector[i][j]).length());
                          }
                      }
                  
                      // Prepare rows as strings with properly formatted numbers
                      vector<string> formattedRows;
                      stringstream ss;
                      for (short i = 0; i < NumbersOfRowsToPrint; ++i) {
                          ss.str("");
                          ss.clear();
                          for (short j = 0; j < NumbersOfColsToPrint; ++j) {
                              ss << setw(maxNumWidth) << setfill('0') << vVector[i][j] << "  |  ";
                          }
                          formattedRows.push_back(ss.str());
                      }
                  
                      // Determine the maximum row width for the border
                      size_t maxRowWidth = 0;
                      for (const auto& row : formattedRows) {
                          maxRowWidth = max(maxRowWidth, row.length());
                      }
                  
                      // Print the top border
                      if (PrintTopAndBottomBorder == true)
                      {
                        cout << '\n' << TheLocationOfTheMatrix;
                        cout << string(maxRowWidth, '_') << "\n\n";
                      }
                      
                  
                      // Print each row
                      for (const auto& row : formattedRows) {
                          cout << TheLocationOfTheMatrix << "|  " << row << "\n";
                      }
                  
                      // Print the bottom border
                      if (PrintTopAndBottomBorder == true)
                      {
                        cout << TheLocationOfTheMatrix;
                        cout << string(maxRowWidth, '_') << "\n\n";
                      }
                      
                  
                      return true;
                 }
		
		         ////////////////////////////////////////////////////////
		         
                 bool Integer(const string message, const vector<vector<int>> vVector, string TheLocationOfTheMatrix,bool PrintTopAndBottomBorder,short NumbersOfRowsToPrint = -1, short NumbersOfColsToPrint = -1) 
                 {
                      // Check if the matrix is empty Or The numbers of rows and cols are less than -1 (-1 FOR PRINTING ALL ROWS BTW)
                      if ((vVector.empty() || vVector[0].empty()) && (NumbersOfRowsToPrint < -1 || NumbersOfColsToPrint < -1)) 
                      {
                          cout << "ERROR : THE VECTOR ROWS OR COLS CANNOT BE EMPTY\n";
                          cout << "ERROR : THE ROWS OR COLS CANNOT BE LESS THAN -1 (-1 FOR PRINTING ALL ROWS BTW)\n";
                          return false;
                      }
                      else if (NumbersOfRowsToPrint < -1 || NumbersOfColsToPrint < -1)
                      {
                          cout << "ERROR : THE ROWS OR COLS CANNOT BE LESS THAN -1 (-1 FOR PRINTING ALL ROWS BTW)\n";
                          return false;
                      }
                      else if ((vVector.empty() || vVector[0].empty()))
                      {
                          cout << "ERROR : THE VECTOR ROWS OR COLS CANNOT BE EMPTY\n";
                          return false;
                      }

                      // If no row limit is given, print all rows
                      if (NumbersOfRowsToPrint == -1) {
                          NumbersOfRowsToPrint = vVector.size();
                      }
                  
                      // If no column limit is given, print all columns
                      if (NumbersOfColsToPrint == -1) {
                          NumbersOfColsToPrint = vVector[0].size();
                      }
                      
                      // Output the message
                      cout << message;
                  
                      // Determine the maximum width needed for formatting numbers
                      size_t maxNumWidth = 0;
                      for (short i = 0; i < NumbersOfRowsToPrint; ++i) {
                          for (short j = 0; j < NumbersOfColsToPrint; ++j) {
                              maxNumWidth = max(maxNumWidth, to_string(vVector[i][j]).length());
                          }
                      }
                  
                      // Prepare rows as strings with properly formatted numbers
                      vector<string> formattedRows;
                      stringstream ss;
                      for (short i = 0; i < NumbersOfRowsToPrint; ++i) {
                          ss.str("");
                          ss.clear();
                          for (short j = 0; j < NumbersOfColsToPrint; ++j) {
                              ss << setw(maxNumWidth) << setfill('0') << vVector[i][j] << "  |  ";
                          }
                          formattedRows.push_back(ss.str());
                      }
                  
                      // Determine the maximum row width for the border
                      size_t maxRowWidth = 0;
                      for (const auto& row : formattedRows) {
                          maxRowWidth = max(maxRowWidth, row.length());
                      }
                  
                      // Print the top border
                      if (PrintTopAndBottomBorder == true)
                      {
                        cout << '\n' << TheLocationOfTheMatrix;
                        cout << string(maxRowWidth, '_') << "\n\n";
                      }
                      
                  
                      // Print each row
                      for (const auto& row : formattedRows) {
                          cout << TheLocationOfTheMatrix << "|  " << row << "\n";
                      }
                  
                      // Print the bottom border
                      if (PrintTopAndBottomBorder == true)
                      {
                        cout << TheLocationOfTheMatrix;
                        cout << string(maxRowWidth, '_') << "\n\n";
                      }
                      
                  
                      return true;
                 }
		
                 ////////////////////////////////////////////////////////

                 bool LongIntegar(const string message, const vector<vector<long>> vVector, string TheLocationOfTheMatrix,bool PrintTopAndBottomBorder,short NumbersOfRowsToPrint = -1, short NumbersOfColsToPrint = -1) 
                 {
                      // Check if the matrix is empty Or The numbers of rows and cols are less than -1 (-1 FOR PRINTING ALL ROWS BTW)
                      if ((vVector.empty() || vVector[0].empty()) && (NumbersOfRowsToPrint < -1 || NumbersOfColsToPrint < -1)) 
                      {
                          cout << "ERROR : THE VECTOR ROWS OR COLS CANNOT BE EMPTY\n";
                          cout << "ERROR : THE ROWS OR COLS CANNOT BE LESS THAN -1 (-1 FOR PRINTING ALL ROWS BTW)\n";
                          return false;
                      }
                      else if (NumbersOfRowsToPrint < -1 || NumbersOfColsToPrint < -1)
                      {
                          cout << "ERROR : THE ROWS OR COLS CANNOT BE LESS THAN -1 (-1 FOR PRINTING ALL ROWS BTW)\n";
                          return false;
                      }
                      else if ((vVector.empty() || vVector[0].empty()))
                      {
                          cout << "ERROR : THE VECTOR ROWS OR COLS CANNOT BE EMPTY\n";
                          return false;
                      }

                      // If no row limit is given, print all rows
                      if (NumbersOfRowsToPrint == -1) {
                          NumbersOfRowsToPrint = vVector.size();
                      }
                  
                      // If no column limit is given, print all columns
                      if (NumbersOfColsToPrint == -1) {
                          NumbersOfColsToPrint = vVector[0].size();
                      }
                      
                      // Output the message
                      cout << message;
                  
                      // Determine the maximum width needed for formatting numbers
                      size_t maxNumWidth = 0;
                      for (short i = 0; i < NumbersOfRowsToPrint; ++i) {
                          for (short j = 0; j < NumbersOfColsToPrint; ++j) {
                              maxNumWidth = max(maxNumWidth, to_string(vVector[i][j]).length());
                          }
                      }
                  
                      // Prepare rows as strings with properly formatted numbers
                      vector<string> formattedRows;
                      stringstream ss;
                      for (short i = 0; i < NumbersOfRowsToPrint; ++i) {
                          ss.str("");
                          ss.clear();
                          for (short j = 0; j < NumbersOfColsToPrint; ++j) {
                              ss << setw(maxNumWidth) << setfill('0') << vVector[i][j] << "  |  ";
                          }
                          formattedRows.push_back(ss.str());
                      }
                  
                      // Determine the maximum row width for the border
                      size_t maxRowWidth = 0;
                      for (const auto& row : formattedRows) {
                          maxRowWidth = max(maxRowWidth, row.length());
                      }
                  
                      // Print the top border
                      if (PrintTopAndBottomBorder == true)
                      {
                        cout << '\n' << TheLocationOfTheMatrix;
                        cout << string(maxRowWidth, '_') << "\n\n";
                      }
                      
                  
                      // Print each row
                      for (const auto& row : formattedRows) {
                          cout << TheLocationOfTheMatrix << "|  " << row << "\n";
                      }
                  
                      // Print the bottom border
                      if (PrintTopAndBottomBorder == true)
                      {
                        cout << TheLocationOfTheMatrix;
                        cout << string(maxRowWidth, '_') << "\n\n";
                      }
                      
                  
                      return true;
                 }
		
				 ////////////////////////////////////////////////////////

                 bool Float(const string message, const vector<vector<float>> vVector, string TheLocationOfTheMatrix,bool PrintTopAndBottomBorder,short NumbersOfRowsToPrint = -1, short NumbersOfColsToPrint = -1) 
                 {
                      // Check if the matrix is empty Or The numbers of rows and cols are less than -1 (-1 FOR PRINTING ALL ROWS BTW)
                      if ((vVector.empty() || vVector[0].empty()) && (NumbersOfRowsToPrint < -1 || NumbersOfColsToPrint < -1)) 
                      {
                          cout << "ERROR : THE VECTOR ROWS OR COLS CANNOT BE EMPTY\n";
                          cout << "ERROR : THE ROWS OR COLS CANNOT BE LESS THAN -1 (-1 FOR PRINTING ALL ROWS BTW)\n";
                          return false;
                      }
                      else if (NumbersOfRowsToPrint < -1 || NumbersOfColsToPrint < -1)
                      {
                          cout << "ERROR : THE ROWS OR COLS CANNOT BE LESS THAN -1 (-1 FOR PRINTING ALL ROWS BTW)\n";
                          return false;
                      }
                      else if ((vVector.empty() || vVector[0].empty()))
                      {
                          cout << "ERROR : THE VECTOR ROWS OR COLS CANNOT BE EMPTY\n";
                          return false;
                      }

                      // If no row limit is given, print all rows
                      if (NumbersOfRowsToPrint == -1) {
                          NumbersOfRowsToPrint = vVector.size();
                      }
                  
                      // If no column limit is given, print all columns
                      if (NumbersOfColsToPrint == -1) {
                          NumbersOfColsToPrint = vVector[0].size();
                      }
                      
                      // Output the message
                      cout << message;
                  
                      // Determine the maximum width needed for formatting numbers
                      size_t maxNumWidth = 0;
                      for (short i = 0; i < NumbersOfRowsToPrint; ++i) {
                          for (short j = 0; j < NumbersOfColsToPrint; ++j) {
                              maxNumWidth = max(maxNumWidth, to_string(vVector[i][j]).length());
                          }
                      }
                  
                      // Prepare rows as strings with properly formatted numbers
                      vector<string> formattedRows;
                      stringstream ss;
                      for (short i = 0; i < NumbersOfRowsToPrint; ++i) {
                          ss.str("");
                          ss.clear();
                          for (short j = 0; j < NumbersOfColsToPrint; ++j) {
                              ss << setw(maxNumWidth) << setfill('0') << vVector[i][j] << "  |  ";
                          }
                          formattedRows.push_back(ss.str());
                      }
                  
                      // Determine the maximum row width for the border
                      size_t maxRowWidth = 0;
                      for (const auto& row : formattedRows) {
                          maxRowWidth = max(maxRowWidth, row.length());
                      }
                  
                      // Print the top border
                      if (PrintTopAndBottomBorder == true)
                      {
                        cout << '\n' << TheLocationOfTheMatrix;
                        cout << string(maxRowWidth, '_') << "\n\n";
                      }
                      
                  
                      // Print each row
                      for (const auto& row : formattedRows) {
                          cout << TheLocationOfTheMatrix << "|  " << row << "\n";
                      }
                  
                      // Print the bottom border
                      if (PrintTopAndBottomBorder == true)
                      {
                        cout << TheLocationOfTheMatrix;
                        cout << string(maxRowWidth, '_') << "\n\n";
                      }
                      
                  
                      return true;
                 }
		
		         ////////////////////////////////////////////////////////

                 bool Double(const string message, const vector<vector<double>> vVector, string TheLocationOfTheMatrix,bool PrintTopAndBottomBorder,short NumbersOfRowsToPrint = -1, short NumbersOfColsToPrint = -1) 
                 {
                      // Check if the matrix is empty Or The numbers of rows and cols are less than -1 (-1 FOR PRINTING ALL ROWS BTW)
                      if ((vVector.empty() || vVector[0].empty()) && (NumbersOfRowsToPrint < -1 || NumbersOfColsToPrint < -1)) 
                      {
                          cout << "ERROR : THE VECTOR ROWS OR COLS CANNOT BE EMPTY\n";
                          cout << "ERROR : THE ROWS OR COLS CANNOT BE LESS THAN -1 (-1 FOR PRINTING ALL ROWS BTW)\n";
                          return false;
                      }
                      else if (NumbersOfRowsToPrint < -1 || NumbersOfColsToPrint < -1)
                      {
                          cout << "ERROR : THE ROWS OR COLS CANNOT BE LESS THAN -1 (-1 FOR PRINTING ALL ROWS BTW)\n";
                          return false;
                      }
                      else if ((vVector.empty() || vVector[0].empty()))
                      {
                          cout << "ERROR : THE VECTOR ROWS OR COLS CANNOT BE EMPTY\n";
                          return false;
                      }

                      // If no row limit is given, print all rows
                      if (NumbersOfRowsToPrint == -1) {
                          NumbersOfRowsToPrint = vVector.size();
                      }
                  
                      // If no column limit is given, print all columns
                      if (NumbersOfColsToPrint == -1) {
                          NumbersOfColsToPrint = vVector[0].size();
                      }
                      
                      // Output the message
                      cout << message;
                  
                      // Determine the maximum width needed for formatting numbers
                      size_t maxNumWidth = 0;
                      for (short i = 0; i < NumbersOfRowsToPrint; ++i) {
                          for (short j = 0; j < NumbersOfColsToPrint; ++j) {
                              maxNumWidth = max(maxNumWidth, to_string(vVector[i][j]).length());
                          }
                      }
                  
                      // Prepare rows as strings with properly formatted numbers
                      vector<string> formattedRows;
                      stringstream ss;
                      for (short i = 0; i < NumbersOfRowsToPrint; ++i) {
                          ss.str("");
                          ss.clear();
                          for (short j = 0; j < NumbersOfColsToPrint; ++j) {
                              ss << setw(maxNumWidth) << setfill('0') << vVector[i][j] << "  |  ";
                          }
                          formattedRows.push_back(ss.str());
                      }
                  
                      // Determine the maximum row width for the border
                      size_t maxRowWidth = 0;
                      for (const auto& row : formattedRows) {
                          maxRowWidth = max(maxRowWidth, row.length());
                      }
                  
                      // Print the top border
                      if (PrintTopAndBottomBorder == true)
                      {
                        cout << '\n' << TheLocationOfTheMatrix;
                        cout << string(maxRowWidth, '_') << "\n\n";
                      }
                      
                  
                      // Print each row
                      for (const auto& row : formattedRows) {
                          cout << TheLocationOfTheMatrix << "|  " << row << "\n";
                      }
                  
                      // Print the bottom border
                      if (PrintTopAndBottomBorder == true)
                      {
                        cout << TheLocationOfTheMatrix;
                        cout << string(maxRowWidth, '_') << "\n\n";
                      }
                      
                  
                      return true;
                 }
		
				 ////////////////////////////////////////////////////////

                 bool LongDouble(const string message, const vector<vector<long double>> vVector, string TheLocationOfTheMatrix,bool PrintTopAndBottomBorder,short NumbersOfRowsToPrint = -1, short NumbersOfColsToPrint = -1) 
                 {
                      // Check if the matrix is empty Or The numbers of rows and cols are less than -1 (-1 FOR PRINTING ALL ROWS BTW)
                      if ((vVector.empty() || vVector[0].empty()) && (NumbersOfRowsToPrint < -1 || NumbersOfColsToPrint < -1)) 
                      {
                          cout << "ERROR : THE VECTOR ROWS OR COLS CANNOT BE EMPTY\n";
                          cout << "ERROR : THE ROWS OR COLS CANNOT BE LESS THAN -1 (-1 FOR PRINTING ALL ROWS BTW)\n";
                          return false;
                      }
                      else if (NumbersOfRowsToPrint < -1 || NumbersOfColsToPrint < -1)
                      {
                          cout << "ERROR : THE ROWS OR COLS CANNOT BE LESS THAN -1 (-1 FOR PRINTING ALL ROWS BTW)\n";
                          return false;
                      }
                      else if ((vVector.empty() || vVector[0].empty()))
                      {
                          cout << "ERROR : THE VECTOR ROWS OR COLS CANNOT BE EMPTY\n";
                          return false;
                      }

                      // If no row limit is given, print all rows
                      if (NumbersOfRowsToPrint == -1) {
                          NumbersOfRowsToPrint = vVector.size();
                      }
                  
                      // If no column limit is given, print all columns
                      if (NumbersOfColsToPrint == -1) {
                          NumbersOfColsToPrint = vVector[0].size();
                      }
                      
                      // Output the message
                      cout << message;
                  
                      // Determine the maximum width needed for formatting numbers
                      size_t maxNumWidth = 0;
                      for (short i = 0; i < NumbersOfRowsToPrint; ++i) {
                          for (short j = 0; j < NumbersOfColsToPrint; ++j) {
                              maxNumWidth = max(maxNumWidth, to_string(vVector[i][j]).length());
                          }
                      }
                  
                      // Prepare rows as strings with properly formatted numbers
                      vector<string> formattedRows;
                      stringstream ss;
                      for (short i = 0; i < NumbersOfRowsToPrint; ++i) {
                          ss.str("");
                          ss.clear();
                          for (short j = 0; j < NumbersOfColsToPrint; ++j) {
                              ss << setw(maxNumWidth) << setfill('0') << vVector[i][j] << "  |  ";
                          }
                          formattedRows.push_back(ss.str());
                      }
                  
                      // Determine the maximum row width for the border
                      size_t maxRowWidth = 0;
                      for (const auto& row : formattedRows) {
                          maxRowWidth = max(maxRowWidth, row.length());
                      }
                  
                      // Print the top border
                      if (PrintTopAndBottomBorder == true)
                      {
                        cout << '\n' << TheLocationOfTheMatrix;
                        cout << string(maxRowWidth, '_') << "\n\n";
                      }
                      
                  
                      // Print each row
                      for (const auto& row : formattedRows) {
                          cout << TheLocationOfTheMatrix << "|  " << row << "\n";
                      }
                  
                      // Print the bottom border
                      if (PrintTopAndBottomBorder == true)
                      {
                        cout << TheLocationOfTheMatrix;
                        cout << string(maxRowWidth, '_') << "\n\n";
                      }
                      
                  
                      return true;
                 }
		

		}
	}

	// WANT UPGRADEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE

}
