#include <iostream>

using namespace std;

class Queue
{
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int x)
        {
            data = x;
            next = NULL;
        }
    };

public:
    Node *front = NULL;
    Node *back = NULL;

    Queue(int val)
    {
        Node *newNode = new Node(val);

        front = newNode;
        back = newNode;
    }

    void enQueue(int x)
    {
        Node *newNode = new Node(x);

        if (front == NULL)
        {
            front = newNode;
            back = newNode;
            return;
        }
        back->next = newNode;
        back = back->next;
    }

    void deQueue()
    {
        if (front == NULL)
        {
            cout << "already empty" << endl;
            return;
        }

        Node *toDelete = front;
        front = front->next;
        if (front == NULL)
        {
            back = NULL;
        }
        delete toDelete;
    }

    void peek()
    {
        if (front == NULL)
        {
            cout << "already empty" << endl;
            return;
        }
        cout << front->data << endl;
    }

    void isEmpty()
    {
        if (front == NULL)
        {
            cout << "True" << endl;
        }
        else
            cout << "False" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Queue q(1);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    q.enQueue(6);
    q.peek();
    q.deQueue();
    q.peek();
    q.deQueue();
    q.peek();
    q.deQueue();
    q.peek();
    q.deQueue();
    q.peek();
    q.isEmpty();

    q.deQueue();
    q.peek();
    q.isEmpty();
    q.enQueue(4);
    q.enQueue(5);
    q.enQueue(6);
    q.peek();
    q.deQueue();
    q.peek();
    q.deQueue();
    q.peek();
    q.deQueue();
    q.peek();
    q.deQueue();
    q.peek();
    q.isEmpty();

    q.deQueue();
    q.peek();
    q.isEmpty();
    q.enQueue(4);
    q.enQueue(5);
    q.enQueue(6);
    q.peek();
    q.deQueue();
    q.isEmpty();
    return 0;
}
