#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> num  = {1,2,3,4,5};
    //Add-----------------------------------
    num.push_back(6);
    num.push_back(7);

    cout << "Original vector -> " ;

    for(int i : num){
        cout << i << " ";
    } cout << endl;

    //Access-------------------------------
    // cout << "Element at index 2 is " << num.at(2) << endl;
    // cout << "Element at index 10 is " << num.at(10) << endl;
    // cout << num[10];
    // num.at(2) = 33;
    // cout << "updated Element at index 2 is " << num.at(2) << endl;

    //Delete-----------------------------------

    num.pop_back();
    cout << "Updated vector -> " ;
    for(int i : num){

        cout << i << " ";

    } cout << endl;

     // Size of the vector
    cout << "Size: " << num.size() << endl;

    // Front and back elements of the vector
    cout << "Front: " << num.front() << endl;
    cout << "Back: " << num.back() << endl;

    // Capacity of the vector
    cout << "Capacity: " << num.capacity() << endl;

    // Clear the vector
    num.clear();

    // Size after clearing the vector
    cout << "Size after clearing: " << num.size() << endl;


}
