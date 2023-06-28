#include <iostream>
using namespace std;

void InsertionSort(int arr[],int n)
{
   for(int i=1; i < n; i++)
   {
    int temp = arr[i];
    int j=i-1;
    for(; j >= 0; j--)
    {
        if(arr[j] > temp)
        {
            arr[j+1] = arr[j]; //shift
        }
        else{
            break;
        }

    }
    arr[j+1] = temp;
   }
}
int main(){
    int arr[] = { 10,1,7,4,8,2,11};
    InsertionSort(arr,7);

    for(int i=0; i < 7; i++)
    {
        cout<< arr[i] << " ";
    }

}