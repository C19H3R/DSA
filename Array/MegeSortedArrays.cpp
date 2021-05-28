#include <iostream>
using namespace std;

int getGap(int gap);
int main(int argc, char const *argv[])
{
    const int n1=4;
    const int n2=5;
    int arr1[n1];
    int arr2[n2];

    for (int x = 0; x < n1; x++)
    {
        cin >> arr1[x];
    }
    for (int x = 0; x < n2; x++)
    {
        cin >> arr2[x];
    }
    int i,j,gap=n1+n2;
    for ( gap=getGap(gap);gap>0;gap=getGap(gap))
    {
        cout<< gap<<" "<<endl;
        for ( i = 0; i+gap <n1; i++)
        {
            cout<< i<<" ";

            if(arr1[i]>arr1[i+gap]);
                swap(arr1[i],arr1[i+gap]);
        }
        cout<<endl;

        for ( j=gap>n1?gap-n1:0;    i<n1&&j<n2;     i++,j++)
        {
            cout<< j;

            if(arr1[i]>arr2[j]){
                swap(arr1[i],arr2[j]);
                
            }
        }
        cout<<endl;

        if(j<n2){
            for ( j = 0; j+gap < n2; i++)
            {
                if(arr2[j]>arr2[j+gap])
                    swap(arr2[j],arr2[j+gap]);
            }
        }
        cout<<endl;

        
        
    }

    for (int x = 0; x < n1; x++)
    {
        cout << arr1[x]<<" ";
    }
    for (int x = 0; x < n2; x++)
    {
        cout << arr2[x]<<" ";
    }
    
    
    
    
    
    
    
    
    /* code */
    return 0;
}



int getGap(int gap){
    if(gap<=1)
        return 0;
    return (gap/2)+(gap%2);
}