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
  int row = 0;

  for (row; row <= 10; row++){
    if (matrix[row][city_col] >= unhealthy_level){
      count++;
      }
    }
  return count;
}

int main(){

  int AirQuality_Index[10][3] = {{50, 68, 58}, {58, 115, 78}, {62, 110, 81}, {66, 124, 110}, {64, 152, 121}, {46, 143, 90}, {46, 143, 90}, {25, 91, 91}, {27, 19, 59}, {17, 13, 27}};

  cout << "---Air Quality Index---" << endl;

  printMatrix_3col (AirQuality_Index, 10, 3);
  cout << endl;

  int count;

  count = CountUnhealthySensitive (AirQuality_Index, 10, 0);
  cout << "From 10/4/2020 to 10/13/2020 the air quality \nwas unhealthy for sensitive groups in: " << endl;
  cout << "Grand Junction: " << count - 1 <<  " times." << endl;

  
  count = CountUnhealthySensitive (AirQuality_Index, 10, 1);
  cout << "Fort Collins: " << count <<  " times." << endl;
  count = CountUnhealthySensitive (AirQuality_Index, 10, 2);
  cout << "Denver / Boulder: " << count <<  " times." << endl;
}