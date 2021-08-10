#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    
    int n;
    cin >> n;
    
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        int min=INT32_MAX;
        int index=0;
        for (int j = i; j < n; j++)
        {
            if(arr[j]<arr[i]){
                index=j;
            }
        }
        int temp=arr[i];

        arr[i]=arr[index];
        arr[index]=temp;

        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    
    


    return 0;
}
