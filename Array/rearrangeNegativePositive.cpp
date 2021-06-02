#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int n=6;
    int arr[6];

    for (int i = 0; i < n; i++)
    {
       cout<<arr[i];
    }
    
    int outOfPlace=-1;

    for (int index = 0; index < n; index++)
    {
        if(outOfPlace>=0){
            if(((arr[index]>=0) &&  (arr[outOfPlace]<0))
            ||
            ((arr[index]<0) &&  (arr[outOfPlace]>=0))){
                
            }
        }
    }
    

    return 0;
}
