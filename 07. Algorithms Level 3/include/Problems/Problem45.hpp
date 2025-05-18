#pragma once
#include <iostream>
using namespace std;

namespace Problem45 {

    struct strClient;
    
    strClient EnterNewClientInfo();
    
    string ConvertRecordToLine(strClient client, string delim);
    
    void main();

}