#include<bits/stdc++.h>
using namespace std;

struct postOrder
{
    /* data */
    int data;
    postOrder *left;
    postOrder *right;

    postOrder(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void postOrderTraversal(struct postOrder *node){
    if(node==NULL){
        return;
    }
    postOrderTraversal(node->left);
    postOrderTraversal(node->right);
    cout<<node->data<<" ";
}



int main(){
    postOrder *root = new postOrder(8);
    root->left=new postOrder(3);
    root->right=new postOrder(10);
    root->left->left=new postOrder(1);
    root->left->right=new postOrder(6);
    root->right->right=new postOrder(14);
    root->right->right->left=new postOrder(13);
    root->left->right->left=new postOrder(4);
    root->left->right->right=new postOrder(7);
    postOrderTraversal(root);
    return 0;
}