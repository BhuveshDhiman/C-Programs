#include <iostream>
using namespace std;

#define n 20
class queue
{
    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue overflow\n";
            return;
        }

        back++;
        arr[back] = x;

        // Increment front if it is -1 only
        if (front == -1)
        {
            front++;
        }
    }

    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements in Queue\n";
            return;
        }

        front++;
    }

    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements in Queue\n";
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if (front == -1 || front > back)
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
    q.push(5);

    cout << q.peek() << "\n";
    q.pop();

    cout << q.peek() << "\n";
    q.pop();

    cout << q.peek() << "\n";
    q.pop();

    cout << q.peek() << "\n";
    q.pop();

    cout << q.peek() << "\n";
    q.pop();

    cout << "\n";
    cout << q.empty();
    return 0;
}