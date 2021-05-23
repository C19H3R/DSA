#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[10];

    int n=10;
    int ones=0,twos=0;

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        
    }
    for (int i = 0; i < 10; i++)
    {
        if(arr[i]==1){
            ones++;
        }else if (arr[i]==2)
        {
            twos++;
        }
    }
    
    cout << ones <<" "<<twos<<endl;
    for (int i = 0; i < 10; i++)
    {
        if(i<10-ones+twos){
            arr[i]=0;
            cout<< "0 ";
        }else if (i<10-twos)
        {
            arr[i]=1;
            cout<< "1 ";

        }else{
            arr[i]=2;
            cout<< "2 ";
        }
    }
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<< arr[i] <<" ";
    // }
    
    
    
    
    return 0;
}
