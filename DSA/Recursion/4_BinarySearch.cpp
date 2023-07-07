#include <iostream>
using namespace std;

bool binarySearch(int arr[],int s, int e, int key)
{
    if(s > e)
    {   //Key not found
        return false;
    }

    int mid =(s+e)/2;

    if(arr[mid]==key)
    {
        return true;
    }
    else if(key > arr[mid])
    {
        //Right 
        return binarySearch(arr,mid+1,e,key);
    }
    else{
        //left
        return binarySearch(arr,s,mid-1,key);
    }

}

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int key = 5;

    bool found = binarySearch(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1, key);

    if (found) {
        cout << "Key found!" << endl;
    } else {
        cout << "Key not found!" << endl;
    }

    return 0;
}