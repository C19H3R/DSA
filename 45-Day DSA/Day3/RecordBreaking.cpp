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

    int maxTillNow=INT32_MIN;

    int recordBreakingCount=0;


    for (int i = 0; i < n-1; i++)
    {
        
        cout << arr[i] <<" ";
        maxTillNow=arr[i]>maxTillNow?arr[i]:maxTillNow;

        if(maxTillNow==arr[i]&&arr[i]>arr[i+1]){
            recordBreakingCount++;
            cout << " tick ";
        }
            cout << " cross ";
            cout <<endl;
    }
    
    if(maxTillNow==arr[n-1]){
        recordBreakingCount++;
    }
    
    
    cout << recordBreakingCount;
    

    return 0;
}
