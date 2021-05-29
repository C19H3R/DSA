#include <iostream>
using namespace std;

void rightRotate(int arr[],int n,int outofplace,int cur){
    int tmp=arr[cur];
    for (int i = cur; i <outofplace; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[outofplace]=tmp;
    
};

int main(int argc, char const *argv[])
{
    
    int arr[6];
    int n=6;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }


    int outofplace=-1;
    for (int i = 0; i < n; i++)
    {
        if(outofplace>=0){
            if (   ((arr[i] >= 0) && (arr[outofplace] < 0))     ||      ((arr[i] < 0)&& (arr[outofplace] >= 0))){
                rightRotate(arr,n,outofplace,i);
            }
        }
    }
    
   



    for (int i = 0; i < n; i++)
    {
        /* code */
    }
    
    

    
    

    return 0;
}
