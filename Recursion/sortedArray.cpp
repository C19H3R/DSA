#include<iostream>

using namespace std;

bool sortedRec(int arr[],int index){
    if(index==-1)
        return true;
    if(arr[index]<arr[index-1]&&index>0)
        return false;
    return sortedRec(arr,index-1);
}

int main(int argc, char const *argv[])
{
    int n=0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    string ans =sortedRec(arr,n-1)?"sorted":"not sorted";
    cout << ans;
    
    return 0;
}
