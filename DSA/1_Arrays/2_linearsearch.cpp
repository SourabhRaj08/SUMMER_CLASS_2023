#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[10] = {2,4,11,8,33,19,41,99,8,55};

     cout << "Enter the key : " ;

     int key;
     cin >> key;

     bool found = linearSearch(arr,10,key);

     if(found) cout << "Key found" << endl;
     else cout << "Key not found" << endl;
}



// in a given array, write a function to find if even number exist in that array or not