#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int data1,Node *next1,Node *prev1){
        data=data1;
        next=next1;
        prev=prev1;
    }


    Node(int data1){
        data=data1;
        next=NULL;
        prev=NULL;
    }
};


Node *insertAtEnd(Node *head,int val){
    Node *temp1=new Node(val);
    Node *temp=head;

    if(head==NULL){
        return temp1;
    }

    while(temp->next!=NULL){
        temp=temp->next;

    }
    temp->next=temp1;
    temp1->prev=temp;

    return head;
}

int main(){
    Node *head=new Node(1);
    head->next=new Node(2);
    head->next->prev=head;
    Node *temp=insertAtEnd(head,13);
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;

    return 0;
}