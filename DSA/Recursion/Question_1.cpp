#include<iostream>
using namespace std;
int ClimbStairs(int n)
{
    if(n==2)
    {
        return 2;
    }
    if(n==1)
    {
        return 1;
    }
    return ClimbStairs(n-1)+ ClimbStairs(n-2);
}
int main()
{
    int input;
    cout<<"Enter the goal: ";
    cin>>input;
    cout<<"Total number of ways to reach the top is: ";
    cout<<ClimbStairs(input);
}