#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n=5;
    int arr[5];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool sumZero=false;

    for (int i = 0; i < n; i++)
    {
        int sum=0;
        for (int j = i+1; j < n; j++)
        {
            sum+=arr[j];
            if(sum==0){
                sumZero=true;
            }
            if(sumZero)
                break;
        }
    }
    if(sumZero){
        cout<<"yes";
    }else
    {
        cout<<"No";
    }
    
    
    return 0;
}
