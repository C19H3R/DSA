#include<iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int n=7;
    int arr[7];
    
    int freq=n/3;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count1=0,count2=0;
    int first=0,second=0;
    for (int i = 0; i < n; i++)
    {
        if(first==arr[i])
            count1++;
        else if (second==arr[i])
            count2++;
        else if (count1==0){
            count1++;
            first=arr[i];
        }else if (count2==0)
        {
            count2++;
            second=arr[i];
        }
        else{
            count1--;
            count2--;
        }
    }
    count1==0;
    count2==0;


    
    
    
    
    
    
    

    
    return 0;
}
