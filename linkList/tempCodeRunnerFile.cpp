#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node *next;

    Node(int data1,Node *next1){
        data=data1;
        next=next1;
    }

    Node(int data1){
        data=data1;
        next=NULL;
    }


};


void printLL(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;

    }
}

Node *insertNode(Node *head,int val){
    Node *temp=new Node(val,head);
    head=temp;
    return head;

}

Node *deleteLL(Node *head){
    Node *temp=head;
    if(head==NULL || head->next==NULL){
        return NULL;
    }

    while(temp->next->next!=NULL){
        temp=temp->next;
    }

    delete temp->next;

    temp->next=NULL;

    return head;



}


int main(){
    Node *head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    // printLL(head);
    head=insertNode(head,0);
    printLL(head);
    cout<<endl;
    Node *temp=deleteLL(head);
    printLL(temp);



    return 0;
}