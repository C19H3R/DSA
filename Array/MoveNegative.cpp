#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int arr[10];
    const int n=10;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int arr2[n]={0};
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<0)
            arr2[i]=1;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    
    
    return 0;
}
