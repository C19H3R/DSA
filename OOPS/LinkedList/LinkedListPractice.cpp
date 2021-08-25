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
    List(Node * head2){
        head=head2;
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

    void CheckCycle(){
        Node* slow=head;
        Node* fast=head;
        bool isCycle=false;

        while (fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                isCycle=true;
                break;
            }
        }
        if(isCycle)
        cout << "Present"<<endl;
        else
        cout << "Not Present"<<endl;
    }
    void RemoveCycle(){
        Node* slow=head;
        Node* fast=head;
        bool isCycle=false;

        do{
            slow=slow->next;
            fast=fast->next->next;
        }while (slow!=fast);

        fast=head;
        while (slow->next!=fast->next)
        {
            slow=slow->next;
            fast=fast->next;
        }
        
        slow->next=NULL;
    }      
    void MakeCycle(int val){
        Node* tmp=head;
        Node* startNode;
        int count=1;
        while (tmp->next!=NULL)
        {
            if(count==val){
                startNode=tmp;
            }
            tmp=tmp->next;
            count++;
        }

        tmp->next=startNode;
        
    }
    int Length(){
        int count=1;
        Node* tmp=head;
        while (tmp->next!=NULL)
        {
            tmp=tmp->next;
        
            count ++;
        }
        return count;
    }
    void AppendLast_K(int k){
        int length=Length();
        int anitK=length-k;
        Node* tmp=head;
        Node* newTail;
        Node* newHead;
        int count=1;
        while (tmp->next!=NULL)
        {
            if(count==anitK){
                newTail=tmp;
                newHead=tmp->next;
            }
            tmp=tmp->next;
            count++;
        }
        Node* tail=tmp;
        newTail->next=NULL;
        tail->next=head;
        head=newHead;
        delete tail;
        delete newHead;
        delete newTail;
    }
    void kAppend(int k){
        Node* newHead;
        Node* newTail;
        Node* tail=head;
        int l=Length();
        k=k%l;
        int count=1;
        while (tail->next!=NULL)
        {
            if(count==l-k){
                newTail=tail;
            }
            if(count==l-k+1){
                newHead=tail;
            }
            tail=tail->next;
            count++;
        }
         newTail->next=NULL;
         tail->next=head;
         head=newHead;
    }
    Node* HeadPtr(){
        return head;
    }
    void intersect(List list2,int pos){
        Node* tmp=head;
        pos--;
        while (pos--)
        {
            tmp=tmp->next;
        }
        Node* tmp2=list2.HeadPtr();
        while (tmp2->next!=NULL)
        {
            tmp2=tmp2->next;
        }
        tmp2->next=tmp;
    }
    bool FindInterSection(List list2){
        Node* head2=list2.HeadPtr();
        int l=Length();
        int l2=list2.Length();
        int difference=abs(l-l2);

        Node* ptr1;
        Node* ptr2;
        if(l>l2){
            ptr1=head;
            ptr2=head2;
        }else{
            ptr1=head2;
            ptr2=head;
        }
        while (difference)
        {
            ptr1=ptr1->next;
            if(ptr1==NULL)
                return false;
            difference--;
        }
        while (ptr1->next!=NULL&&ptr2!=NULL)
        {
            if(ptr1==ptr2){
                return true;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;

        }
        return false;
        
    }
    List MergeSorted(List list2){
        Node* head2=list2.HeadPtr();
        Node* dummyHead=new Node(-100);
        Node* ptr3=dummyHead;
        Node* ptr1=head;
        Node* ptr2=head2;
        while (ptr1->next!=NULL&&ptr2->next!=NULL)
        {
            if(ptr1->data<ptr2->data){
                ptr3->data=ptr1->data;
                ptr1=ptr1->next;
            }else
            {
                ptr3->data=ptr2->data;
                ptr2=ptr2->next;
            }
        }
        List newList(dummyHead);
        return newList;
    }
    List MergeSorted(List l1,List l2){
        Node* p1=l1.HeadPtr();
        Node* p2=l2.HeadPtr();
        Node* dummyNode=new Node(-1);
        Node* p3=dummyNode;
        while (p1!=NULL&&p2!=NULL)
        {
            if(p1->data<p2->data){
                p3->next=p1;
                p1=p1->next;
            }else{
                p3->next=p2;
                p2=p2->next;
            }
            p3=p3->next;
        }
        while (p1!=NULL)
        {
            p3->next=p1;
            p1=p1->next;
            p3=p3->next;
        }
         while (p2!=NULL)
        {
            p3->next=p2;
            p2=p2->next;
            p3=p3->next;
        }
        
        List newList(dummyNode->next);
        return newList;
    }
   void EvenAfterOdd(){
       Node* odd=head;
       Node* even =head->next;
       Node* evenStart=even;

       while (odd->next!=NULL&&even->next!=NULL)
       {
           odd->next=even->next;
           odd=odd->next;
           even->next=odd->next;
           even=even->next;
       }

    //  if(odd->next!=NULL)
    //     even->next=NULL;
       odd->next=evenStart;

       
       
   }
};

int main(int argc, char const *argv[])
{
    // List newList(10);
    // newList.Push_Back(20);
    // newList.Push_Back(40); 
    // newList.Display();
    // List secondList;
    // secondList.Push_Back(10);
    // secondList.Push_front(100);
    // secondList.Push_Back(122);
    // secondList.Push_Back(144);
    // secondList.Push_front(12220);
    // secondList.Display();
    // secondList.Reverse();
    // secondList.Display();
    // secondList.DeleteNode(122);
    // secondList.Display();
    // secondList.Pop_Front();
    // secondList.Display();
    // secondList.pop_Back();
    // secondList.Display();
    // secondList.Reverse_k(2);
    // secondList.Display();

    // List thirdList(1);
    // thirdList.Push_Back(2);
    // thirdList.Push_Back(3);
    // thirdList.Push_Back(4);
    // thirdList.Push_Back(5);
    // thirdList.Push_Back(6);
    // thirdList.Push_Back(7);

    // thirdList.Display();
    // //thirdList.Reverse_k(3);
    // thirdList.Display();
    // thirdList.CheckCycle();
    // thirdList.MakeCycle(3);
    // thirdList.CheckCycle();
    // thirdList.RemoveCycle();
    // thirdList.CheckCycle();
    // thirdList.Display();
    // thirdList.kAppend(3);
    // thirdList.Display();
    // thirdList.intersect(secondList,3);
    // thirdList.Display();
    // secondList.Display();
    // cout <<thirdList.FindInterSection(secondList);
    // cout << thirdList.Length();
    List list1(1);
    list1.Push_Back(2);
    list1.Push_Back(3);
    list1.Push_Back(4);
    list1.Push_Back(5);
    list1.Display();
    list1.EvenAfterOdd();
    list1.Display();

    // List list2(1);
    // list2.Push_Back(6);
    // list2.Push_Back(13);
    // list2.Push_Back(17);
    // list2.Push_Back(28);
    // List list3(1);
    // list3= list1.MergeSorted(list1,list2);
    // list3.Display();
    return 0;
}