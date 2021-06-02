#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n=6;
    int arr[6];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int minval=arr[0];
    int maxval=arr[0];
    int presentProduct=1;
    int maxProduct=INT32_MIN;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]<0)
            swap(maxval,minval);
        maxval=max(maxval*arr[i],arr[i]);
        minval=min(arr[i],minval*arr[i]);


        maxProduct=max(maxProduct,maxval);

    }
    
    cout<<maxProduct;
    

    return 0;
}
