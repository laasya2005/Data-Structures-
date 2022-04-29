// ii. Linked List implementation of stacks

// Inserting node at the beginning and deleting the node at the beginning of the stack 

#include <iostream>
using namespace std;
class Stack
{
    public:
        struct Node
        {
            int data;
            Node* link;
        };
        struct Node* top; // top is global variable
    public:
        Stack()
        {
            top=NULL; // stack is empty
        }
        void Push(int x) // Insertion of element at the beginning of the linked list
        {
            Node* NewNode = new Node(); // creating a node
            NewNode->data = x;
            NewNode ->link = top;
            top = NewNode;
        }
        void Pop() // deleting the node at the beginning of the stack 
        {
            Node* temp= top;
            if (top==NULL) // if stack is empty
                return;

            temp = top;
            top=top->link; // when stack is not empty
            delete (temp);
        }
        void Print()
        {
            Node* temp = top;
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->link;
            }
            cout<<endl;
        }
        int IsEmpty()
        {
            if (top==NULL)
                return 1;
            return 0;
        }
};
int main()
{
    Stack S;
    S.Push(5); S.Print();
    S.Push(6); S.Print();
    S.Push(8); S.Print();
    S.Push(9); S.Print();
    S.Pop();   S.Print();
    S.Pop();   S.Print();
    //S.top();

    return 0;
}