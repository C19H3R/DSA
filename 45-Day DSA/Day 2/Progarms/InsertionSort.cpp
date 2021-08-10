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

    for (int i = 1; i <n; i++)
    {
        int currentElement=arr[i];
        int index=-1;
        for (int j = i-1; j >=0; j--)
        {
            if(arr[j]>currentElement){
                arr[j+1]=arr[j];
                index=j;
            }
            if(index!=-1){
                arr[index]=currentElement;
            }
        }
    }
    



    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    
    return 0;
}
