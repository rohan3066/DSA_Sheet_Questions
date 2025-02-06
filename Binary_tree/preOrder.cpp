#include<bits/stdc++.h>

using namespace std;

struct preOrder
{
    int data;
    preOrder *left, *right;

    preOrder(int data){
        this->data = data;
        left = right = NULL;
    }
};


void preOrderTraversal(preOrder *node){
    if(node == NULL){
        return;
    }
    cout << node->data << " ";
    preOrderTraversal(node->left);
    preOrderTraversal(node->right);
}


int main(){
    preOrder *root = new preOrder(8);
    root->left=new preOrder(3);
    root->right=new preOrder(10);
    root->left->left=new preOrder(1);
    root->left->right=new preOrder(6);
    root->right->right=new preOrder(14);
    root->right->right->left=new preOrder(13);
    root->left->right->left=new preOrder(4);
    root->left->right->right=new preOrder(7);
    preOrderTraversal(root);

    return 0;
}