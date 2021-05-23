#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int arr[5];
    int n=5;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxSum=INT32_MIN;
    int presentSum=0;
    for (int i = 0; i < n; i++)
    {
        presentSum+=arr[i];
        if(maxSum<presentSum)
            maxSum=presentSum;
        if(presentSum<0)
            presentSum=0;
    }
    
    cout<< maxSum;
    
    
    return 0;
}
