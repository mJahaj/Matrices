#include <iostream>
#include <vector>
#include "RotateMatrix90.h"

using namespace std;



int main(){
    

    vector<vector<int>> vect{
        {1,2,3},
        {4,5,6},
        {7,8,9}

    };

    RotateMatrix90 obj(vect);
    
    vect = obj.RotMatrix90();
    obj.printMatrix(vect);
    return 0;
}