// Samuel Peel
// CSCI 130
// 10-26-22

#include <iostream>

using namespace std;

int main() {

  int master[5] = {1, 1, 0, 0, 1};

  int input[6][6] = {{1, 0, 1, 1, 1}, {1, 1, 1, 1, 1}, {1, 1, 0, 0, 1}, {0, 1, 0, 0, 0}, {0, 0, 0, 0, 0}, {1, 1, 0, 1, 0}};
  int row, col, index;

/*    for (row = 0; row < 6; row++)
    {
        for(col = 0; col < 5; col++)
            cout << input[row][col] << " ";
        
        cout << endl;    
    }
  
  for (index = 0; index < 5; index++)
    cout << master[index] << " ";

  cout << endl; */


  double correct = 0;
  
for( row = 0; row <= 6; row++){

  for ( col = 0; col <= 0; col++){
    if (master[row] == input[col][row]){
      correct++;
      }
    }
  }
   cout << "Test 1 scored: " << (5 * correct) << " points" << endl; 
    correct = 0;

for( row = 0; row <= 6; row++){
  for ( col = 1; col <= 1; col++){
    if (master[row] == input[col][row]){
      correct++;
      }
    }
  }
   cout << "Test 2 scored: " << (5 * correct) << " points" << endl;
    correct = 0;

  for( row = 0; row <= 6; row++){
  for ( col = 2; col <= 2; col++){
    if (master[row] == input[col][row]){
      correct++;
      }
    }
  }
   cout << "Test 3 scored: " << (5 * correct) << " points" << endl;
    correct = 0;

  for( row = 0; row <= 6; row++){
  for ( col = 3; col <= 3; col++){
    if (master[row] == input[col][row]){
      correct++;
      }
    }
  }
   cout << "Test 4 scored: " << (5 * correct) << " points" << endl;
    correct = 0;

  for( row = 0; row <= 6; row++){
  for ( col = 4; col <= 4; col++){
    if (master[row] == input[col][row]){
      correct++;
      }
    }
  }
   cout << "Test 5 scored: " << (5 * correct) << " points" << endl; 
    correct = 0;

  for( row = 0; row <= 6; row++){
  for ( col = 5; col <= 5; col++){
    if (master[row] == input[col][row]){
      correct++;
      }
    }
  }
   cout << "Test 6 scored: " << (5 * correct) << " points" << endl; 
    correct = 0;

  

}




