#include <iostream>
#include "SinglyLinkedList.h"
using namespace std;

// CSC249
// M4HW - Bronze Attempt
// Joshua Eckman
// 3/5/2024

int main() {
  bool leave = false;
  int silver_pieces = 20;
  LinkedList shop;
  LinkedList inventory; 

  // Item List
  Item sword ("Sword", 4);
  Item shield ("Shield", 3);
  Item staff ("Staff", 7);
  Item bow ("Bow", 2);
  Item hp ("Healing Potion", 10);
  Item empty ("Empty Potion", 0);

  Node* nodeA = new Node(sword);
  Node* nodeB = new Node(shield);
  Node* nodeC = new Node(staff);
  Node* nodeD = new Node(bow);
  Node* nodeE = new Node(hp);

  // Add Items to Shop Catalog
  shop.Append(nodeA);
  shop.Append(nodeB);
  shop.Append(nodeC);
  shop.Append(nodeD);
  shop.Append(nodeE);
  cout << "Shop starts with:" << endl;
  shop.PrintList(cout);
  inventory.Append(empty);

  
  cout << "Hello, welcome to the shoppe, what would you like to do?" << endl;
  while (leave != true) {
    int menu_choice;
    string name = "null";
    //int value = 0;

    // Display Choices & Input
    cout << "1) View Inventory" << endl;
    cout << "2) Buy From Shop" << endl;
    cout << "3) Leave" << endl;
    cin >> menu_choice;

    cout << endl;
    if (menu_choice == 1) {
      // View Inventory
      cout << "Player Inventory:" << endl;
      cout << "Silver Pieces: " << silver_pieces << endl;
      inventory.PrintList(cout);
    }
    else if (menu_choice == 2) {
      // Display Shop Inventory
      cout << "Shop Inventory: " << endl;
      shop.PrintList(cout);
      cout << endl;
      
      // TODO: Buy Items
      cout << "What is the name of the item you wish to buy?" << endl;
      cout << "Name: ";
      cin >> name;
      //cout << "Value: ";
      //cin >> value;

      //shop.moveNode(shop.head, inventory.head, name);
      cout << endl;
    }
    else if (menu_choice == 3) {
      // Leave
      leave = true;
      cout << "Have a good day!" << endl;
    }
    else {
      // Invalid Input
      cout << "Invalid choice, please try again." << endl;
      cout << "DEBUG:" << endl;
      cout << "SHOP" << endl;
      shop.PrintList(cout);
      cout << "INV" << endl;
      inventory.PrintList(cout);

    cout << endl;
    } 
  }
}