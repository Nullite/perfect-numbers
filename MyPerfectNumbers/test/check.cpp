#include <iostream>
#include "check.h"
using std::cout;

int checkRange(int low, int up)
{
    if (low > up)
    {
        throw (-1);
        return 0;
    }

    else if (low < 0)
    {
        throw (-2);
        return 0;
    }
    return 1;
}

void checkDuration(int low, int up)
{
    if (up > 200000 || (up - low) > 100000)
    {
        cout << "probably, search will take a lot of time...\n";
    }

}


