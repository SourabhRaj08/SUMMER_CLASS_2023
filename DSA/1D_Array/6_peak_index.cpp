#include <iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int size){
    int s = 0;
    int e = size -1;
    int mid = (s+e)/2;

    while(s <e){
        if(arr[mid] < arr[mid + 1]){
            s = mid+1;
        }
        else{
            e = mid;
        }

        mid = (s+e)/2;
    }
    return e;
}

int main(){
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 6, 5};

    cout << "peak Index is : " << peakIndexInMountainArray(arr, 9) << endl; 

}