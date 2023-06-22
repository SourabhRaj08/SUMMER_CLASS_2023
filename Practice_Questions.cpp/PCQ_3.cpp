#include <iostream>
#include <climits>
using namespace std;

int getMax(int arr[], int size){
    int max = INT_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int size){
    int min = INT_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int arr[10] = {2,4,11,8,33,19,41,99,8,55};
    cout << "Maximum element is " << getMax(arr, 10) << endl;
    cout << "Minimum element is " << getMin(arr, 10) << endl;
}



