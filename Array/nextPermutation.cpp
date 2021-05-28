#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverse(int arr[], int start,int n) {
        cout<<"Hello";
        int i = start, j = n - 1;
        while (i < j) {
            cout<<"i: "<<arr[i]<<"j: "<<arr[j]<<endl;
            swap(arr[i],arr[j]);
            cout<<"i: "<<arr[i]<<"j: "<<arr[j]<<endl; 
            i++;
            j--;
        }
    }

int main(int argc, char const *argv[])
{
    
    int arr[9];

    int n=9;
    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
    }


    int i=n-2;
    while (i>=0&&arr[i+1]<=arr[i])
    {
        i--;
    }
    if(i>=0){
        int j=n-1;
        while (arr[j]<=arr[i])
        {
            j--;
        }
        swap(arr[i],arr[j]);
    }
    reverse(arr,i+1,n);

     for (int i = 0; i<n; i++)
        cout << arr[i] << " ";  
    return 0;
}
