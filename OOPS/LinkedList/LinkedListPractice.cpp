#include <iostream>
using namespace std;

class List{
    class Node{
        public:
        int data;
        Node* next;//address
        Node(int data){
            this->data=data;
            next=NULL;
        }
    };
    public:
    Node* head;

    List(int val){
        Node* node=new Node(val);
        head=node;
    }
    List(){
        head=NULL;
    }
    void Push_Back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            return;
        }
        Node* tmp=head;
        while (tmp->next!=NULL)
        {
            tmp=tmp->next;
        }
        tmp->next=newNode;
    }
    void Display(){
        Node* tmp=head;
        while (tmp!=NULL)
        {
            cout << (tmp->data)<<"->";
            tmp=tmp->next;
        }
        cout << "NULL"<<endl;
    }

    void Push_front(int val){
        Node* newNode=new Node(val);
        newNode->next=head;
        head=newNode;
    }

    void Reverse(){
        cout<<"REVERSED"<<endl;
        Node* curr=head;
        Node* prevNode=NULL;
        Node* nextNode=head;

        while (nextNode!=NULL)
        {
            curr=nextNode;
            nextNode=curr->next;
            curr->next=prevNode;
            prevNode=curr;
            head=curr;
        }
        
    }

};

int main(int argc, char const *argv[])
{
    List newList(10);
    newList.Push_Back(20);
    newList.Push_Back(40); 
    newList.Display();
    List secondList;
    secondList.Push_Back(10);
     secondList.Push_front(100);
    secondList.Push_Back(122);
    secondList.Push_Back(144);
    secondList.Push_front(12220);
    secondList.Display();
    secondList.Reverse();
    secondList.Display();
    return 0;
}
