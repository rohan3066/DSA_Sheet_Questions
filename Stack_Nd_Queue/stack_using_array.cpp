#include<bits/stdc++.h>
using namespace std;


class Stack{
    int size;
    int * arr;
    int top;

    public:

    Stack(){
        size=1000;
        arr=new int[size];
        top=-1;
    }

    void push(int x){
        if(top==size-1){
            cout<<"Stack Overflow"<<endl;
        }
        top++;
        arr[top]=x;
    }

    int pop(){
        if(top==-1){
            return -1;
        }

        int deleted_int=arr[top];
        top--;
        return deleted_int;
    }

    int Top(){
        return arr[top];
    }

    int Size(){
        return top+1;
    }

    void display(){
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


};
int main(){

    Stack st;

    st.push(40);
    st.push(30);
    st.push(70);
    st.display();
    cout<<st.pop();
    cout<<endl;
    st.display();
    cout<<st.Top()<<endl;
    cout<<st.Size()<<endl;


    return 0;
}