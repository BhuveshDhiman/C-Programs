#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << " NULL\n";
}

void insertInFront(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    node *last;
    node *secondLast;
    node *curr = head;
    while (true)
    {
        if (curr->next->next == NULL)
        {
            secondLast = curr;
            last = curr->next;
            break;
        }
        curr = curr->next;
    }

    secondLast->next = NULL;
    last->next = head;
    head = last;
}

int main()
{

    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    // insertAtTail(head, 3);
    // insertAtTail(head, 4);
    // insertAtTail(head, 5);
    // insertAtTail(head, 6);

    display(head);

    insertInFront(head);
    display(head);

    return 0;
}