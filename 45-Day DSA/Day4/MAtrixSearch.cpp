#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int k;
    cin >>n>>k;
    int arr[n][n];

    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int startj=n-1;
    int starti=0;

    while (startj>=0&&starti<n)
    {
        if(arr[starti][startj]>k){
            startj--;
        }
        if(arr[starti][startj]<k){
            starti++;
        }
        if (arr[starti][startj]==k)
        {
            
            break;
        }
        
    }
    
    cout << starti <<" asdfasdf "<<startj;


    return 0;
}
