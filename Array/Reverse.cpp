#include<iostream>
using namespace std;
void ReverseArray(int[],int[]);


int main(int argc, char const *argv[])
{
    int arr[5];
    int arr2[4];

    for (int i = 0; i < 5; i++)
    {
        cin>> arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cin>> arr2[i];
    }
    
    

    ReverseArray(arr,arr2);

    for (int i = 0; i < 5; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<< endl;
    for (int i = 0; i < 4; i++)
    {
        cout<< arr2[i]<<" ";
    }
    
    
    return 0;
}

void ReverseArray(int arr[],int arr2[]){
    int start=0;
    int end=4;

    while (start<end)
    {
        
        //swap
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

    start=0;
    end=3;

    while ( start<end)
    {
        int temp=arr2[start];
        arr2[start]=arr2[end];
        arr2[end]=temp;

        start++;
        end--;
    }
    
    
}

