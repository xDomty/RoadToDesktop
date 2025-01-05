#include "HeadersAfterCourse/Operations.h"
#include "HeadersBeforeCourse/Random.h"
#include "HeadersBeforeCourse/Print.h"
int main()
{
     srand((unsigned)time(NULL));
     vector <vector<short>> X;
     Random::Numbers::FillVector2DimensionalArray::VariableType::ShortIntegar(X,3,3,1,100);
     optional <short> test = OPERATIONS::_2DVectors::SumRows::Specific<short>(X,{1,4},true);
     if (test == nullopt)
     {
          cout << "EWWWWWW";
     }
     Print::Vector2D_AsMatrix::VectorType::ShortInteger("\t\t   The 3D MATRIX ",X,"        ",true,3,3);
}