#pragma once
#include <iostream>
#include <vector>
using namespace std;

namespace Problem51 {

    
    struct strClient;
    
    vector<string> SplitString(string text, string delim);
    
    strClient ConvertLinetoRecord(string line, string delim = "#//#");
    
    string ConvertRecordToLine(strClient& client, string delim = "#//#");
    
    void PrintClientRecord(strClient& client);
    
    void SaveClientsDataToFile(vector<strClient>& vClients);
    
    vector<strClient> LoadClientsDataFromFile(string fileName);
    
    vector<strClient>::iterator FindClientByAccNum(vector<strClient>& vClients, string accNum);
    
    void UpdClientByAccNum(vector<strClient>& vClients, string accNum);
    
    void main();

}