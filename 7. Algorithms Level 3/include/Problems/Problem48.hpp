#pragma once
#include <iostream>
#include <vector>
using namespace std;

namespace Problem48 {

    struct strClient;
    
    vector<string> SplitString(string text, string delim);
    
    strClient ConvertLinetoRecord(string line, string delim);
    
    vector<strClient> LoadClientsDataFromFile(string fileName);
    
    void PrintClientData(strClient& client);
    
    void PrintAllClientsData(vector<strClient>& vClients);
    
    void main();

}