#include "../include/Problem1.hpp"

namespace Problem1 {

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
