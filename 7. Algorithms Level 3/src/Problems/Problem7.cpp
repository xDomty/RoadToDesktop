#include "../../include/Problems/Problem7.hpp"

namespace Problem7
{
	namespace MrSolution
	{
		void FillMatrixWithOrderedNumbers(int arr[3][3], short Rows, short Cols)
		{
			short Counter = 0;
			for (short i = 0; i < Rows; i++)
			{
				for (short j = 0; j < Cols; j++)
				{
					Counter++;
					arr[i][j] = Counter;
				}
			}
		}
		void PrintMatrix(int arr[3][3], short Rows, short Cols)
		{
			for (short i = 0; i < Rows; i++)
			{
				for (short j = 0; j < Cols; j++)
				{
					cout << " " << arr[i][j] << " ";
				}
				cout << "\n";
			}
		}
		void TransposeMatrix(int arr[3][3], int arrTransposed[3][3], short Rows, short Cols)
		{
			for (short i = 0; i < Rows; i++)
			{
				for (short j = 0; j < Cols; j++)
				{
					arrTransposed[i][j] = arr[j][i];
				}
			}
		}
		void main()
		{
			int arr[3][3], arrTransposed[3][3];
			FillMatrixWithOrderedNumbers(arr, 3, 3);
			cout << "\nThe following is a 3x3 ordered matrix:\n";
			PrintMatrix(arr, 3, 3);
			TransposeMatrix(arr, arrTransposed, 3, 3);
			cout << "\n\nThe following is the transposed matrix:\n";
			PrintMatrix(arrTransposed, 3, 3);
			system("pause>0");
		}
	}

	namespace MySolution
	{
		void main()
		{
			vector <vector<short>> MyVector;
			FillVector::Type2D::WithOrderedNumbers(MyVector, 3, 3);
			Print::Print2DVectorAsMatrix("The Following Is 3x3 Ordered Matrix\n", MyVector, "", true, 3, 3);
			vector <vector<short>> Transposed2dVector = Transpose::Vector2D<short>(MyVector);
			cout << endl << endl;
			Print::Print2DVectorAsMatrix("And this is the transposed matrix\n", Transposed2dVector, "", true, 3, 3);
		}
	}
}