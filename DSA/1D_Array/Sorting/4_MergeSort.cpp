#include <iostream>
using namespace std;

void merge(int arr[], int s, int e) {
  int mid = (s + e) / 2;
  int len1 = mid - s + 1;
  int len2 = e - mid;

  int *first = new int[len1];
  int *second = new int[len2];

  for (int i = 0; i < len1; i++) {
    first[i] = arr[s + i];
  }

  for (int i = 0; i < len2; i++) {
    second[i] = arr[mid + 1 + i];
  }

  int i = 0, j = 0, k = s;
  while (i < len1 && j < len2) {
    if (first[i] < second[j]) {
      arr[k++] = first[i++];
    } else {
      arr[k++] = second[j++];
    }
  }

  while (i < len1) {
    arr[k++] = first[i++];
  }

  while (j < len2) {
    arr[k++] = second[j++];
  }

  delete[] first;
  delete[] second;
}

void mergesort(int arr[], int s, int e) {
  if (s >= e) {
    return;
  }

  int mid = (s + e) / 2;

  mergesort(arr, s, mid);
  mergesort(arr, mid + 1, e);

  merge(arr, s, e);
}

int main() {
  int arr[] = {2, 5, 1, 6, 9};
  mergesort(arr, 0, 5);

  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
