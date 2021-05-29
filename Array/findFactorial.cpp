#include<iostream>
using namespace std;


int multiply(int x,int res[],int size){
    int carry=0;

    for (int i = 0; i < size; i++)
    {
        int product=res[i]*x+carry;
        res[i]=product%10;
        carry=product/10;
    }
    while (carry)
    {
        res[size]=carry%10;
        carry=carry/10;
        
    }
    
    
}

int main(int argc, char const *argv[])
{
    
    int n;
    cin>> n;
    
    
    for (int i = 2; i < =n; i++)
    {
        /* code */
    }
    
    
    

    return 0;
}
