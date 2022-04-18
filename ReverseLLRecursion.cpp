 // vii. Reverse a linked list using recursion

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* Insert(Node *head,int data) {
    Node *temp1 = new Node;
    temp1 -> data = data;
    temp1 -> next = nullptr;
    if (head == nullptr) head = temp1;
    else {
        Node *temp2= head;
        while(temp2 -> next != nullptr) {
            temp2 = temp2->next;
        }
        temp2 -> next = temp1;
    }
    return head;
};

Node* RevRecursion(Node *head) {
    Node *temp1 = new Node;
    Node *temp2 = new Node;
    if (head->next == nullptr) {
        return head; // returns head when it sees null at the end of linked list 
    }
    else {
        temp1 =RevRecursion(head->next); // t1 stores the last node value , and prints it at the beginning
        temp2 =head->next;
        temp2->next = head; // t2 generates link in reverse order 
        head->next = nullptr;
    }
    return temp1;
};

void Print(Node *p) {  // Node *p is a local variable
    if (p==nullptr) return;  //Exit condition
    cout << p->data << " ";       // First print the value in the node
    Print(p->next);              // Recursive call
};

int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Node *head = nullptr;   // local variable
    head = Insert(head,2);  // add node at the end of the list
    head = Insert(head,4);
    head = Insert(head,6);
    head = Insert(head,5);// List 2
    Print(head);
    cout << endl;
    head = RevRecursion(head);
    Print(head);
    cout << endl;
    return 0;
}
