#include<iostream>

using namespace std;

int knapSack(int values[],int weights[],int n,int capacity){

    if(n==0||capacity==0)
        return 0;
    int val2=knapSack(values,weights,n-1,capacity);
        
        if(weights[n-1]>capacity)
            return val2;
    int val1= knapSack(values,weights,n-1,capacity-weights[n-1])+values[n-1];

    return val1>val2?val1:val2;

}


int main(int argc, char const *argv[])
{
    int wt[]={10,20,30};
    int val[]={100,50,150};
    int W=50;

    cout << knapSack(val,wt,3,W);   
    return 0;
}
