#include <iostream>;

#include <iostream>
#include <stack>

using namespace std;

class Queuex
{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int x)
    {
        s1.push(x);
    }
    int pop(){
        if(s1.empty() && s2.empty()){
            cout <<"empty"<<endl;
            return -1;
        }
        if(s2.empty()){
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval=s2.top();
        s2.pop();
        return topval;
    }
    bool empty(){
        if(s1.empty()&&s2.empty()){
            return true;
        }
        return false;
    }
};

int main(int argc, char const *argv[])
{
    
    Queuex q;
    q.push(1354);
    q.push(3451);
    q.push(345);
    q.push(1345);
    cout <<"TEST";
    cout << q.empty();cout <<"TEST";
    cout << q.empty();cout <<"TEST";
    cout << q.empty();cout <<"TEST";
    cout << q.empty();
    q.push(1345);
    q.push(1345);
    cout <<"TEST";
    cout <<endl;
    cout <<q.pop();
    cout <<endl;
    cout <<"TEST";
    cout << q.empty();cout <<"TEST";
    cout << q.empty();cout <<"TEST";
    cout << q.empty();
    cout <<q.pop();
    cout <<endl;
    cout <<q.pop();
    cout <<endl;
    cout <<q.pop();
    cout <<endl;
    cout <<q.pop();
    cout <<endl;
    cout <<q.pop();
    cout <<endl;
    cout <<q.pop();
cout <<"TEST";
    cout << q.empty();
    return 0;
}
