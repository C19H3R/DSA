#include<iostream>

using namespace std;
#define n 20
class queue{
    int* arr;
    int front;
    int back;

    public:
    queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }

    void enque(int x){
        if(back==n-1){
            cout << "Queue overflow";
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1){
            front++;
        }
    }

    void deque(){
        if(front==-1||front>back){
            cout << "No element in queue";
            return;
        }
        front++;
    }

    void peek(){
        if(front==-1||front>back){
            cout << "No element in queue";
            return;
        }
        cout << arr[front]<<endl;
    }

    bool isEmpty(){
        if(front==-1||front>back){
            cout << "No element in queue";
            return true;
        }
        return false;
    }
};


int main(int argc, char const *argv[])
{
    queue q;
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    q.peek();
    q.deque();
    q.peek();

    q.deque();
    q.peek();

    q.deque();
    q.peek();

    q.deque();
    q.peek();

    q.isEmpty();
    return 0;
}
