// vi. Print elements of a linked list in forward and reverse order using recursion 


#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

 void Print(Node* ptrHead) { //Prints the output
    if(ptrHead == NULL) return; //Exit condition
    cout << " " << ptrHead->data; //First print the value in the Node
    Print(ptrHead->next); //Recursive call
    

}

void ReversePrint(Node* ptrHead) { //Reverse the output
    if(ptrHead == NULL)
        return; //Exit condition
    ReversePrint(ptrHead->next); //Recursive call
 
    cout << " " << ptrHead->data; //First print the value in the Node

}


Node* Insert(Node* head, int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->next = NULL;
    if(head == NULL)
        head = temp;
    else {
        Node* temp1 = head;
        while(temp1->next != NULL)
            temp1 = temp1->next;
            temp1->next = temp;
    }
    return head;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    Node* head = NULL; //Local variable
    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 5);
    Print(head); // 2,4,6,5
    cout<< endl;
    ReversePrint(head); // 5,6,4,2


    return 0;
}


