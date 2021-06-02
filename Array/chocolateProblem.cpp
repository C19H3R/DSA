#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n=21;
    int m=12;
    int arr[21];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    

    for (int i = 0; i < n-1; i++)
    {
        int minIdx=i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[minIdx])
                minIdx=j;
        }
        swap(arr[i],arr[minIdx]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout <<endl;


    int mindiff=INT32_MAX;
    for (int i = 0; i < n-m+1; i++)
    {
        mindiff=min(mindiff,arr[i+m-1]-arr[i]);
        int x=i+m-1;
        cout << arr[i+m]-arr[i]  <<"<< diff : i >>"<<i<<"<< i : i+m >>"<<x<<" i+m : diff >>"<<arr[i+m-1]-arr[i];
        
        cout <<endl;
    }
    if(n==m){
        mindiff=arr[n-1]-arr[0];
    }
    cout <<endl;
    cout << mindiff<<" << min diff";
    


    
    return 0;
}
