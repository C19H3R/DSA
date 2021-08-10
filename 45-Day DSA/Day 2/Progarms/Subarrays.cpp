#include<iostream>

using namespace std;

int sumOfSubArray(int arr[],int start,int end){
    int sum=0;
    for (int i = start; i <= end; i++)
    {
        sum+=arr[i];
    }
    
    return sum;
}


int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum+=sumOfSubArray(arr,i,j);
            cout <<sumOfSubArray(arr,i,j) <<endl;
        }
    }
    
    cout << sum;
    
    return 0;
}
