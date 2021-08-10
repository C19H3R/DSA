#include<iostream>

using namespace std;

int ArithmaticSubarrayLength(int arr[],int start,int end){
    int difference = arr[start]-arr[start+1];

    // cout << "start "<<start;
    // cout <<endl;
    // cout << "end "<<end;
    // cout <<endl;
    // cout << "difference "<<difference;
    // cout <<endl;
    // cout << "arr[start+1] "<<arr[start+1];
    // cout <<endl;
    // cout << "arr[start] "<<arr[start];

    //cout <<"difference "<<difference << " "<<start << " "<< end << "start arr"<<arr[start]<<"start arr +1 "<< arr[start+1]<<endl;
    for (int i = start; i < end; i++)
    {
        if(difference!=(arr[i]-arr[i+1])){
            return -1;
        }
    }
    //cout << end-start+1 <<endl;
    return end-start+1;
}    


int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];

    int maxLength=-1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            maxLength=ArithmaticSubarrayLength(arr,i,j)>maxLength?ArithmaticSubarrayLength(arr,i,j):maxLength;
        }
    }
    
    cout << maxLength;
    return 0;
}
