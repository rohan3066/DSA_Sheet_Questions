#include<bits/stdc++.h>
using namespace std;

struct inorder{
    int data;
    struct inorder*left;
    struct inorder*right;

    inorder(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }

};

void inorderTraversal(struct inorder*node){
    if(node==NULL){
        return;
    }

    inorderTraversal(node->left);
    cout<<node->data<<" ";
    inorderTraversal(node->right);

}

int main(){
    inorder *root = new inorder(8);
    root->left=new inorder(3);
    root->right=new inorder(10);
    root->left->left=new inorder(1);
    root->left->right=new inorder(6);
    root->right->right=new inorder(14);
    root->right->right->left=new inorder(13);
    root->left->right->left=new inorder(4);
    root->left->right->right=new inorder(7);
    inorderTraversal(root);
    return 0;
}