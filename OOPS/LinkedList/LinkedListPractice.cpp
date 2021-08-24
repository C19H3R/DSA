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
        Node* nextNode;

        while (curr!=NULL)
        {
            nextNode=curr->next;
            curr->next=prevNode;

            prevNode=curr;
            curr=nextNode;    
        }
        
        head=prevNode;
    }
    
    Node * Reverse_recursion(Node * head){
        
        if(head==NULL|| head->next==NULL)
            return head;

        Node* newHead=Reverse_recursion(head->next);
        head->next->next=head;
        head->next=NULL;
    }

    void DeleteNode(int val){
        Node* tmp=head;
        while (tmp->next->data!=val)
        {
            tmp=tmp->next;
        }
        Node * toDelete=tmp->next;
        tmp->next=tmp->next->next;
        delete toDelete;
    }
    void Pop_Front(){
        Node* toDelete=head;

        head=head->next;
        delete toDelete;
    }
    void pop_Back(){
        Node * tmp=head;

        while (tmp->next->next!=NULL)
        {
            tmp=tmp->next;
        }

        Node * toDelete=tmp->next;
        tmp->next=NULL;
        delete toDelete;
        

    }
    void Reverse_k(int k){
        Node* prevNode=NULL;
        Node* curr=head;
        Node* nextNode;
        Node* end=head;
        int count=0;
        while (curr!=NULL&&count<k)
        {
            nextNode=curr->next;
            curr->next=prevNode;
            prevNode=curr;
            curr=nextNode;
            count++;
        }
        end->next=curr;
        head=prevNode;
        
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
    secondList.DeleteNode(122);
    secondList.Display();
    secondList.Pop_Front();
    secondList.Display();
    secondList.pop_Back();
    secondList.Display();
    secondList.Reverse_k(2);
    secondList.Display();

    List thirdList(1);
    thirdList.Push_Back(2);
    thirdList.Push_Back(3);
    thirdList.Push_Back(4);
    thirdList.Push_Back(5);
    thirdList.Push_Back(6);
    thirdList.Push_Back(7);

    thirdList.Display();
    thirdList.Reverse_k(3);
    thirdList.Display();

     return 0;
}
