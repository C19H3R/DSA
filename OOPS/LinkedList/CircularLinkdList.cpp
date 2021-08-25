#include<iostream>

using namespace std;

class CircularList{
    class Node{
        public:
        int data;
        Node* next;
        Node(int val){
            data=val;
            next=NULL;
        }
    };
    public:
    Node* head;

    CircularList(int val){
        Node* newNode=new Node(val);
        head=newNode;
        head->next=head;
    }
    CircularList(){
        head=NULL;
    }

    void insertAtTail(int val){
        Node* newNode= new Node(val);
        Node* tmp=head;

        if(head==NULL){
            
            head=newNode;
            head->next=head;
            return;
        }
        while (tmp->next!=head)
        {
            tmp=tmp->next;
        }
        tmp->next=newNode;
        newNode->next=head;
    }
    void insertAtHead(int val){
        Node* newNode=new Node(val);
        Node* tmp=head;
        // while (tmp->next!=head);
        // {
        //     tmp=tmp->next;
        // }

        while (tmp->next!=head)
        {
            tmp=tmp->next;
        }
        
        
        tmp->next= newNode;
        newNode->next=head;
        head=newNode;
        
    }
    void Display(){
        Node* tmp=head;
        do{
            cout << tmp->data<<" ";
            tmp=tmp->next;
        }while(tmp!=head);
        
    }
    void Deletion(int pos){
        Node* tmp=head;

        if(pos==1){
            DeleteAtHead();
            return;
        }

        int count=1;
        while (count!=pos-1)
        {
            tmp=tmp->next;
            count ++;
        }
        Node* toDelete=tmp->next;
        tmp->next=tmp->next->next;

        delete toDelete;
    }

    void DeleteAtHead(){
        Node* tmp=head;
        while (tmp->next!=head)
        {
            tmp=tmp->next;
        }
        tmp->next=head->next;
        Node* toDelete=head;
        head=head->next;
        delete toDelete;
        
    }
};

int main(int argc, char const *argv[])
{
    CircularList list1(1);
    list1.insertAtHead(12);
    list1.insertAtHead(13);
     list1.insertAtHead(14);
     list1.insertAtHead(15);
    list1.insertAtTail(123);
    list1.insertAtTail(122343);
    list1.insertAtTail(1243);
    list1.insertAtTail(1243);

    list1.Display();
    cout << endl;
    list1.DeleteAtHead();
    list1.Display();
     list1.Display();
    cout << endl;
    list1.Deletion(2);
    list1.Display();


    return 0;
}

