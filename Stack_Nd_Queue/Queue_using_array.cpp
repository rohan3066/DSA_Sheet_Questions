#include<bits/stdc++.h>
using namespace std;

class Queue{
    int *arr;
    int maxSize;
    int start,end,currSize;

    public:

    Queue(){
        maxSize=6;
        arr=new int[maxSize];
        start=-1;
        end=-1;
        currSize=0;
    }

    void push(int x){
        if(currSize==maxSize){
            cout<<"Queue is full"<<endl;
        }

        if(end==-1){
            end=0;
            start=0;
        }

        else{
            end=(end+1)%maxSize;
        }

        arr[end]=x;
        currSize++;
    }

    int pop(){
        if(currSize==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }

        int poped=arr[start];

        if(currSize==1){
            start=-1;
            end=-1;
        }
        else{
            start=(start+1)%maxSize;
        }

        currSize--;
        return poped;
    }

    int Top(){
        if(start==-1){
            return -1;
        }

        return arr[start];
    }

    int Size(){
        return currSize;
    }

    void display(){
        if(currSize==0){
            cout<<"Queue is empty"<<endl;
        }
        for(int i=start;i<=end;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.display();
    q.pop();
    q.display();
    cout<<q.Top()<<endl;
    cout<<q.Size()<<endl;
    q.push(4);
    q.push(9);
    q.push(47);
    q.display();

    return 0;
}