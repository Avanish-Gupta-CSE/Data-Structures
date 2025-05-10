#include <bits/stdc++.h>
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

class Stack
{
private:
    Node *top;
    int height;

public:
    Stack(int value)
    {
        Node *newNode = new Node(value);
        top = newNode;
        height = 1;
    }

    void printStack()
    {
        Node *tmp = top;
        while (tmp)
        {
            cout << tmp->value << endl;
            tmp = tmp->next;
        }
    }

    void getTop() { cout << "Top: " << top->value << endl; }

    void getHeight() { cout << "Height: " << height << endl; }

    void push(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        height++;
    }

    int pop()
    {
        if (height == 0)
            return -1;

        Node *tmp = top;
        int poppedValue = top->value;

        top = top->next;
        delete tmp;
        height--;

        return poppedValue;
    }
};

int main(void)
{

    Stack *s1 = new Stack(2);

    s1->push(1);
    s1->pop();
    s1->pop();
    s1->printStack();
    s1->getTop();
    s1->getHeight();
}