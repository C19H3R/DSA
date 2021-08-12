#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int currentSum=0;

    int minSum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(i<n){
        if(currentSum>0){
            currentSum=0;
        }
        currentSum+=arr[i];

        minSum=min(currentSum,minSum);
        }

    }
    

    cout << minSum;
    
    

    return 0;
}
