#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    
    int presentMax=0;
    int Max=INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        presentMax+=arr[i];
        if(Max<presentMax)
            Max=presentMax;
        if(presentMax<0);
            presentMax=0;
    }
        
    return 0;
}
