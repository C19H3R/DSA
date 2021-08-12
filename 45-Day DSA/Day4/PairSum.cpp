#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int k;
    cin >>k;

    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin >> arr[i];
    }

    int i=0;
    int j=n-1;
    int pairSum=0;

    while(i<j){
        pairSum=arr[i]+arr[j];
        if(pairSum>k){
            j--;
        }else if (pairSum<k)
        {
            i++;
        }else
        {
            cout<<arr[i]<<" "<<arr[j];
            break;
        }
    }

    

    return 0;
}
