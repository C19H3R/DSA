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

    int pDifference = arr[0]-arr[1];
    int currentLength=2;
    int maxLength=0;
   
    for (int i = 1; i < n-1; i++)
    {
        int currDifference=arr[i]-arr[i+1];
        if(pDifference==currDifference){
            currentLength++;
        }else{
            maxLength=max(currentLength,maxLength);
            currentLength=2;
            pDifference=arr[i]-arr[i+1];
        }
    }
    maxLength=max(currentLength,maxLength);

    cout << maxLength;

    return 0;
}
