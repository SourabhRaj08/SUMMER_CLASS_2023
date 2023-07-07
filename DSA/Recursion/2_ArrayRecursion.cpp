#include <iostream>
using namespace std;

void print(int arr[],int size)
{
    for(int i=0; i< size; i++)
    {
        cout << arr[i] << " ";

    }
}

bool isSorted(int arr[],int size)
{   
    cout << endl;
    print(arr,size);
    //base case
    if(size==0 || size==1) return true;

    if(arr[0] > arr[1])
    {
        return false;
    }
    else{
        //recursion
        bool remainingPart= isSorted(arr + 1, size - 1 );
        return remainingPart;
    }

}

int arraySum(int arr[], int size) {
    if (size == 0) {
        return 0;  
    } 
    if (size == 1)
    {
        return arr[0];
    }
        return arr[0] + arraySum(arr+1, size - 1);  
    
}

int main(){
    int arr[6]={1,2,4,5,6,7};

    bool ans = isSorted(arr,6);

    if(ans)
    {
        cout <<" Array is Sorted " << endl;
    }
    else{
        cout << " Array is not sorted " << endl;
    }

    int sum = arraySum(arr, 6);
    cout << "Sum of the array: " << sum << endl;


}