#include <iostream>

using namespace std;

int BinarySearch(int size,int arr[],int key){

    int start=0;
    int end=size-1;
    int mid=size/2;

    while (start<=end)
    {

        
        
        mid=(start+end)/2;
        cout << "mid "<<endl;
        cout<<mid<< " " <<arr[mid]<<endl;

        cout << "start "<<endl;
        cout<<start<< " " <<arr[start]<<endl;

        cout << "end "<<endl;
        cout<<end<< " " <<arr[end]<<endl;

        cout <<endl;
        if(arr[mid]==key){
            return mid;
        }else if (arr[mid]>key)
        {
            end=mid;
        }else if (arr[mid]<key)
        {
            start=mid;
        }

    }
    

    return -1;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int position=BinarySearch(n,arr,k);

    cout << position;
    return 0;
}
