#include<bits/stdc++.h>
using namespace std;

class QueueNode{
    public:
    int data;
    QueueNode* next;
    QueueNode(int data){
        this->data = data;
        this->next = NULL;
    }
};


class Queue{
    public:
    QueueNode *front,*end=NULL;
    int size=0;

    void enqueue(int data){
        QueueNode* newNode = new QueueNode(data);
        if(end==NULL){
            front=end=newNode;
        }
        end->next=newNode;
        end=newNode;
        size++;
    }

    int dequeue(){
        if(front==NULL){
            return -1;
        }
        int x=front->data;
        QueueNode *temp=front;
        front=front->next;
        delete temp;
        size--;
        return x;

    }

    void diplay(){
        QueueNode* temp = front;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }


};

int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(20);
    q.enqueue(30);
    q.diplay();
    q.dequeue();
    q.diplay();
    return 0;
}
