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

    int key;
    cin >>key;

    int indexsOfKey[n]={0};

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key){
            indexsOfKey[i]=1;
            cout << "Found at "<<i<<endl;
        }
    }


    
    

    return 0;
}
