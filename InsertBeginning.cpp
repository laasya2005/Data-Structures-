// ii. Inserting a node at beginning 

#include<bits/stdc++.h>
using namespace std;

struct node{

        int data;
        node* link;
    };

    node* A;                          // A is head node, which is global variable


void Insert(int x)                    // Insert function, inserts the node at the beginning of the linked list
{
    node* temp= new node();           // creating 1st node in heap memory by using new operator
    temp->data=x;                   // Dereferencing temp pointer (->) so that we can access data part of node
    
    temp->link=A;
    A=temp;


    // temp->link=NULL;
    // A=temp;                           // Address of temp is given to head node


    // if(A!=NULL)                       // Inserting a node in front of that 1st node (INSERTING NODE AT BEGINNING OF LINKED LIST) 
    //                                   //traversal of list till end until temp node reach null
    
    // temp->link=A;                     // Assigning address of newly created node ( temp ) to head node , head node stored the address of 1st node
    // A=temp;                           // pointing head node to newly created node( temp )
}


void print()
{

    node *temp=A;                    // we use temp variable , which holds address of head node, we took temp variable because we donot want to modify head node address

                                    //because we donot want to modify head(A) cuz we will loose the reference of first node

    cout<<"The list is: ";


    while(temp != NULL)             //traversal of list till end until temp node reach null
    {
        cout<<temp->data;
        temp=temp->link;  
    }

    cout<<"endl";
}
    
int main() 
{
	
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    
    A=NULL;                         // Empty list, where A is head node
    
    int n,i,x;
    cout<<"How many numbers?";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"Enter the number";  // prompting the user to enter numbers into the linked list
        cin>>x;
        Insert(x);                 // inserting the new number typed by user into the linked list
        print();                   // While inserting elements in the linked list, we print the data
    }
}