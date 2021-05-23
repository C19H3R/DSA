#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   int n=6;
   int arr[6];

    int jumps=0;
   for (int i = 0; i < n; i++)
   {
    cin>>arr[i]; 
   }

   int index=0;
   while (index<n-1)
   {
       int val=arr[index];
       index+=val;
       
       jumps++;
   }
   
   
   cout<<jumps;

    return 0;
}

