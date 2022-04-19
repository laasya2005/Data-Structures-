// iii. Insert a node at nth position 


#include<bits/stdc++.h>
using namespace std;


struct node{

        int data;
        node* next;
    };

    node* head;

void Insert (int data, int n) { // data in the linkedlist and n is the position at which data has to be inserted

node* temp1 = new node();// creating a node in linkedlist
temp1->data=data;
temp1->next=NULL;
if(n==1){ // insert at first position and when list is empty
	temp1->next=head;
	head = temp1; //adjust temp1 variable point to new head
	return; 
}

node* temp2 = head; // creating anothoer node and starting at head (head is 1st node)
for(int i=0;i<n-2;i++){ // running the loop till n-2 node 
	temp2 = temp2 -> next; // temp2 pointing to n-1 th node
}
temp1 -> next = temp2 -> next;   // connecting the link 
temp2 -> next = temp1;
}



void Print()
{  
cout<<"List is\n";
 node*temp2=head;
 while(temp2!=NULL)
 {  
  cout<<temp2->data;
  cout<<"\t";
  temp2=temp2->next; // traversing the whole list
 }
 cout<<endl;
}

int main() {
	
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    
    head=NULL; // empty list
    Insert(2,1); // List: 2
    Insert(3,2); //List: 2,3
    Insert(4,1); //List: 4,2,3
    Insert(5,2); //List: 4,5,2,3

   Print ();
}
