#include <iostream>
using namespace std;

void print(int arr[],int size)
{
    for(int i=0; i< size; i++)
    {
        cout<<"Size of array : "<< size << endl;
        cout << arr[i] << " ";

    }
}

bool LinearSearch(int arr[],int size, int key)
{   
    
    print(arr,size);
    //base case
    if(size==0 ) return false;

    if(arr[0] == key)
    {
        return true;
    }
    else{
       return  LinearSearch(arr + 1, size - 1, key);
    }
    

}
int main()
{
    int arr[5] = {3,6,5,4,1};

    bool found = LinearSearch(arr,5,5);
    
    if(found)
    { 
        cout << "Key found" << endl;
    }
     else
     { 
        cout << "Key not found" << endl;
     }
}

