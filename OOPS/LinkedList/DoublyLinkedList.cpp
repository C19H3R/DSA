#include<iostream>
using namespace std;

class DoublyList{

    class Node{
        public:
        int data;
        Node* prev;
        Node* next;
        Node(int val){
            data=val;
            prev=NULL;
            next=NULL;
        }

    };

    public:
    Node* head=NULL;
    DoublyList(int val){
        Node* newNode=new Node(val);
        head=newNode;
    }
    DoublyList(){
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
        newNode->prev=tmp;

    }
    void PushFront(int val){
        Node* newNode=new Node(val);
        if(head==NULL)
        {
            head=newNode;
            return;
        }

        head->prev=newNode;
        newNode->next=head;
        head=newNode;
    }
    void Display(){
        Node* tmp=head;

        while (tmp!=NULL)
        {
            cout << tmp->data<<"<->";
            tmp=tmp->next;
        }

        cout << "NULL"<<endl;
        
    }
    void Delete(int pos){
        Node* tmp=head;
        int count=1;
        while (tmp!=NULL&& count!=pos)
        {
            tmp=tmp->next;
            count ++;
        }
        if(tmp->next==NULL){
            tmp->prev->next=NULL;
            tmp->prev=NULL;
            delete tmp;
            return;
        }
        if(tmp->prev==NULL){
            head=tmp->next;
            head->prev=NULL;
            delete tmp;
            return;
        }
        tmp->prev->next=tmp->next;
        tmp->next->prev=tmp->prev;
        delete(tmp);
    }

};

int main(int argc, char const *argv[])
{
    DoublyList list;
    list.Push_Back(1);
    list.Push_Back(2);
    list.Push_Back(3);
    list.Push_Back(4);
    list.Push_Back(5);

    list.Display();
    list.Delete(1);
    list.Display();
    return 0;
}




