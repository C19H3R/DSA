#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n=7;
    int arr[7];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxProfit=0;
    for (int i = 2; i < n-2; i++)
    {
        int oneMax=0;
        for (int j = 0; j < i; j++)
        {
            for (int k = j+1; k < i; k++)
            {
                oneMax=max(oneMax,arr[k]-arr[j]);
            }
        }
        int secondMax=0;
        for (int j = i; j <n ; j++)
        {
               // sec=max(secondMax,arr[k]-arr[j]);
            
        }
        
        maxProfit=max(maxProfit,secondMax+oneMax);
    }
    
    
    return 0;
}
