#include <iostream>

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

    int maxNumberInArray=INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        maxNumberInArray=maxNumberInArray>arr[i]?maxNumberInArray:arr[i];
    }

    int N=maxNumberInArray+1;

    int idx[N];

    for (int i = 0; i < N; i++)
    {
        idx[i]=-1;
        cout << idx[i] <<endl;
    }
    int ans=0;
    for (int i = 0; i <n ; i++)
    {
        if(idx[arr[i]]==-1){
            idx[arr[i]]=i;
        }else{
            ans=idx[arr[i]];
        }
    }

    cout << " "<< ans+1;
    
    return 0;
}
