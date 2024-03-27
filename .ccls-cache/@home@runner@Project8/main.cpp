/*
Team Members: Steph Borla and Fady Youssef
Course: CPSC 12221
Date Submitted: 3/20/2024
Assignment Name: Project 8
Description:
*/

#include <iostream>
using namespace std;

#include "main.h"

ListT::ListT()
{
 head = NULL;
 tail = NULL;
 length = 0;
}

ListT::~ListT()
{
 cout << "I'm the desctructor" << endl;
}

void ListT::PutItemH(itemType item)
{
 length = 0;
 node* tmp = new node;
 tmp->item = item;
 tmp->next = head;

 head = tmp; 
 if (length == 0)
  tail = tmp;  
 length++;
}

void ListT::Print() const
{
 node* cur = head;
 while(cur != NULL)
 {
  cout << cur->item << endl;
  cur = cur->next;
 }
}

/*
 pre: an instance of listT exists
 post: node containing itemIn is at the tail of the list 
 */ 
 void ListT::PutItemT(const itemType itemIn)
{
    length = 0;
    node* tmp = new node;
    tmp->item = itemIn;
    tmp->next = tail;
  
    tail = tmp; 
    if (length == 0)
     tail = tmp;  
    length++;
}

/*
 pre: an instance of ListT exists and is not empty
 post: Returns the contents pointed to by the head of the list 
 */
 itemType GetItemH() {
   node* head = new node;
  if (head != NULL)
    return head->item;
   else
    return itemType();
 }

/*
 pre: an instance of list exists and is not empty
 post: Returns the contents of the node at the tail of the list. 
 */
 itemType GetItemT() {
 node* tail = new node;
 if (tail != NULL)
   return tail->item;
  else
   return itemType(); }

 /*
 pre: an instance of list exists and is not empty
 post: node at the tail of the list is deleted 
 */
 void ListT::DeleteItemT(){
    if (tail != NULL) // If the list is not empty
    {
      node* tmp = tail; // Remember the first item
      tail = tail->next; // Update the tail to the second item
      delete tmp; // Delete the first item
      length--; // Decrease the length of the list
    }
    else // If the list is empty
      cout << "tail is deleted" << endl; // Print a message
 }

 /*
 pre: an instance of listT exists and is not empty
 post: Node pointed to by head is deleted 
 */
 void ListT::DeleteItemH()
{
   if (head != NULL) // If the list is not empty
   {
     node* tmp = head; // Remember the first item
     head = head->next; // Update the head to the second item
     delete tmp; // Delete the first item
     length--; // Decrease the length of the list
   }
   else // If the list is empty
     cout << "Head is deleted" << endl; // Print a message
}

/*
 pre: an instance of ListT exists and is not empty
 post: returns the number of nodes in the list that store target 
 */
 int FindItem(const itemType target)
{
  node* head = new node;
    int count = 0; // Start counting from zero
    node* cur = head; // Start at the beginning of the list
    while (cur!=NULL) // Keep going until the end of the list
      {
        if(cur->item == target) // If the current item matches the target
          count++; // Increase the count
        cur=cur->next; // Move to the next item
      }
    return count; // Return the total count
 }

 /*
 pre:  an instance of List exists and is not empty 
 post: deletes all nodes that store target.  Returns
       the number of nodes deleted 
 */
 int DeleteItem(const itemType target){
   return 0;
 }

// Function to check if the list is empty
 bool ListT::IsEmpty() const {
   if (head == NULL)
   return true; 
     else 
     return -1; // Return true if the list is empty, false otherwise
 }

/*
 pre: an instance of ListT exists
 post: returns length of the list 
 */
 int ListT::GetLength() const {
 return length;
 }