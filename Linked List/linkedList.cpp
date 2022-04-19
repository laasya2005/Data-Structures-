// i. Implementation of Linked List

// Learnings: 1. Traversal of linked list
//            2. Inserting a node at end of linked list

#include<bits/stdc++.h>
using namespace std;

struct node{                                 // struct is a datatype with two fields to store data and address of next node( node*, which is pointer to node)
        int data;
        node* link;                          // pointers stores address 
    };

    node* A;                                 // A is head node


    
int main() {
	
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    
    A=NULL;                                 // Empty list, where A is head node

    node* temp= new node();                 // Inserting node into empty linked list, creating 1st node pointer (named temp) in heap memory (by using new operator)

    temp->data=2;                           // dereferencing temp pointer (by using ->) and writing values on data and link to new node
    temp->link=NULL;
    A=temp;                                // now head node (A) carries address of node (temp) in it.
    cout<<temp->data<<endl;

    temp=new node();                        // creating 2nd node in heap, at the end, now temp points to new node at end ( 2nd node)
    temp->data=4;
    temp->link=NULL;

    node *temp1=A;                          // *temp1 is pointer to node, which is pointing to head node, traversal of list till end until temp1 node reach null
    while(temp1->link !=NULL)
    {
    	temp1=temp1->link;	
    }
    
temp1->link=temp;                           // when the link part of temp1 is null , the while loop gets exited and temp variable carries address of 2nd node, connecting the link between 1st and 2nd node
cout<<temp->data;
}

    