// Samuel Peel
// CSCI 130
// 10-26-22

#include <iostream>

using namespace std;

int main() {

  int master[5] = {1, 1, 0, 0, 1};

  int input[6][6] = {{1, 0, 1, 1, 1}, {1, 1, 1, 1, 1}, {1, 1, 0, 0, 1}, {0, 1, 0, 0, 0}, {0, 0, 0, 0, 0}, {1, 1, 0, 1, 0}};
  int row, col, index;

    for (row = 0; row < 6; row++)
    {
        for(col = 0; col < 5; col++)
            cout << input[row][col] << " ";
        
        cout << endl;    
    }
  
  for (index = 0; index < 5; index++)
    cout << master[index] << " ";

  cout << endl;

}




