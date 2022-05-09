//3. Finding the height of a binary tree

#include<bits/stdc++.h>
using namespace std;

//Definition of Node for Binary search tree
struct BstNode {
    int data; 
    BstNode* left;
    BstNode* right;
};

// Function to create a new Node in heap
BstNode* GetNewNode(int data) {
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// To insert data in BST, returns address of root node 
BstNode* Insert(BstNode* root,int data) {
    if(root == NULL) { // empty tree
        root = GetNewNode(data);
    }
    // if data to be inserted is lesser, insert in left subtree. 
    else if(data <= root->data) {
        root->left = Insert(root->left,data);
    }
    // else, insert in right subtree. 
    else {
        root->right = Insert(root->right,data);
    }
    return root;
} 
///////////////////////////////////////////////////////
int height (struct BstNode *root) {
    if (root == NULL) {
        return -1;
    }
    else {
        int left = height (root->left);
        int right = height (root->right);

        int height = (left < right) ? right+1 : left+1;
        return height;
    }
}
///////////////////////////////////////////////////////
int main() {
    
    BstNode* root = NULL;  // Creating an empty tree
    /*Code to test the logic*/
    root = Insert(root,15); 
    root = Insert(root,10); 
    root = Insert(root,20);
    root = Insert(root,25);
    root = Insert(root,8);
    root = Insert(root,12);

   cout<< height(root)<< endl;

}