#include<iostream>
using namespace std;

#pragma region 
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next=NULL;
//     }
// };

// void insertATTail(Node* &head,int val){

//     Node* n=new Node(val);
    
//     if(head==NULL){
//         head=new Node(val);
//         return;
//     }
        
//     Node* temp=head;
//     while (temp->next!=NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next=n;
    
    
// }

// void insertATHead(Node* &head,int val){

//     Node* n=new Node(val);
    
//     if(head==NULL){
//         head=new Node(val);
//         return;
//     }
    
//     Node* temp=head;
//     n->next=head;
//     head=n;
    
    
// }

// void display(Node* head){
//     Node* temp=head;
//     while (temp!=NULL){
//         cout << temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL" <<endl;
    
// }

#pragma endregion


class Node{
    public:
    int data;
    Node* next;

    Node(int val){

        data=val;
        next=NULL;
    }
};

class LinkedList{
    public:
    Node *head=NULL;
    LinkedList(int val){    
        Node* node=new Node(val);
        head=node;
    }

    void Push_back(int val){
        Node* node=new Node(val);
        Node* tmp=head;
        while (tmp->next!=NULL)
        {
            tmp=tmp->next;
        }
        tmp->next=node;
        }
    void Display(){
        Node* tmp=head;
        while (tmp!=NULL)
        {
            cout <<(tmp->data)<<"->";
            tmp=tmp->next;
        }  
        cout << "NULL"<<endl;
        tmp=head; 
         while (tmp!=NULL)
        {
            cout <<(tmp->next)<<"->";
            tmp=tmp->next;
        } 
        cout << "NULL";
    }
};



int main(int argc, char const *argv[])
{
   LinkedList list(1);
    list.Push_back(2);
    list.Push_back(2);
    list.Push_back(2);
    list.Display();

    return 0;
}


