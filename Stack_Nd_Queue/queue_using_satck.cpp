#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    stack<int>s1,s2;

    void push(int x){
        while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);

        while(s2.size()){
            s1.push(s2.top());
            s2.pop();
        }

    }

    int pop(){
        int poped=s1.top();
        s1.pop();
        return poped;
    }

};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(14);
    cout<<q.pop()<<endl;
    return 0;
}