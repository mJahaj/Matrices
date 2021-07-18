/*
	Mariglen Jahaj
	
	This class rotates a matrix 90 degrees clockwise and prints out matrix
*/
#ifndef ROTATEMATRIX90_H
#define ROTATEMATRIX90_H
#include <vector>
#include <iomanip>
#include <iostream>
class RotateMatrix90
{
    public:
        RotateMatrix90();
        RotateMatrix90(std::vector<std::vector <int> > matrix);
        std::vector<std::vector <int> > RotMatrix90();//returns a matrix rotated 90 degrees clockwise
        void printMatrix(std::vector<std::vector<int> > matrix);
        void setMatrix(std::vector<std::vector<int> > matrix)
        {this->matrix = matrix;}
        //void setRows(int rows);
        //void setCols(int cols);

    private:
        std::vector<std::vector<int> > matrix;
        //int rows;
        //int cols;
};

#endif // ROTATEMATRIX90_H
