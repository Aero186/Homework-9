// Samuel Peel  
// CSCI 130
// 10-25-22
#include <iostream>

using namespace std;

void printMatrix(int matrix[][7], int N_ROWS, int N_COLUMNS){

int row, col;
    for (row = 0; row < N_ROWS; row++)
    {
        for(col = 0; col < N_COLUMNS; col++)
            cout << matrix[row][col] << " ";
        
        cout << endl;    
    }
  }

int average(int matrix[][7], int N_ROWS, int student){

int sum = 0;

for (int i = 0; i < N_ROWS; i++) {
    sum = (sum + matrix[student][i]) ;
  }
  avg = sum /N_ROWS; 
  return avg;
  }

int weightedAverage(int matrix[][7], int N_ROWS, int student){

  int sum = 0;

  sum = ((0.2*matrix[student][1]) + (0.3*matrix[student][2]) + (0.3*matrix[student][3]) + (0.2*matrix[student][4]));

  return sum;
}


int main() {

  int grade[5][5] = {{100, 100, 100, 100}, {100, 0, 100, 0}, {82, 94, 73, 86}, {64, 74, 84, 94}, {94, 84, 74, 64}};


  cout << endl;

  

  int finalGrades[60][7] = {{100, 100, 100, 100,  average(finalGrades, 4, 1), weightedAverage(finalGrades, 4, 1)}, {100, 0, 100, 0}, {82, 94, 73, 86}, {64, 74, 84, 94}, {94, 84, 74, 64}};

  printMatrix(finalGrades, 60, 7);

}