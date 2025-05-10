#include <climits>
#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        next = nullptr;
    }
};

class Queue
{
private:
    Node *first;
    Node *last;
    int length;

public:
    Queue(int value)
    {
        Node *newNode = new Node(value);
        first = newNode;
        last = newNode;
        length = 1;
    }

    void printQueue()
    {
        Node *tmp = first;
        while (tmp)
        {
            cout << tmp->value << endl;
            tmp = tmp->next;
        }
    }

    void getFirst() { cout << "First: " << first->value << endl; }

    void getlast() { cout << "Last; " << last->value << endl; }

    void getLength() { cout << "Length: " << length << endl; }

    void enqueue(int value)
    {
        Node *newNode = new Node(value);
        if (length == 0)
        {
            first = newNode;
            last = newNode;
        }
        else
        {
            last->next = newNode;
            last = newNode;
        }
        length++;
    }

    int dequeue()
    {
        if (length == 0)
            return INT_MIN;

        Node *tmp = first;
        int dequeuedValue = first->value;
        if (length == 1)
        {
            first = nullptr;
            last = nullptr;
        }
        else
        {
            first = first->next;
        }
        delete tmp;
        length--;
        return dequeuedValue;
    }
};

int main(void)
{

    Queue *myQueue = new Queue(0);

    myQueue->getFirst();
    myQueue->getlast();
    myQueue->getLength();

    myQueue->printQueue();

    myQueue->enqueue(1);
    myQueue->enqueue(2);
    myQueue->printQueue();

    myQueue->dequeue();
    myQueue->printQueue();
}