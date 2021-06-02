#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n=6;
    int x=51;
    int arr[6];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Initialize current sum and minimum length
    int curr_sum=0;
    int min_length=n+1;
    // Initialize starting and ending indexes
    int start=0,end=0;
    
    while (end<n)
    {
        while (curr_sum<=x&&end<n)
        {
            curr_sum+=arr[end++];
        }
        while (curr_sum>x&&start<n)
        {
            if(end-start<min_length){
                min_length=end-start;
            }
            curr_sum-=arr[start++];
        }
        
    }
    
  

    return 0;
}
