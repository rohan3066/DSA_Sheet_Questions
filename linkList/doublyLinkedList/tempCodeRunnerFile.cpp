#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *back;

    Node(int data,Node *next,Node *back){
        this->data=data;
        this->next=next;
        this->back=back;
    }

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->back=NULL;
    }

    
};

Node *display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node *insertHead(Node *head,int val){
    if(head==NULL){
        return new Node(val);
    }
    Node *newNode=new Node(val);
    Node *temp=head;

    newNode->next=head;
    head->back=newNode;
    head=newNode;
    return head;
}

Node *insertTail(Node *head,int val){
    Node *newNode=new Node(val);
    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=newNode;
    newNode->back=temp;
    return head;
}

Node *insertAt_Kth(Node *head,int val,int k){
    Node *newNode=new Node(val);
    if(k==0){
        return insertHead(head,val);
    }
    Node *temp=head;
    while(k!=0){
        temp=temp->next;
        k--;
    }
    Node *temp2=temp->next;
    temp->next=newNode;
    newNode->back=temp;
    newNode->next=temp2;

    return head;

}

int deleteHead(Node *head){
    if(head==NULL){
        return -1;
    }

    Node *temp=head;
    head=head->next;
    head->back=NULL;

    return temp->data;

}
int deleteTail(Node *head){
    if(head==NULL){
        return -1;
    }
    Node *temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    Node *temp2=temp->next;
    temp2->back=NULL;
    temp2->next=NULL;
    temp->next=NULL;
    return temp2->data;

}

Node *reverseDLL(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node *prev=NULL;
    Node*curr=head;

    while(curr!=NULL){
        prev=curr->back;
        curr->back=curr->next;
        curr->next=prev;
        curr=curr->back;
    }

    return prev->back;
}
int main(){
    Node *head=new Node(10);
    head->next=new Node(20,NULL,head);
    head->next->next=new Node(30,NULL,head->next);
    Node *res=insertHead(head,100);
    Node *res1=insertTail(head,10442);
    Node *res2=insertAt_Kth(head,522,2);
    display(res1);
    cout<<"deleted Node: "<<deleteHead(res2)<<endl;
    cout<<"deleted Node: "<<deleteTail(res2)<<endl;
    display(res2);
    Node *ans2=reverseDLL(res2);
    display(ans2);


    cout<<"Hello bhai logo......."<<endl;
    return 0;
}