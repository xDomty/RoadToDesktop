#pragma once
#include <iostream>
using namespace std;

namespace Problem47 {

    struct strClient;
    
    strClient NewClient();
    
    string ConvertRecordToLine(strClient client, string delim);
    
    void SaveClientToFile(string clientLine);
    
    void main();

}