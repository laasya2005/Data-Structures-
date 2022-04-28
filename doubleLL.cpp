// 1. Implementation of Doubly Linked List

/* 1. InsertAtHead (x)
   2. InsertAtTail (x)
   3. Print()
   4. ReversePrint() */

#include<bits/stdc++.h>
using namespace std;

struct Node  {
	int data;
	Node* next;
	Node* prev;
};

Node* head; // global variable - pointer to head node.

//Creates a new Node of type struct node and returns pointer to it in GetNewNode function. 
struct Node* GetNewNode(int x) {

	Node* newNode = new Node(); // creating a node in heap memory and access to this memory always happens through pointer variable
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode; // pointer of newNode is returned
}

//Inserts a Node at head of doubly linked list
void InsertAtHead(int x) {

	Node* newNode = GetNewNode(x); // pointer of newNode in getNewNode function is received by NewNode in InsertAtHead function
// newNode is local variable to its function i.e InsertAtHead of type pointer to node
	
	if(head == NULL) { // when linked list is empty
		head = newNode; // setting address stored in newNode variable as address of head node
		return;
	}
// Inserting a node when the list is not empty
	head->prev = newNode; 
	newNode->next = head; 
	head = newNode; // creating new link, by pointing head node address to the new node address at beginning
}

//Inserts a Node at tail of Doubly linked list
void InsertAtTail(int x) {
	Node* temp = head;
	Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	while(temp->next != NULL) temp = temp->next; // Go To last Node
	temp->next = newNode;
	newNode->prev = temp;
}

//Prints all the elements in linked list in forward traversal order
void Print() {
	Node* temp = head; // we take temporary pointer to node and set it to head
	printf("Forward: ");
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->next; // this statement for going to the next node
	}
	printf("\n");
}

//Prints all elements in linked list in reverse traversal order. 
void ReversePrint() {
	Node* temp = head;
	if(temp == NULL) return; // empty list, exit
	// Going to last Node
	while(temp->next != NULL) {
		temp = temp->next;
	}
	// Traversing backward using prev pointer
	printf("Reverse: ");
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->prev;
	}
	printf("\n");
}

int main() {

	/*Driver code to test the implementation*/
	head = NULL; // empty list. set head as NULL. 
	
	// Calling an Insert and printing list both in forward as well as reverse direction. 
	InsertAtTail(2); Print(); ReversePrint();
	InsertAtTail(4); Print(); ReversePrint();
	InsertAtHead(6); Print(); ReversePrint();
	InsertAtTail(8); Print(); ReversePrint();
	
}

