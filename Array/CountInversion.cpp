#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    int arr[5];
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]>arr[j])
                count++;
        }
    }

    cout<<"count is : "<<count;
    
    

    return 0;
}
