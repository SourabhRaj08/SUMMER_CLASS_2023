#include <iostream>
using namespace std;

int power(int n){
    //Base case
    if(n == 0 )
    {
        return 1;
    }

    //recursive relation
    int smallProblem = power(n-1);
    int bigProblem = 2 * smallProblem;

    return bigProblem;
}
 
 int factorial(int n)
 {
     //Base case
    if(n == 0 )
    {
        return 1;
    }

    //realtion
    int smaller = factorial(n-1);
    int bigger = n * smaller;

    return bigger;

 }

 int fibonacci(int n)
 {
     //Base case
    if(n == 0 )
    {
        return 0;
    }

    if(n == 1)
    {
        return 1;
    }
    //realtion
    return fibonacci(n-1) + fibonacci(n-2);

 }


int main()
{
    int powerAns = power(10);
    cout << "Power Ans : " << powerAns << endl;

    int factorialAns = factorial(5);
    cout << "Factorial Ans : " << factorialAns << endl;

    int count;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> count;

    cout << "Fibonacci series: ";
    for (int i = 0; i < count; ++i) {
        cout << fibonacci(i) << " ";
    }

    
}
