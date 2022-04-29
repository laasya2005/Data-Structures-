//iv. Reverse a Linked list

#include<iostream>
#include <stack>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

void reverse(Node** head){

    Node* temp = *head; // we traverse the linked list using temporary pointer variable
   if(*head == NULL) return;

   stack<struct Node*> s; // stack of type pointer to node

    // push the data to stack
    while (temp!=NULL)
    {
        s.push(temp); // we push each element in the stack through temp variable
        temp = temp->next; // traversal of temp variable
        
    }

    temp = s.top(); // store the value of temp variable as the top element of the stack
    *head = temp; // head node will be having the address of top of stack node(i.e last node in linked list)
    s.pop(); // popping the last element in the linked list

    //reverse
    while (!s.empty()) // while stack is not empty
    {
        temp->next = s.top(); // here temp is pointing at the last node of linked list
        s.pop();
        temp = temp->next; // temp moving in backward direction of the linked list
    } 
    temp->next = NULL; // setting the link part of last node in the reverse list as null
}

void push(Node **head, int value)
{

    Node *temphead = *head;

    Node *temp = new Node();
    temp->value = value;
    temp->next = NULL;


    if (*head == NULL)
    {
        *head = temp;
        return;
    }

    while (temphead->next != NULL)
    {
        temphead = temphead->next;
    }
    temphead->next = temp;
}

// To print the linked list
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << "\n";
        temp = temp->next;
    }
}

int main(){

    Node *head = NULL;

    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
   
    print(head);

    reverse(&head);
    
    cout << "rev: "<< "\n";
    print(head);

    return 0;
}