#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n=5;
    int m=3;

    int arr1[5];
    int arr2[3];

    for (int i = 0; i <n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        int minIndex=i;
        for (int j = i+1; j < n; j++)
        {
            if(arr1[j]<arr1[minIndex])
                minIndex=j;
        }
        swap(arr1[i],arr1[minIndex]);
        
    }
     for (int i = 0; i < m-1; i++)
    {
        int minIndex=i;
        for (int j = i+1; j < m; j++)
        {
            if(arr2[j]<arr2[minIndex])
                minIndex=j;
        }
        swap(arr2[i],arr2[minIndex]);
        
    }
    


    int iSmall=0;
    int iBig=0;
    bool found=false;
    while (iBig<n&&iSmall<m)
    {
        if(arr1[iBig]==arr2[iSmall]){
            iSmall++;
        }
        if(iSmall==m){
            found=true;
            break;
        }
        iBig++;
    }

    if(found)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
