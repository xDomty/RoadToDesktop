#pragma once
#include <iostream>
#include <vector>
using namespace std;

namespace Problem46 {

    struct strClient;
    
    vector <string> SplitString(string text, string delim);
    
    strClient ConvertLinetoRecord(string line, string delim);
    
    void PrintClientRecord(strClient client);
    
    void main();

}