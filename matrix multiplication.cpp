#include <iostream>
using namespace std;
int main() {
  int a[2][3];
  int b[3][2];
  int c[2][2];
  cout << "Enter elements of 2D array A: \n";
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> a[i][j];
    }
  }
  cout << "Enter elements of 2D array B: \n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> b[i][j];
    }
  }
  cout << "Resultant Matrix: \n";
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      c[i][j] = 0;
      for (int k = 0; k < 3; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
      cout << c[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}