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

// CODE PROVIDED BY Biruk Abebe
// CODE ADAPTED BY Samuel Peel
int row_avg(int numCols, int numRows){

  int sum, avgR;
  int list[numCols][numRows];
  sum = 0;

//average of a row
for (int i = 0; i < numCols; i++)//iterate each row(one loop for the row)
{
    //sum=0;//reset sum for each row
    for (int j = 0; j < numRows; j++)//iterate each column in each row(one loop for the column)
            sum += list[i][j];//will sum up the contents of the current row

    avgR=sum/numCols;//give you the average of each row
  return avgR;
}
  }

int weightedAverage(int matrix[][7], int N_ROWS, int student){

  int sum = 0;

  sum = ((0.2*matrix[student][1]) + (0.3*matrix[student][2]) + (0.3*matrix[student][3]) + (0.2*matrix[student][4]));

  return sum;
}


int main() {

  int grade[5][4] = {{100, 100, 100, 100}, {100, 0, 100, 0}, {82, 94, 73, 86}, {64, 74, 84, 94}, {94, 84, 74, 64}};


  cout << endl;

  

  int finalGrades[60][7] = {{100, 100, 100, 100, row_avg(1, 4), weightedAverage(finalGrades, 4, 1)}, {100, 0, 100, 0}, {82, 94, 73, 86}, {64, 74, 84, 94}, {94, 84, 74, 64}};

  printMatrix(finalGrades, 60, 7);

}