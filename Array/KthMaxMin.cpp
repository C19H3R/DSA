#include<iostream>
using namespace std;

void PrintKthLargestAndSmallest(int[],int);

int main(int argc, char const *argv[])
{
    int arr[10];

    int k=4;

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];\
    }

    PrintKthLargestAndSmallest(arr,k);


    return 0;
}

void PrintKthLargestAndSmallest(int arr[],int k){
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10-i; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    

    cout << "Max : "<< arr[9-k]<< endl;
    cout << "Min : "<< arr[k];
    
    
}