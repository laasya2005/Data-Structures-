// v. Reverse a linked list - Iterative method

// 1. Traverse the whole list and adjust the link part of node to previous node instead of next node in list


#include<bits/stdc++.h>
using namespace std;

struct Node {
 int data;
 Node* next;
}; 

//Node* head;

Node* Reverse(Node* head) {

 Node *current, *prev, *next; // next is the local variable in the reverse function
 current = head;
 prev = NULL;

 while (current != NULL) {
  next = current->next; // next stores the address of link of current node
  current->next = prev; // building previous link (backward node linking)
  prev = current; // pointing prev pointer to current node pointer (i.e Move prev and current one step forward)
  current = next;

 }

 head = prev; // prev node points the link of last node, head address should be stored in it
 return head;
}

Node* Insert(Node* head, int data) { // insert function takes two arguments i.e address of head node and data to be inserted
 
 Node* temp = new Node;
 temp->data = data; temp->next = NULL;
 
 if (head == NULL) head = temp;
 else { 
 	Node* temp1 = head;
  while (temp1->next != NULL) temp1 = temp1->next;
  temp1->next = temp;
 }
 return head;
}

void Print(Node* head) {
 while (head != NULL) {
  printf("%d", head->data);
  head = head->next;
 }

cout << endl;

}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 Node* head = NULL;  //local variable
 head = Insert(head, 2);
 head = Insert(head, 4);
 head = Insert(head, 6);
 head = Insert(head, 8);
 cout << head;
 head = Reverse(head);
 cout << head;
}