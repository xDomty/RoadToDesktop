#pragma once
#include "../../include/Problems/Problem8.hpp"

namespace Problem8
{
	namespace MrSolution
	{
		int RandomNumber(int From, int To)
		{
			//Function to generate a random number
			int randNum = rand() % (To - From + 1) + From;
			return randNum;
		}
		void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short
			Cols)
		{
			for (short i = 0; i < Rows; i++)
			{
				for (short j = 0; j < Cols; j++)
				{
					arr[i][j] = RandomNumber(1, 10);
				}
			}
		}
		void PrintMatrix(int arr[3][3], short Rows, short Cols)
		{
			for (short i = 0; i < Rows; i++)
			{
				for (short j = 0; j < Cols; j++)
				{
					printf(" %0*d ", 2, arr[i][j]);
					//cout << setw(3) << arr[i][j] << " ";
				}
				cout << "\n";
			}
		}
		void MultiplyMatrix(int Matrix1[3][3], int Matrix2[3][3],
			int MatrixResults[3][3], short Rows, short Cols)
		{
			for (short i = 0; i < Rows; i++)
			{
				for (short j = 0; j < Cols; j++)
				{
					MatrixResults[i][j] = Matrix1[i][j] *
						Matrix2[i][j];
				}
			}
		}
		void main()
		{
			int Matrix1[3][3], Matrix2[3][3], MatrixResults[3][3];
			FillMatrixWithRandomNumbers(Matrix1, 3, 3);
			cout << "\nMatrix1:\n";
			PrintMatrix(Matrix1, 3, 3);
			FillMatrixWithRandomNumbers(Matrix2, 3, 3);
			cout << "\nMatrix2:\n";
			PrintMatrix(Matrix2, 3, 3);
			MultiplyMatrix(Matrix1, Matrix2, MatrixResults, 3, 3);
			cout << "\nResults:\n";
			PrintMatrix(MatrixResults, 3, 3);
		}
	}

	namespace MySolution
	{
		void main()
		{
			vector <vector<short>> MatrixVector1;
			vector <vector<short>> MatrixVector2;
			
			Random::Numbers::FillVector2D<short>(MatrixVector1, 3, 3, 1, 10);
			Random::Numbers::FillVector2D<short>(MatrixVector2, 3, 3, 1, 10);

			vector <vector<short>> MatrixVector3 = OPERATIONS::_2DVectors::Vector2dMultiplyAnotherVector2dFor3rdVector2d::TheFunction(MatrixVector1, MatrixVector2, 3, 3);


			Print::Print2DVectorAsMatrix("Matrix1: \n", MatrixVector1, "", false, 3, 3);
			cout << endl;
			Print::Print2DVectorAsMatrix("Matrix2: \n", MatrixVector2, "", false, 3, 3);
			cout << endl << endl;
			Print::Print2DVectorAsMatrix("Result: \n", MatrixVector3, "", false, 3, 3);
			cout << endl << endl;
		}
	}
}