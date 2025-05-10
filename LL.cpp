#include <iostream>
using namespace std;

// CREATE NODE CLASS HERE //
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
    // CREATE MEMBER VARIABLES HERE //
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
        while (head)
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
            cout << tmp->value << " ";
            tmp = tmp->next;
        }
    }

    void getHead()
    {
        cout << "\nHead: " << head->value << endl;
    }

    void getTail()
    {
        cout << "\nTail: " << tail->value << endl;
    }

    void getLength()
    {
        cout << "\nLength: " << length << endl;
    }

    void append(int value)
    {
        Node *newNode = new Node(value);

        if (head)
        {
            tail->next = newNode;
            tail = newNode;
        }
        else
        {
            head = newNode;
            tail = newNode;
        }
        length++;
    }

    void deleteLast()
    {
        if (length == 0)
        {
            cout << "Empty LL" << endl;
            return;
        }

        if (length == 1)
        {
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            Node *tmp = head;

            Node *pre = head;

            while (tmp->next)
            {
                pre = tmp;
                tmp = tmp->next;
            }
            tail = pre;
            tail->next = nullptr;
            delete tmp;

            // Node *tmp = head;
            // while (tmp->next->next)
            // {
            //     tmp = tmp->next;
            // }
            // tmp->next = nullptr;
            // tail = tmp;

            // length--;
        }
        length--;
    }

    void prepend(int value)
    {
        Node *newNode = new Node(value);
        if (length == 0)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
        length++;
    }

    void deleteFirst()
    {
        if (length == 0)
            return;

        if (length == 1)
        {
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            Node *tmp = head;
            head = head->next;
            delete tmp;
        }
        length--;
    }

    Node *get(int index)
    {
        if (index < 0 || index >= length)
        {
            cout << "Invalid Index" << endl;
            return nullptr;
        }
        Node *tmp = head;
        for (int i = 0; i < index; i++)
        {
            tmp = tmp->next;
        }
        return tmp;
    }

    bool set(int index, int value)
    {
        Node *tmp = get(index);

        if (tmp)
        {
            tmp->value = value;
            return true;
        }
        return false;
    }

    bool insert(int index, int value)
    {
        if (index < 0 || index > length)
            return false;

        if (index == 0)
        {
            prepend(value);
            return true;
        }
        if (index == length)
        {
            append(value);
            return true;
        }
        Node *newNode = new Node(value);
        Node *tmp = get(index - 1);

        newNode->next = tmp->next;
        tmp->next = newNode;
        length++;
        return true;
    }

    void deleteNode(int index)
    {
        if (index < 0 || index >= length)
            return;

        if (index == 0)
            return deleteFirst();

        if (index == length - 1)
            return deleteLast();

        Node *prev = get(index - 1);
        Node *tmp = prev->next;

        prev->next = tmp->next;
        delete tmp;
        length--;
    }

    void reverse()
    {
        Node *tmp = head;
        head = tail;
        tail = tmp;

        Node *before = nullptr;
        Node *after = tmp->next;

        for (int i = 0; i < length; i++)
        {
            after = tmp->next;
            tmp->next = before;
            before = tmp;
            tmp = after;
        }
    }
};

int main()
{

    LinkedList *myLinkedList = new LinkedList(4);

    myLinkedList->printList();

    myLinkedList->append(10);
    myLinkedList->append(20);

    cout << "\nLinked List:\n";
    myLinkedList->printList();

    myLinkedList->reverse();
    cout << "\nLinked List:\n";

    myLinkedList->printList();
    myLinkedList->getLength();

    /*
        EXPECTED OUTPUT:
        ----------------
        Head: 4
        Tail: 4
        Length: 1

        Linked List:
        4

    */
}
