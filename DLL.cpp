#include <iostream>
#include <string.h>
using namespace std;

class Node {
public:
  int value;
  Node *next;
  Node *prev;

  Node(int value) {
    this->value = value;
    next = nullptr;
    prev = nullptr;
  }
};

class DoublyLinkedList {
private:
  Node *head;
  Node *tail;
  int length;

public:
  // 1. constructor
  DoublyLinkedList(int value) {
    Node *newNode = new Node(value);
    head = newNode;
    tail = newNode;
    length = 1;
  }
  // 2. destructor
  ~DoublyLinkedList() {
    Node *tmp = head;
    while (tmp) {
      head = tmp->next;
      delete tmp;
      tmp = head;
    }
  }

  // 3. other functions
  void printList() {
    Node *tmp = head;
    while (tmp) {
      cout << tmp->value << endl;
      tmp = tmp->next;
    }
  }

  void getHead() { cout << "Head: " << head->value << endl; }

  void getTail() { cout << "Tail: " << tail->value << endl; }

  void getLength() { cout << "Length : " << length << endl; }

  // 4. append
  void append(int value) {
    Node *newNode = new Node(value);
    if (length == 0) {
      head = newNode;
      tail = newNode;
    } else {
      tail->next = newNode;
      newNode->prev = tail;
      tail = newNode;
    }
    length++;
  }

  // 5. deleteLast()
  void deleteLast() {
    if (length == 0)
      return;

    Node *tmp = tail;
    if (length == 1) {
      head = nullptr;
      tail = nullptr;
    } else {
      tail = tail->prev;
      tail->next = nullptr;
    }
    delete tmp;
    length--;
  }

  void prepend(int value) {
    Node *newNode = new Node(value);

    if (length == 0) {
      head = newNode;
      tail = newNode;
    } else {
      newNode->next = head;
      head->prev = newNode;
      head = newNode;
    }
    length++;
  }

  void deleteFirst() {
    if (length == 0)
      return;

    Node *tmp = head;
    if (length == 1) {
      head = nullptr;
      tail = nullptr;
    } else {
      head = head->next;
      head->prev = nullptr;
    }
    delete tmp;
    length--;
  }

  Node *get(int index) {
    if (index < 0 || index >= length)
      return nullptr;

    Node *tmp = head;
    if (index < length / 2) {
      for (int i = 0; i < index; i++) {
        tmp = tmp->next;
      }
    } else {
      tmp = tail;
      for (int i = length - 1; i > index; i--) {
        tmp = tmp->prev;
      }
    }
    return tmp;
  }

  bool set(int index, int value) {
    Node *tmp = get(index);

    if (tmp) {
      tmp->value = value;
      return true;
    }
    return false;
  }

  bool insert(int index, int value) {
    if (index < 0 || index > length)
      return false;

    if (index == 0) {
      prepend(value);
      return true;
    }
    if (index == length) {
      append(value);
      return true;
    }
    Node *newNode = new Node(value);
    Node *before = get(index - 1);
    Node *after = before->next;

    newNode->prev = before;
    newNode->next = after;
    before->next = newNode;
    after->prev = newNode;
    length++;
    return true;
  }

  void deleteNode(int index) {
    if (index < 0 || index >= length)
      return;
    if (index == 0)
      return deleteFirst();
    if (index == length - 1)
      return deleteLast();

    Node *tmp = get(index);
    (tmp->next)->prev = tmp->prev;
    (tmp->prev)->next = tmp->next;
    delete tmp;
    length--;
    return;
  }
};

int main() {
  DoublyLinkedList *myDLL = new DoublyLinkedList(0);
  myDLL->append(1);
  myDLL->append(2);
  myDLL->append(3);
  myDLL->append(4);
  myDLL->append(5);

  myDLL->deleteNode(4);
  myDLL->printList();

  return 0;
}