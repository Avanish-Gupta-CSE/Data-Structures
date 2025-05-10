#include <iostream>
#include <string.h>
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

class LinkedList
{
private:
    Node *head;
    Node *tail;
    int length;

public:
    LinkedList(int value)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length = 1;
    }

    ~LinkedList()
    {
        Node *tmp = head;
        while (tmp)
        {
            head = head->next;
            delete tmp;
            tmp = head;
        }
    }

    void printList()
    {
        Node *tmp = head;
        while (tmp)
        {
            cout << tmp->value << endl;
            tmp = tmp->next;
        }
    }

    void getHead()
    {
        cout << "Head: " << head->value << endl;
    }

    void getTail()
    {
        cout << "Tail: " << tail->value << endl;
    }

    void getLength()
    {
        cout << "Length: " << length << endl;
    }

    void append(int value)
    {
        Node *newNode = new Node(value);

        if (head)
        {
            tail->next = newNode;
            tail = newNode;
        }
        else{
            head = newNode;
            tail = newNode;
        }
    }

    void deleteLast()
    {
        Node* tmp = head;
        
        
    }

    void prepend(int value)
    {
        
    }
};

int main()
{

    return 0;
}