#include<iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int> rev(queue<int> q)
{
    stack<int> s;
    //Push all elements from queue into the stack
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    
    // Pop all elements from the stack and put them back in the queue
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    
    return q;


}

int main()
{
    queue<int> q;
    
    // Adding elements to the queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    
    // Reversing the queue
    queue<int> reversed_q = rev(q);
    
    // Printing the reversed queue
    while (!reversed_q.empty())
    {
        cout << reversed_q.front() << " ";
        reversed_q.pop();
    }
    
    return 0;

}