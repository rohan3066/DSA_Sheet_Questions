#include<bits/stdc++.h>
using namespace std;

class BST{
    public:
    int data;
    BST* left;
    BST* right;
    

    BST(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }


};

void inorder(BST*root,vector<int>&arr){
    if(root==NULL){
        return;
    }
    inorder(root->left,arr);
    arr.push_back(root->data);
    inorder(root->right,arr);


}


bool searchBST(BST *root,int val){
    if(root==NULL){
        return false;
    }

    while(root!=NULL && root->data!=val){
        if(root->data<val){
            root=root->right;
        }

        if(root->data>val){
            root=root->left;
        }
    }

    if(root==NULL){
        return false;
    }

    return true;
}

int ceil(BST *root,int val){
    if(root==NULL){
        return -1;

    }

    int ceil=-1;

    while(root){
        if(root->data==val){
            ceil=root->data;
            return ceil;
        }

        if(root->data<val){
            root=root->right;
        }

        else{
            ceil=root->data;
            root=root->left;
        }

    }

    return ceil;
}

int floor(BST *root,int val){
    if(root==NULL){
        return -1;

    }

    int floor=-1;

    while(root){
        if(root->data==val){
            floor=root->data;
            return floor;
        }

        if(root->data<val){
            floor=root->data;
            root=root->right;
        }

        else{
            
            root=root->left;
        }

    }

    return floor;
}


int minBst(BST *root){
    if(root==NULL){
        return -1;
    }

    while(root->left!=NULL){
        root=root->left;
    }

    return root->data;
}

void insert(BST *root,int val){
    if(root==NULL){
        root=new BST(val);
        return ;
    }

    BST *curr=root;

    while(true){
        if(curr->data>=val){
            if(curr->left!=NULL){
                curr=curr->left;
            }

            else{
                curr->left=new BST(val);
                break;
            }

        }

        else{
            if(curr->right!=nullptr){
                curr=curr->right;
            }

            else{
                curr->right=new BST(val);
                break;
            }

        }
    }
}
int main(){
    BST *root;
    root=new BST(20);
    root->left=new BST(18);
    root->right=new BST(25);
    root->left->left=new BST(14);
    root->left->right=new BST(19);
    root->right->left=new BST(24);
    root->right->right=new BST(30);
    vector<int>arr;
    insert(root,50);
    inorder(root,arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<searchBST(root,24)<<endl;

    cout<<minBst(root)<<endl;

    cout<<ceil(root,23)<<endl;
    cout<<floor(root,23)<<endl;




    return 0;
}