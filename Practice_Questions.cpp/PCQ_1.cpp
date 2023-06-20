//Define two functions to print the maximum and the minimum number respectively among
// three numbers entered by user.

#include <iostream>
using namespace std;

int findMax(int a, int b, int c) {
  int max = a;
  if (b > max) {
    max = b;
  }
  if (c > max) {
    max = c;
  }
  return max;
}

int findMin(int a, int b, int c) {
  int min = a;
  if (b < min) {
    min = b;
  }
  if (c < min) {
    min = c;
  }
  return min;
}

int main() {
  int a, b, c;
  cout << "Enter three numbers: " << endl;
  cin >> a >> b >> c;

  int max = findMax(a, b, c);
  cout << "The maximum number is: " << max << endl;

  int min = findMin(a, b, c);
  cout << "The minimum number is: " << min << endl;

  return 0;
}

