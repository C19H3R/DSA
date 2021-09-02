#include<iostream>
#include<string>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st,int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
    cout << "at bottom ";

    int topele=st.top();
    st.pop();
    insertAtBottom(st,ele);
    st.push(topele);
}

void reverse(stack<int> &st){
    if(st.empty()){
        return;
    }
    int ele=st.top();
    st.pop();
    reverse(st);
    cout << "reverse ";
    insertAtBottom(st,ele);
} 

int main(int argc, char const *argv[])
{
    stack<int> st;
    st.push(1);
    st.push(4);
    st.push(3);
    st.push(2);

    reverse(st);
    while (!st.empty())
    {
        cout << st.top()<<endl;
        st.pop();
    }

    

}
