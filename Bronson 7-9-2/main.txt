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

// vvv CODE PROVIDED BY Biruk Abebe vvv
// vvv CODE ADAPTED BY Samuel Peel vvv
int row_avg(int matrix[][7], int numCols, int numRows){

  int sum, avgR;

//average of a column
for (int j = 0; j < numCols; j++)//iterate each column
{
    sum = 0;//reset sum for each column
    for (int i = 0; i < numRows; i++)//iterate each row for each column
            sum = sum + matrix[j][i];//will sum up the contents of the current column

    avgR=sum/numRows;//give you the average of each column
}
  return avgR;
  }

int weightedAverage(int matrix[][4], int numCols){

  int weight = ((0.2 * matrix[numCols][1]) + (0.3 * matrix[numCols][2]) + (0.3 * matrix[numCols][3]) + (0.2 * matrix[numCols][4]));

  return weight;
}

// vvv CODE PROVIEDED BY Adam Allard vvv
// vvv CODE ADAPTED BY Samuel Peel vvv
int findLowest(int matrix[][4], int numCols) {
	int lowestScore;
	if (matrix[numCols][1] <= matrix[numCols][2]) {
		lowestScore = matrix[numCols][1];
	}
	else {
		lowestScore = matrix[numCols][2];
	}
	if (matrix[numCols][3] < lowestScore) {
		lowestScore = matrix[numCols][3];
	}
	if (matrix[numCols][4] < lowestScore) {
		lowestScore = matrix[numCols][4];
  }
	return lowestScore;
}



int main() {

  int grade[5][4] = {{100, 100, 100, 100}, {100, 0, 100, 0}, {82, 94, 73, 86}, {64, 74, 84, 94}, {94, 84, 74, 64}};

  cout << endl;

  int finalGrades[60][7] = {
    {100, 100, 100, 100, row_avg(finalGrades, 1, 4), weightedAverage(grade, 0), findLowest(grade, 0)}, 
    {100, 0, 100, 0, row_avg(finalGrades, 2, 4), weightedAverage(grade, 1), findLowest(grade, 1)}, 
    {82, 94, 73, 86, row_avg(finalGrades, 3, 4), weightedAverage(grade, 2), findLowest(grade, 2)}, 
    {64, 74, 84, 94, row_avg(finalGrades, 4, 4), weightedAverage(grade, 3), findLowest(grade, 3)}, 
    {94, 84, 74, 64, row_avg(finalGrades, 5, 4), weightedAverage(grade, 4), findLowest(grade, 4)}};

  printMatrix(finalGrades, 5, 7);

}