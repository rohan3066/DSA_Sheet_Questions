#include<bits/stdc++.h>
using namespace std;

class StackNode{
    public:
    int data;
    StackNode* next;
    StackNode(int data){
        this->data = data;
        next = NULL;
    }

};

class Stack{
    StackNode* top;
    int size;
    public:
    Stack(){
        top = NULL;
        size = 0;
    }

    void push(int x){
        StackNode* newNode=new StackNode(x);
        newNode->next=top;
        top=newNode;
        size++;
    }

    int pop(){
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        int x=top->data;
        StackNode* temp=top;
        top=top->next;
        delete temp;
        size--;
        return x;
    }

    bool isEmpty(){
        return (top == NULL);
    }

    int stackPeek(){
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return top->data;
    }

    void display(){
        StackNode* temp = top;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;

        }
        cout<<endl;
    }

};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    cout<<s.isEmpty()<<endl;
    cout<<s.stackPeek()<<endl;

    return 0;
}