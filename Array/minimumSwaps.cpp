#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n=7;
    int arr[7];
    int k=5;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<=k)
            count++;
    }
    
    int bad=0;
    for (size_t i = 0; i < count; i++)
    {
        if(arr[i]>k)
            ++bad;
    }
    
    int ans=bad;

    for (int i = 0,j=count; j<n; ++i,++j)
    {
        if(arr[i]>k)
            --bad;
        
        if(arr[j]>k)
            ++bad;
    
        ans=min(ans,bad);

    }
    
    cout << ans;

    
    

    return 0;
}
