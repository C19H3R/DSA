#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int k=3;
    
    int n=5;
    int arr[5];
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    for (int i = 0; i < n; i++)
    {
        if(arr[i]>k)
            arr[i]=arr[i]-k;
        else
            arr[i]=arr[i]+k;
    }
    int max=INT32_MIN;
    int min=INT32_MAX;

    for (int i = 0; i < n; i++)
    {
        max=max>arr[i]?max:arr[i];
        min=min<arr[i]?min:arr[i];
    }

    cout<<max<<" "<<min;
    
    
    return 0;
}
