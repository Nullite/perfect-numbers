#include <iostream>
#include "input.h"
#include "check.h"
#include "handler.h"
#include "output.h"
using std::cout;


int lower, upper;

int main()
{
    greetings();
    lower = LowRangeSetting(lower);
    upper = UpRangeSetting(upper);

    try
    {
        checkRange(lower, upper);
    }
    catch (int a)
    {
        if (a == -1)
        {
            cout << "Lower Bound of range can not be > than upper bound\n";
            return -1;
        }
        if (a == -2)
        {
            cout << "Lower Bound of range can not be < 0\n";
            return -1;
        }
    }

    checkDuration(lower, upper);
    int perfectsFound = perfect(lower, upper);
    if (!(perfectsFound)) noPerfects();

    return 0;
}
