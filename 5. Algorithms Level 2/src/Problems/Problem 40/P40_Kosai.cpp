#include <iostream>
using namespace std;
void FillArray(int arr[100], int& arrlength) {
  arrlength = 10;
  arr[0] = 22;
  arr[1] = 22;
  arr[2] = 22;
  arr[3] = 50;
  arr[4] = 50;
  arr[5] = 70;
  arr[6] = 70;
  arr[7] = 70;
  arr[8] = 70;
  arr[9] = 90;
}
void Print(int arr[100], int arrlength) {
  for (int i = 0;i < arrlength;i++) {
    cout << arr[i]<<" ";
  }
  cout << "\n";
}
short FindIndexNumber(int number,int arr[100], int  arrlength) {
  for (int i = 0;i < arrlength;i++) {
    if (arr[i] == number) {
      return i;
    }
    
  }
  return -1;
}
bool IsNumberInAraay(int number, int arr[100], int  arrlength) {
  return FindIndexNumber(number,arr,arrlength)!=-1;
}
void AddArrayElement(int number, int arr[100], int & arrlength) {
  arrlength++;
  arr[arrlength - 1] = number;
}
void CopyArray(int arr[100],int arr2[100],int arrlength,int& arr2length) {
    
  for (int i = 0;i < arrlength;i++) {
    if (!IsNumberInAraay(arr[i], arr2, arr2length)) {
      AddArrayElement(arr[i], arr2, arr2length);
    }
  }

}
int main() {
  int arr[100], arrlength = 0, arr2[100], arr2length = 0;
  FillArray(arr,arrlength);
  Print(arr, arrlength);
  cout << "*****\n";
  CopyArray(arr,arr2,arrlength,arr2length);
  Print(arr2, arr2length);

  return 0;
}