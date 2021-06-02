#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n=6;
    int arr[6];
    int k=24;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        int minIndex=i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[minIndex])
                minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
    }

    int l=0,r=0;
    bool found=false;
    for (int i = 0; i < n-2; i++)
    {
        cout<<i;
        l=i+1;
        
        r=n-1;
        while (l<r)
        {
            if(arr[i]+arr[l]+arr[r]==k){
                found=true;
                i=n;
                break;
            }else if (arr[i]+arr[l]+arr[r]<k)
                l++;
            else if (arr[i]+arr[l]+arr[r]>k)
                r--;
        }
    }
    
    cout << found<<" fsdasdfas";
    
    

    
    

    return 0;
}

