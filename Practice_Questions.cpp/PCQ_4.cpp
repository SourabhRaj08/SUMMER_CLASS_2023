// merge two sorted arrays
#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int n1, int n2, int arr3[]) {
  int i = 0, j = 0, k = 0;
  while (i < n1 && j < n2) {
    if (arr1[i] < arr2[j]) {
      arr3[k++] = arr1[i++];
    } else {
      arr3[k++] = arr2[j++];
    }
  }

  while (i < n1) {
    arr3[k++] = arr1[i++];
  }

  while (j < n2) {
    arr3[k++] = arr2[j++];
  }
}

int main() {
  int arr1[] = {1, 3, 5, 7, 9};
  int arr2[] = {2, 4, 6, 8};

  int arr3[5 + 4];
  mergeArrays(arr1, arr2, 5, 4, arr3);

  cout << "Array after merging: ";
  for (int i = 0; i < 5 + 4; i++) {
    cout << arr3[i] << " ";
  }
  cout << endl;

  return 0;
}

