/* Izzy Ward    CPSC 1375    June 25, 2023
*    INSTRUCTIONS:
*      Start with given code example for a linked list
*      Add a new function: node* search(node* head, int key); that searches through a linked list
*      for a node storing the value that is the same as the key.
*      It returns a pointer pointing to it if it finds it, else a nullptr. 
*      Add a function: void duplicate (node* head, int key); that uses the search function to find
*      a node with the key, then makes a duplicate of it & adds it to the end of the linked list if found.  */

#include <iostream>
#include <string>
#include <vector>

#define nullptr NULL
using namespace std;

struct node
{
  int data;
  node* next;
  node* search(node*head, int key)
  {
    return nullptr;
  }
};

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

void duplicate (node* head, int key)
{
  if (!ptr)
    return nullptr;
  else
  {
    root = newNode;
    currnode = root;
    while (currnode != NULL)
        {
          duplinode = currnode;
          if (currnode -> info == insertNode)
            {
              currnode = currnode -> rLink;
              duplinode -> rLink = newNode;
              if ((newNode -> info) <= (currnode -> info))
                  newNode -> rLink = currnode;
              else
                  newNode -> lLink = currnode;
            }
            else if (currnode -> info > insertNode)
                currnode = currnode -> lLink;
            else
                currnode = currnode -> rLink;
        }

        if (duplinode -> info < insertNode)
            duplinode -> rLink = newNode;
        else if (duplinode -> info > insertNode)
            duplinode -> lLink = newNode;
    }
}

