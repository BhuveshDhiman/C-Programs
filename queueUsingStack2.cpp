#include <iostream>
#include <stack>
using namespace std;

class queue
{
    stack<int> s1;

public:
    void push(int x) // TC - O(1)
    {
        s1.push(x);
    }
    // Using 1 stack and the call stack
    int pop() // TC - O(n)
    {
        if (s1.empty())
        {
            cout << "Queue is empty";
            return -1;
        }

        int x = s1.top();
        s1.pop();

        if (s1.empty())
        {
            return x;
        }

        int item = pop();
        s1.push(x);
        return item;
    }

    bool empty()
    {
        if (s1.empty())
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.pop();
    q.push(5);
    cout << q.pop();
    cout << q.pop();
    cout << q.pop();
    cout << q.pop();
    cout << q.pop();

    return 0;
}