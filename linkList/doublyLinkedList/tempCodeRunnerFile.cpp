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

Node *deleteHead(Node *head){
    if(head==NULL || head->next==NULL){

        return NULL; 
    }

    head=head->next;
    head->prev=NULL;
}

Node *deleteEnd(Node *head){
    if(head==NULL || head->next==NULL){

        return NULL; 
    }

    Node *temp=head;

    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    
    temp->next=NULL;


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
    Node *temp1=deleteEnd(temp);
        while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->next;

    }
    cout<<endl;

    Node *temp2=deleteHead(temp1);
        while(temp2!=NULL){
        cout<<temp2->data<<" ";
        temp2=temp2->next;

    }

    return 0;
}