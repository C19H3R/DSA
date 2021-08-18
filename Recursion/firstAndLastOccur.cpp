#include<iostream>
using namespace std;

int firstOcc(int arr[],int n,int key,int i){
    
    if(i==n)
        return i;
    if(arr[i]==key)
        return i;
    return firstOcc(arr,n,key,++i);
}
int lastOcc(int arr[],int n,int key,int i){
   
    if(i==n)
        return -1;
    int restArray=lastOcc(arr,n,key,++i);
    if(restArray!=-1)
        return restArray;
    if(arr[i]==key)
        return i;
    return -1;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >>key;

   
    int firstOccurence=firstOcc(arr,n,key,0);
    int firstOccurence2=lastOcc(arr,n,key,0);
    
    cout <<firstOccurence;
    cout <<endl;
    cout <<firstOccurence2;
    return 0;
}
