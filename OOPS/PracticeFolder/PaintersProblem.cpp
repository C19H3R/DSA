#include<iostream>
using namespace std;

bool isFeasable(int arr[] , int n,int painters,int curr_min){
    int curr_sum=0;
    int paintersRequired=1;
    
    //cout << curr_min<<" ";
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>curr_min)
            return false;

        if(arr[i]+curr_sum>curr_min){
            paintersRequired++;
            curr_sum=arr[i];
            if(paintersRequired>painters)
                return false;
        }else
        {
            curr_sum+=arr[i];
        }
        
    }
    return true;
    
}

int result(int arr[],int n,int painters){
    int start=0;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    int end=sum;
    int result=0;
    while (start<=end)
    {
        int mid=(start+end)/2;
        if(isFeasable(arr,n,painters,mid)){
            result=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return result;
    
}

int main(int argc, char const *argv[])
{
    int arr[]={10,20,30,40};
    int painters=2;
    cout << result(arr,4,painters);
    return 0;
}
