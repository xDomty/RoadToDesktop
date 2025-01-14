#pragma once
#include <iostream>
using namespace std;

namespace Problem8
{
    template <typename TypeOfMARK,typename TypeOfFrom,typename TypeOfTo,typename TypeOfRequiredMArkToPass>
    bool ResultOfMark(TypeOfMARK mark, TypeOfFrom from, TypeOfTo to, TypeOfRequiredMArkToPass RequiredMarkToPass)
    {
        if (mark > from && mark < to) {
           return mark >= RequiredMarkToPass;
        }       
        else {
           cout << "ERROR , THE MARK IS NOT BETWEEN (" << from << " & " << to << ")\n"; 
           return false;
        }
    }
    
    template <typename TypeOfMARK,typename TypeOfFrom,typename TypeOfTo,typename TypeOfRequiredMArkToPass>
    string PrintResultOfMark(TypeOfMARK mark, TypeOfFrom from, TypeOfTo to, TypeOfRequiredMArkToPass RequiredMarkToPass)
    {
        if(ResultOfMark(mark,from,to,RequiredMarkToPass))
           return "PASS";
        else 
           return "FAIL";
    }
    
    void main();
}