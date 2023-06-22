#include <iostream>
using namespace std;

int countEvenNumbers(int arr[], int size) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0) {
      count++;
    }
  }
  return count;
}

int main() {
  int arr[10] = {2, 4, 11, 8, 33, 39, 41, 99, 8, 55};
  int number_of_even_numbers = countEvenNumbers(arr, 10);
  if (number_of_even_numbers > 0) {
    cout << "There are " << number_of_even_numbers << " even numbers in the array." << endl;
  } else {
    cout << "There are no even numbers in the array." << endl;
  }
  return 0;
}
