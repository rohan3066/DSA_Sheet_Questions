#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int data,Node *next){
        this->data=data;
        this->next=next;
    }

    Node (int data){
        this->data=data;
        this->next=nullptr;
    }


};

int findLen(Node *slow){
    Node *temp=slow;
    int len=1;
    while(temp->next!=slow){
        temp=temp->next;
        len++;

    }
    return len;
}


int lenOfLoop(Node *head){
    if(head==NULL || head->next==NULL){
        return 0;
    }

    Node *slow=head;
    Node *fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return findLen(slow);
        }
    }

    return -1;
}

Node *reverseLL(Node *head){
    if(head==NULL || head->next!=NULL){
        return head;
    }

    Node *newNode=reverseLL(head->next);

    head->next->next=head;
    head->next=NULL;


    return newNode;
}

bool isPalindrom(Node *head){
    if(head==NULL || head->next==NULL){
        return true;
    }
    Node *slow=head;
    Node *fast=head;

    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    Node *newHead=reverseLL(slow->next);
    Node *first=head;
    Node *second=newHead;

    while(second!=NULL){
        if(first->data!=second->data){
            reverseLL(newHead);
            return false;

        }

        first=first->next;
        second=second->next;

    }

    reverseLL(newHead);

    return true;
}

Node *segregrateEvenOdd(Node *head){
    Node *oddHead=new Node(-1),*oddTail=oddHead;
    Node *evenHead=new Node(-1),*evenTail=evenHead;
    Node *curr=head,*temp;

    while(curr!=NULL){
        temp=curr;
        curr=curr->next;
        temp->next=NULL;

        if(temp->data &1){
            oddTail->next=temp;
            oddTail=temp;
        }
        else{
            evenTail->next=temp;
            evenTail=temp;
        }
    }
    evenTail->next=oddHead->next;
    return evenHead->next;

}





int main(){

    Node *head=new Node(1);
    Node *second=new Node(3);
    Node *third=new Node(5);
    Node *fourth=new Node(11);
    Node *fifth=new Node(20);
    Node *sixth=new Node(32);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=NULL;

    // cout<<isPalindrom(head)<<endl;
    Node *res=segregrateEvenOdd(head);
    while(res!=NULL){
        cout<<res->data<<" ";
        res=res->next;
    }
    cout<<endl;


    cout<<"Don mhantyat don-------------------------->!";

    return 0;
}
