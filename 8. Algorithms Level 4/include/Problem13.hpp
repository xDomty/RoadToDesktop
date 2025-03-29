#pragma once
#include <iostream>
#include <string>
#include <optional>
using namespace std;

namespace Problem13 {

    struct sDate;

    optional <bool> IsDate1BeforeDate2(sDate Date1, sDate Date2);

    unsigned short ReadNumber(string message);

    sDate ReadDateInfo();

    void main();
}