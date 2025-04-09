#pragma once
#include <iostream>
#include <vector>
using namespace std;

namespace Problem49 {

    const string ClientsFileName;
    
    struct strClient;
    
    vector<string> SplitString(string text, string delim);
    
    strClient ConvertLinetoRecord(string line, string delim);
    
    vector<strClient> LoadClientsDataFromFile(string fileName);
    
    bool FindClientByAccNum(vector<strClient>& vClients, strClient& saveTo, string accNum);
    
    void PrintClientRecord(strClient& client);
    
    void main();

}