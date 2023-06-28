#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n) {
  // - `i` will point to the first non-zero element in the array.
  // - `j` will point to the current element in the array.
  int i = 0, j = 0;

  while (j < n) {
    // If the current element is not zero, move it to the position of the first non-zero element.
    if (arr[j] != 0) {
      swap(arr[i], arr[j]);
      i++;
    }
    j++;
  }

  // Fill the remaining elements of the array with zeros.
  for (; i < n; i++) {
    arr[i] = 0;
  }
}

int main() {
  int arr[] = {2,0,3,5,0,0,0};
  moveZeroes(arr, 7);

  for (int i = 0; i < 7; i++) {
    cout << arr[i] << " ";
  }
  
}
