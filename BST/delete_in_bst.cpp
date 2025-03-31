#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *findMin(node *root)
{
    if (root->left)
    {
        root = root->left;
    }

    return root;
}

node *deleteNode(node *root, int key)
{
    if (root == NULL)
    {
        return nullptr;
    }

    if (root->data > key)
    {
        root->left = deleteNode(root->left, key);
    }

    else if (root->data < key)
    {
        root->right = deleteNode(root->right, key);
    }

    else
    {
        if(!root->left){
            node *temp=root->right;
            delete root;

            return temp;
        }

        if(!root->right){
            node *temp=root->left;
            delete root;
            return temp;
        }


        node *temp=findMin(root->right);
        root->data=temp->data;
        root->right=deleteNode(root->right,temp->data);
    }

    return root;
}

void inorder(node *root, vector<int> &arr)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left, arr);
    arr.push_back(root->data);
    inorder(root->right, arr);
}
int main()
{
    node *root = new node(10);
    root->left = new node(7);
    root->right = new node(15);
    root->left->left = new node(6);
    root->left->right = new node(8);
    root->right->right = new node(16);
    root->right->left = new node(14);

    vector<int> arr;
    inorder(root, arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    vector<int>ans;

    node *temp=deleteNode(root,8);

    inorder(temp,ans);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    cout << endl;
    return 0;
}