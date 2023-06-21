#include <iostream>
using namespace std;

//Single Inheritance
//one parent and one child class

class A{

    int x;

    protected:
    int y;

    public:
    void ABC(){

    }
};

class B : private A{
    public:
    void XYZ(){

    }
};

int main(){

}
//private cant be inheritate only public and protected can be inheritate
//class B : private A so here if we make another class C which is inherit from class B ,class C cannot
//be able to access the Class B because class A wil become private to class B
//class B : protected A so here if we make another class C which is inherit from class B ,now only class C
//will be able to accces to the class B 