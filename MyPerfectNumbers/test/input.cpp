#include <iostream>
#include "input.h"
using std::cin;
using std::cout;

void greetings()
{
        std::cout << "Programm finding perfect numbers in the specified range.\n"
        << "There is no negative numbers in range and lower bound of range\n"
        << "must be closer, then 100 000 to upper bound, and upper bound \n"
        << "must be < 200 000 for fast working.\n"
        << "good luck!\n";
}

int LowRangeSetting(int low)
{
    cout << "Enter lower bound of range\n";
    cin >> low;
    return low;
}

int UpRangeSetting(int up)
{
    cout << "Enter upper bound of range\n";
    cin >> up;
    return up;
}