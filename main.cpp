#include <iostream>
#include "RotateMatrix90.h"
#include <vector>
using namespace std;


int main()
{

    vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    RotateMatrix90 vec;

    vec.RotateClockwise(vect);
    vec.printMatrix(vect);
    return 0;
}