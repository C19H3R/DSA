#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    int prices[6];
    int n=6;
    int maxProfit=0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }
    
    int minPrice=INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        int profit=prices[i]-minPrice;
        if(prices[i]<minPrice){
            minPrice=prices[i];
        }else if (profit>maxProfit)
        {
            maxProfit=profit;
        }
    }
    
    cout << maxProfit;

    return 0;
}
