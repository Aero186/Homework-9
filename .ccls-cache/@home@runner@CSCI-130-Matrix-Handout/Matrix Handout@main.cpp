// Samuel Peel
// CSCI 130
// 10-20-22
#include <iostream>
#include <iomanip>
using namespace std;


void printMatrix_3col(int matrix[10][3], int N_ROWS, int N_COLUMNS){

int row, col;
    for (row = 0; row < N_ROWS; row++)
    {
        for(col = 0; col < N_COLUMNS; col++)
            cout << setw(6) << matrix[row][col] << " ";
        
        cout << endl;    
    }
  }

int CountUnhealthySensitive (int matrix[10][3], int N_ROWS, int city_col){

  int count = 0; 
  int unhealthy_level = 101;
  int row;
  
  for (row = 0; matrix[row][city_col] >= unhealthy_level; row++){
    count++;
    }
  return count;
}

int main(){

  int AirQuality_Index[10][3] = {{50, 68, 58}, {58, 115, 78}, {62, 110, 81}, {66, 124, 110}, {64, 152, 121}, {46, 143, 90}, {46, 143, 90}, {25, 91, 91}, {27, 19, 59}, {17, 13, 27}};

  cout << "---Air Quality Index---" << endl;

  printMatrix_3col (AirQuality_Index, 10, 3);

  CountUnhealthySensitive (AirQuality_Index, 10, 3);
  
}