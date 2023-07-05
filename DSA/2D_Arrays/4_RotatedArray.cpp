#include <iostream>
using namespace std;

const int N = 3;  // Number of rows and columns

void rotate90(int arr[][N]) {
    int rotated[N][N];  // New array to store rotated elements

    // Copy elements to rotated array
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            rotated[j][N - 1 - i] = arr[i][j];
        }
    }

    // Copy rotated array back to the original array
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arr[i][j] = rotated[i][j];
        }
    }
}

void printArray(int arr[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[N][N] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    cout << "Original Array:" << endl;
    printArray(arr);

    rotate90(arr);

    cout << "Rotated Array (90 degrees):" << endl;
    printArray(arr);

    return 0;
}
