#include <iostream>
using namespace std;

class Student{
    private:
    int password = 1243;

    public:
    int rollNo;
    string name;

    void print(int x){
        cout << "Print the value : " << x << endl;
    }

    //Getters
    int getPassword(){
        return password;
    }

    //setters
    void setPassword(int input){
        password = input;
    }


};

int main(){
    Student s1, s2;
    s1.name = "Rohit";
    cout << s1.name << endl;
    s2.name = "Vicky";
    cout << s2.name << endl;


    cout << "Old password is : " <<s1.getPassword() << endl;

    s1.setPassword(0010);

    cout << "New password is : " <<s1.getPassword() << endl;

}