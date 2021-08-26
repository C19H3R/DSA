#include<iostream>
#define n 100
using namespace std;

class Stack{
    int * arr;
    int top;
    public:
    Stack(){
        arr=new int[n];
        top=-1;
    }

    void Push(int x){
        if(top==n-1){
            cout <<"Stack Overflow";
            return;
        }
        top++;
        arr[top]=x;
    }

    void Pop(){
        if(top==-1){
            cout <<"No element to PoP";
            return ;
        }
        top--;
    }
    
    int Top(){
        if(top==-1){
            cout <<"No element in Stack";
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        return top==-1;
    }

};

int main(int argc, char const *argv[])
{
    Stack st;
    st.Push(10);
    st.Push(12);
    st.Push(125);
    cout << st.Top();
    cout << st.isEmpty();
    st.Pop();
    st.Pop();
    st.Pop();
    st.Pop();

    return 0;
}
