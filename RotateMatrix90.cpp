/*
	Mariglen Jahaj
	1/12/2017
	This class rotates a matrix 90 degrees clockwise and prints out matrix
*/
#include "RotateMatrix90.h"
#include <vector>
#include <iomanip>
#include <iostream>
RotateMatrix90::RotateMatrix90()
{

}

RotateMatrix90::RotateMatrix90(std::vector<std::vector<int> > matrix)
{
    this->matrix = matrix;
    //this->rows = rows;
    //this->cols = cols;
}

std::vector<std::vector <int> > RotateMatrix90::RotMatrix90(){
  
  std::vector <std::vector <int> > matrix90;

  for(int i = 0; i < matrix.size(); i++){
    matrix90.push_back(std::vector <int>());

    for(int j = matrix[0].size()-1; j >= 0; j--){
      matrix90[i].push_back(matrix[j][i]);
    }
  }
    return matrix90;
}

void RotateMatrix90::printMatrix(std::vector<std::vector<int> > matrix)
{
  for(int i = 0; i < matrix.size(); i++){

		for(int j = 0; j < matrix[0].size(); j++){
		  std::cout<<std::setw(2) << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void RotateMatrix90::RotateClockwise(std::vector<std::vector<int> > &matrix)
{
  for(int i = 0; i < matrix.size(); i++){
    matrix.push_back(std::vector <int>());

    for(int j = matrix[0].size()-1; j >= 0; j--){
      matrix[i].push_back(matrix[j][i]);
    }
  }   
}
