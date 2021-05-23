#include <iostream>
using namespace std;
void  MaxHeapSolution();
void  MinHeapSolution();
void swap(int* x,int* y);
int kthSmallest(int arr[],int n,int k);
int main(int argc, char const *argv[])
{
    int arr[10];
    int n=10;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int k=0;

    cout<< kthSmallest(arr,n,k);
    return 0;
   
    
   
}
 
 void MaxHeapSolution(){

 }

 void MinHeapSolution(){
     
 }




class MinHeap{
    int* heapArr;//pointer to array of elements in heap
    int capacity;//max size of min heap
    int heap_size;//current size
    
    public:
    MinHeap(int a[],int size);
    void MinHeapify(int i);
    int parent(int i){return (i-1)/2;}
    int left(int i){return (2*i+1);}
    int right(int i){return (2*i+2);}

    int extractMin();
    int getMin(){return heapArr[0];}

};
MinHeap::MinHeap(int a[],int size){
    heap_size=size;
    heapArr=a;
    int i=(heap_size-1)/2;
    while (i>=0){
        MinHeapify(i);
        i--;
    }
}
int MinHeap::extractMin(){
    if(heap_size==0)
        return INT32_MAX;

    int root=heapArr[0];

    if (heap_size>1)
    {
        heapArr[0]=heapArr[heap_size-1];
        MinHeapify(0);    
    }
    heap_size--;

    return root;
    
}
void MinHeap::MinHeapify(int i){
    int l=left(i);
    int r=right(i);
    int smallest=i;
    if(l<heap_size&&heapArr[l]<heapArr[i])
        smallest=l;
    if(r<heap_size&& heapArr[r]<heapArr[smallest])
        smallest =r;
    if(smallest!=i){
        swap(&heapArr[i],&heapArr[smallest]);
        MinHeapify(smallest);
    }
}
void swap(int* x,int* y ){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int kthSmallest(int arr[],int n,int k){
    MinHeap mh(arr,n);
    for (int i = 0; i < k-1; i++)
    {
        mh.extractMin();
    }
    return mh.getMin();
}

class MaxHeap{
    int* heap_arr;
    int heapsize;
    int capacity;
    public:
    int left(int i){return i*2+1;}
    int right(int i){return i*2+2;}
    int parent(int i){return (i-1)/2;}
    void MaxHeapify(int i);
    MaxHeap(int arr[],int size);
    int extractMax();
    int getMax(){return heap_arr[0];}

    int replaceMax(int x){
        heap_arr[0]=x;
        MaxHeapify(0);
    }

};

MaxHeap::MaxHeap(int arr[],int size){
    heap_arr=arr;
    heapsize=size;
    int i=(heapsize-1)/2;
    while (i>=0)
    {
        MaxHeapify(i);
    }   
}

void MaxHeap::MaxHeapify(int i){
    int l=i*2+1;
    int r=i*2+2;
    int largest = i;
    if(l<heapsize&&heap_arr[l]>heap_arr[largest])
        largest=l;
    if(r<heapsize&&heap_arr[r]>heap_arr[largest])
        largest=r;
    if(largest!=i){
        swap(&heap_arr[i],&heap_arr[largest]);
        MaxHeapify(largest);
    }
}

int kthSamllestMax(){
    
}

