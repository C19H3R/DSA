#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    int n=5;
    int a=1,b=3;

    int arr[5];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
  int start=0;
  int end=n-1;

  for (int i = 0; i <=end; )
  {
      if(arr[i]<a){
          swap(arr[i],arr[end++]);
      }
      else if (arr[i]>b)
      {
          swap(arr[i],arr[end--]);
      }
      else
      {
          i++;
      }
      
      
  }
  
    


    

    return 0;
}
