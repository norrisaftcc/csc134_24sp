// students version
#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

#include <iostream>
using namespace std;

class Item {
  public:
    string name;
    int value;

    Item () {}
    Item (string inputName, int inputValue) {
      name = inputName;
      value = inputValue;
    }
};

class Node {
public:
  Item item;
  Node* next;

  Node(Item initialData) {
    item = initialData;
    next = nullptr;
  }
};

class LinkedList {
//private:
   //Node* head;
   //Node* tail;

public:
   Node* head; //temp
   Node* tail; //temp

  LinkedList() {
      head = nullptr;
      tail = nullptr;
   }

  virtual ~LinkedList() {
    Node* currentNode = head;
    while (currentNode) {
      Node* toBeDeleted = currentNode;
      currentNode = currentNode->next;
      delete toBeDeleted;
    }
  }

  void Append(Node* newNode) {
    if (head == nullptr) {
      head = newNode;
      tail = newNode;
    }
    else {
      tail->next = newNode;
      tail = newNode;
    }
  }

  void Prepend(Node* newNode) {
    if (head == nullptr) {
      head = newNode;
      tail = newNode;
    }
    else {
      newNode->next = head;
      head = newNode;
    }
  }
  // TODO: Fix Format
  void PrintList(ostream& printStream, const string& separator = ", ") {
    Node* node = head;
    if (node) {
      // Head node is not preceded by separator
      printStream << node->item.name << "  " << node->item.value << "sp";
      node = node->next;
    }
    while (node) {
      printStream << endl << node->item.name << "  " << node->item.value << "sp";
      node = node->next;
    }
    printStream << endl;
  }

  // Move Node Test
  Node* moveNode(Node* sourceHead, Node* destHead, string name) {
    Node* prev = nullptr;
    Node* curr = sourceHead;
    
    // Find the node to be moved in the source list
    while (curr != nullptr && curr->item.name != name) {
        prev = curr;
        curr = curr->next;
    }

    if (curr == nullptr) {
        // Node not found
        return sourceHead;
    }

    // Remove the node from the source list
    if (prev == nullptr) {
      sourceHead = curr->next;
    }
    else {
      prev->next = curr->next;
    }

   
    // Insert the node at the head of the destination list
    curr->next = destHead;
    destHead = curr;
    return destHead;
  }

  void InsertAfter(Node* currentNode, Node* newNode) {
    if (head == nullptr) {
      head = newNode;
      tail = newNode;
    }
    else if (currentNode == tail) {
      tail->next = newNode;
      tail = newNode;
    }
    else {
      newNode->next = currentNode->next;
      currentNode->next = newNode;
    }
  }

  void RemoveAfter(Node* currentNode) {
    if (currentNode == nullptr && head) {
      // Special case: remove head
      Node* nodeBeingRemoved = head;
      head = head->next;
      delete nodeBeingRemoved;

      if (head == nullptr) {
        // Last item was removed
        tail = nullptr;
      }
    }
    else if (currentNode->next) {
      Node* nodeBeingRemoved = currentNode->next;
      Node* succeedingNode = currentNode->next->next;
      currentNode->next = succeedingNode;
      delete nodeBeingRemoved;
      if (succeedingNode == nullptr) {
        // Remove tail
        tail = currentNode;
      }
    }
  }
};

#endif