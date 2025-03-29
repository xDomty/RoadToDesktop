#include "../include/Problem1.hpp"

namespace Problem1 {
    namespace MrSolution {
        string NumberToText(int Number)
        {
             if (Number == 0) return "zero";
             
             if (Number >= 1 && Number <= 19)
             {
                 string arr[] = { "","One","Two","Three","Four","Five","Six","Seven", "Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen" };
                 return arr[Number] + " ";
             }

             if (Number >= 20 && Number <= 99)
             {
                 string arr[] = { "","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety" };
                 return arr[Number / 10] + " " + NumberToText(Number % 10);
             }

             if (Number >= 100 && Number <= 199)
             {
                 return "One Hundred " + NumberToText(Number % 100);
             }
             
             if (Number >= 200 && Number <= 999)
             {
                 return NumberToText(Number / 100) + "Hundreds " +
                 NumberToText(Number % 100);
             }

             if (Number >= 1000 && Number <= 1999)
             {
                 return "One Thousand " + NumberToText(Number % 1000);
             }

             if (Number >= 2000 && Number <= 999999)
             {
                 return NumberToText(Number / 1000) + "Thousands " +
                 NumberToText(Number % 1000);
             }

             if (Number >= 1000000 && Number <= 1999999)
             {
                 return "One Million " + NumberToText(Number % 1000000);
             }

             if (Number >= 2000000 && Number <= 999999999)
             {
                 return NumberToText(Number / 1000000) + "Millions " +
                 NumberToText(Number % 1000000);
             }

             if (Number >= 1000000000 && Number <= 1999999999)
             {
                 return "One Billion " + NumberToText(Number % 1000000000);
             }

             else
             {
                 return NumberToText(Number / 1000000000) + "Billions " +
                 NumberToText(Number % 1000000000);
             }
        }

        int ReadNumber()
        {
             int Number;
             cout << "\nEnter a Number? ";
             cin >> Number;
             return Number;
        }

        void main()
        {
             int Number = ReadNumber();
             cout << NumberToText(Number);
        }
    }

    namespace MySolution {
        string AllTheTextToUpper(string S1) {
            for (auto i = 0; i < S1.length(); i++) {
                S1[i] = toupper(S1[i]);
            }
            return S1;
        }
        string NumberToText(int number) {
             if (number == 0) return "zero"; 
             string result = "";

             if (number < 0) {
                 result += "Negative "; 
                 number = abs(number); 
             }

             if (number >= 1 && number <= 19) {
                 string arr[] = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                                  "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
                                  "seventeen", "eighteen", "nineteen"};
                 result += arr[number];
                 return result;
             }

             if (number >= 20 && number <= 99) {
                 string arr[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
                 result += arr[number / 10];  
                 if (number % 10 != 0) {
                     result += " " + NumberToText(number % 10); 
                 }
                 return result;
             }

             if (number >= 100 && number <= 999) {
                 result += NumberToText(number / 100) + " hundred";
                 if (number % 100 != 0) {
                     result += " and " + NumberToText(number % 100);
                 }
                 return result;
             }

             if (number >= 1000 && number <= 999999) {
                 result += NumberToText(number / 1000) + " thousand";
                 if (number % 1000 != 0) {
                     result += " " + NumberToText(number % 1000);
                 }
                 return result;
             }

             if (number >= 1000000 && number <= 999999999) {
                 result += NumberToText(number / 1000000) + " million";  
                 if (number % 1000000 != 0) {
                     result += " " + NumberToText(number % 1000000);  
                 }
                 return result;
             }

             if (number >= 1000000000 && number <= 999999999999) {
                 result += NumberToText(number / 1000000000) + " billion";
                 if (number % 1000000000 != 0) {
                     result += " " + NumberToText(number % 1000000000);
                 }
                 return result;
             }

             return result;
        }

        void main() {
            cout << AllTheTextToUpper(NumberToText(200000));
        }
    }
}