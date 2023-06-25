/* Izzy Ward    CPSC 1375    June 25, 2023
*    INSTRUCTIONS:
*      Start with given code example for a linked list
*      Add a new function: node* search(node* head, int key); that searches through a linked list
*      for a node storing the value that is the same as the key.
*      It returns a pointer pointing to it if it finds it, else a nullptr.  */

#include <iostream>
#include <string>
#include <vector>

node* search(node* head, int key)
{
  node* currnode = head;
  while (currnode != nullptr)
  {
    if (currnode -> data == key)
    {
      return currnode;
    }
    currnode = currnode -> next;
  }
  return nullptr;
}
