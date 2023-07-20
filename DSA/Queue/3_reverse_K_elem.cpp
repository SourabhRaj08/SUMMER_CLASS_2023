#include <iostream>
#include <queue>
#include <stack>
using namespace std;

queue<int> reverseFirstK(queue<int> q, int k)
{
    stack<int> s;
    // Push the first k elements into the stack
    for (int i = 0; i < k; ++i) {
        s.push(q.front());
        q.pop();
    }

    // Push the reversed k elements back into the queue
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    // Push the remaining (n-k) elements to the queue without reversal
    for (int i = 0; i < q.size() - k; ++i) {
        q.push(q.front());
        q.pop();
    }

    return q;
}

int main()
{
    // Example usage:
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k = 3;

    cout << "Original queue: ";
    queue<int> originalQueue = q;
    while (!originalQueue.empty())
    {
        cout << originalQueue.front() << " ";
        originalQueue.pop();
    }

    cout << endl;

    // Reverse the first k elements of the queue
    q = reverseFirstK(q, k);

    cout << "Queue after reversing first " << k << " elements: ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;

    return 0;
}
