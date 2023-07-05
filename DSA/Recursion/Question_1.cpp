#include<iostream>
using namespace std;
int ClimbStairs(int goal)
{
    if(goal==2)
    {
        return 2;
    }
    if(goal==1)
    {
        return 1;
    }
    return ClimbStairs(goal-1)+ ClimbStairs(goal-2);
}
int main()
{
    int input;
    cout<<"Enter the goal: ";
    cin>>input;
    cout<<"Total number of ways to reach the top is: ";
    cout<<ClimbStairs(input);
}