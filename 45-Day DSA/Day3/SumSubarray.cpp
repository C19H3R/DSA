#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int S;
    cin >>S;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >>arr[i];
    }
    int start=0;
    int end=1;

    int sum=arr[start]+arr[end];
    while (start<end&&end<n)
    {
        cout << start <<" "<<end <<" " <<sum<<endl;
        if(sum==S){
            cout<< "ans" << start <<" " <<endl;
            break;
        }else if(sum<S){
            end++;
            sum+=arr[end];
        }else if (sum>S)
        {
            sum-=arr[start];
            start++;
        }
        
    }
    
    return 0;
}
