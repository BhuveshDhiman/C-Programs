#include <iostream>
#include <stack>
using namespace std;

class queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int x) // TC - O(1)
    {
        s1.push(x);
    }
    // Using 2 stacks
    int pop() // TC - O(n)
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is empty";
            return -1;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int topVal = s2.top();
        s2.pop();
        return topVal;
    }

    bool empty()
    {
        if (s1.empty() && s2.empty())
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