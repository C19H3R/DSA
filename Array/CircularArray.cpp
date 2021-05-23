#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[5];
    int n=5;
    for (int i = 0; i <n; i++)
    {
        cin >> arr[i];
    }

int moveby;
cin >> moveby;

for (int i = 0; i < moveby; i++)
{
    int lastElement=arr[n-1];

    for (int i = n-1; i>0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=lastElement;
}

    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    
    
    
    
    return 0;
}
