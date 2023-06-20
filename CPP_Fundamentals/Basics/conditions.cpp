#include <iostream>
using namespace std;

int main(){
    //if(condition){
        //body
    //}
    // int x = 5;

    // if(x > 10){
    //     cout << "Yes";
    // }
    // else{
    //     cout << "No";
    // }


    //write a program to ask for the age of the user
    //based on the age cout if he can vote or not
    //NOTE : voting age is 18

    int age; 
    /*if(x > 0 && x < 12){
		cout<< "You are a child " << endl;
	}
	
	else if(x >= 12 && x < 18){
		cout<< "You are a Teenager " << endl;
	}
	
	else{
		cout<< "You are an Adult " << endl;
	}*/
    

    //SWITCH CASE

    switch(age){

        case 10:
        cout << "Age is 10";
        break;

        case 20:
        cout << "Age is 20";
        break;

        case 30:
        cout << "Age is 30";
        break;

        default:
        cout << "Invalid age";
        break;

    }
}