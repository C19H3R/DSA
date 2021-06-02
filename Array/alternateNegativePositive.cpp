#include <iostream>
using namespace std;
int findNextNegative(int arr[],int index,int n){
    
    for (int i = index+1; i < n; i++)
    {
        if(arr[i]<0)
            return arr[i];
    }
    
};
int findNextPositive(int arr[],int index,int n){
    
    for (int i = index+1; i < n; i++)
    {
        if(arr[i]>0)
            return i;
    }
    
};

int main(int argc, char const *argv[])
{
    int n=6;
    int m=6;
    int arr[6];

    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }

    int negative=0;
    int positive=0;
   
    for (int i = 0; i < 6; i++)
    {
        if(arr[i]<0)
            negative++;
        else
            positive++;
    }
    cout << negative<<" "<<positive<<" ";
    if(negative>positive){
        //first one will be negative 
        for (int i = 0; i < n; i++)
        {
            if(i%2==0)
            {
                if(!arr[i]<0){
                    int negativIndex=findNextNegative(arr,i,n);
                    for (int j = negativIndex ; j > i; j--)
                        swap(arr[j],arr[j-1]);
                }
            }
            else
            {
                if(!arr[i]>0){
                    int positiveIndex=findNextPositive(arr,i,n);
                    for (int j = positiveIndex ; j > i; j--)
                        swap(arr[j],arr[j-1]);                   
                }
            }   
        }
        
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if(i%2!=0)//1 3 4 >> positive
            {
                if(!arr[i]>0){
                    int positivIndex=findNextPositive(arr,i,n);
                    for (int j = positivIndex ; j > i; j--)
                        swap(arr[j],arr[j-1]);
                }
            }
            else//0 2 4 >> negative
            {
                if(!arr[i]<0){
                    int negativeIndex=findNextNegative(arr,i,n);
                    for (int j = negativeIndex ; j > i; j--)
                        swap(arr[j],arr[j-1]);                   
                }
            }   
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    
    














    
    return 0;
}

