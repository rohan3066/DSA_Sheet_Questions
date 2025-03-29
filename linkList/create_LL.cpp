#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data,Node *next){
        this->data=data;
        this->next=next;
    }

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

void display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node *insertHead(Node *head,int val){
    Node *newNode=new Node(val);
    Node *temp=head;
    newNode->next=head;
    head=newNode;

    return newNode;
}

int deleteNode(Node *head){
    Node *temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    int data=temp->next->data;
    temp->next=NULL;
    return data;
}

int lengthLinkedList(Node *head){
    int len=0;
    Node *temp=head;

    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

int serachInLinkedList(Node *head,int val){
    int index=0;
    Node *temp=head;

    while(temp!=NULL){
        int data=temp->data;
        if(data==val){
            return index;
        }
        temp=temp->next;
        index++;
    }

    return -1;
}

int findMiddle(Node *head){
    if(head==NULL || head->next==NULL){
        return head->data;
    }
    Node *slow=head;
    Node *fast=head;

    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow->data;
}

Node *reverseLL(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node *prev=NULL;
    Node *temp=head;

    while(temp!=NULL){
        Node *front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }

    return prev;
}

Node *reverseLLReccur(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node *newNode=reverseLLReccur(head->next);
    head->next->next=head;
    head->next=NULL;
    return newNode;
}





int main(){
    Node *head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    Node *result1=insertHead(head,100);
    Node *result2=insertHead(head,15);
    Node *result3=insertHead(head,114);
    display(result3);
    // cout<<"Length : "<<lengthLinkedList(result)<<endl;
    // display(result);
    // cout<<"Length : "<<lengthLinkedList(result)<<endl;
    // cout<<serachInLinkedList(result,3)<<endl;

    int ans=findMiddle(result3);
    Node *temp=reverseLL(result3);
    display(temp);
    Node *temp1=reverseLLReccur(temp);
    display(temp1);
  

    return 0;
}