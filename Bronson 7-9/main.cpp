// Samuel Peel  
// CSCI 130
// 10-25-22
#include <iostream>

using namespace std;

void printMatrix(int matrix[5][5], int N_ROWS, int N_COLUMNS){

int row, col;
    for (row = 0; row < N_ROWS; row++)
    {
        for(col = 0; col < N_COLUMNS; col++)
            cout << matrix[row][col] << " ";
        
        cout << endl;    
    }
  }

void average(int list[], int N_ROWS){

int sum = 0;

for (int i = 0; i < N_ROWS; i++) {
    sum = (sum + list[i]) ;
  }
  sum = sum /N_ROWS; 
  cout << sum << endl;
  }

void weightedAverage(int list[], int N_ROWS){

  int sum = 0;

  sum = ((0.2*list[1]) + (0.3*list[2]) + (0.3*list[3]) + (0.2*list[4]));

  cout << sum << endl;
}


int main() {

  int grade[5][5] = {{1, 100, 100, 100, 100}, {2, 100, 0, 100, 0}, {3, 82, 94, 73, 86}, {4, 64, 74, 84, 94}, {5, 94, 84, 74, 64}};

  printMatrix(grade, 5, 5);

  cout << endl;

  cout << "Student 1 Average: \n";
  int student1[4] = {100, 100, 100, 100};
  average(student1, 4);

    cout << endl;
  
  cout << "Student 2 Average: \n";
  int student2[4] = {100, 0, 100, 0};
  average(student2, 4);

    cout << endl;
  
  cout << "Student 3 Average: \n";
  int student3[4] = {82, 94, 73, 86};
  average(student3, 4);

    cout << endl;
  
  cout << "Student 4 Average: \n";
  int student4[4] = {94, 84, 74, 64};
  average(student4, 4);

    cout << endl;

  cout << "Student 1 Weighted Average: \n";
  weightedAverage(student1, 4);
  cout << endl;

  cout << "Student 2 Weighted Average: \n";
  weightedAverage(student2, 4);
  cout << endl;

  cout << "Student 3 Weighted Average: \n";
  weightedAverage(student3, 4);
  cout << endl;

  cout << "Student 4 Weighted Average: \n";
  weightedAverage(student4, 4);
  cout << endl;
}