#include <iostream>
#include <vector>
#include "handler.h"
using std::cout;
using std::vector;

int perfect(int lowerBound, int upperBound)
{
    vector<int> perfects;
    vector<int> divisors;
    int sum = 0;

    for (int i = lowerBound; i <= upperBound; i++)
    {
        if (!i) continue;

        for (int j = 1; j < i / 2 + 1; j++)
        {
            if (!(i % j))
            {
                divisors.push_back(j);
            }
        }

        for (int k = 0; k < divisors.size(); k++)
        {
            sum += divisors[k];
        }
        if (sum == i)
        {
            perfects.push_back(i);
        }
        sum = 0;
        divisors.clear();
    }

    if (!perfects.size()) return 0;

    for (int i = 0; i < perfects.size(); i++)
    {
        cout << perfects[i] << " is perfect\n";
    }
    return 1;
}