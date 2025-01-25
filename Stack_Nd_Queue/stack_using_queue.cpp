#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    queue<int>q;

    void push(int x){
        int size=q.size();
        q.push(x);
        for(int i=0;i<size;i++){
            q.push(q.front());
            q.pop();
        }

    }

    int popValue(){
        int poped=q.front();
        q.pop();
        return poped;
    }

};

int main(){
    Stack s;
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);
    cout<<s.popValue()<<endl;
    return 0;
}