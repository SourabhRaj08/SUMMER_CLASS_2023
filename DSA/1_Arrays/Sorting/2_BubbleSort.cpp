#include <iostream>
using namespace std;

void BubbleSort(int arr[],int n)
{
    bool swapped = false;
    for(int i=0; i< n-1; i++)
    {
        for(int j = 0; j < n - i ; j++)
        {
          if(arr[j] > arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped = true;
          }
        }
        if(swapped == false){
            break;
        }
    }
}

int main(){
    int arr[]={4,2,6,9,3,8};
    BubbleSort(arr,6);

    for(int i=0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

}
