// Samuel Peel
// CSCI 130
// 10-20-22
#include <iostream>
#include <iomanip>
using namespace std;

void printMatrix_3col(int matrix[][3], int N_ROWS, int N_COLUMNS){

int row, col;
    for (row = 0; row < N_ROWS; row++)
    {
        for(col = 0; col < N_COLUMNS; col++)
            cout << setw(6) << matrix[row][col] << " ";
        
        cout << endl;    
    }
  }

int main(){
  
}