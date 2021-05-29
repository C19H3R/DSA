#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    int n1=6;
    int n2=5;
    int n3=8;

    int A[6];
    int B[5];
    int C[8];

    for (int i = 0; i < n1; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin>>B[i];
    }
    for (int i = 0; i < n3; i++)
    {
        cin>>C[i];
    }
    
    
    
    int smallestArr[5]={0};
    int count=0;
    //Magic Happens Here
    int i=0,j=0,k=0;

    while (i<n1&&j<n2&&k<n3)
    {
        if(A[i]==B[j]&&B[j]==C[k]){
            cout << A[i]<<" ";
            i++;
            j++;
            k++;
            count++;
        }
        else if (A[i]<B[j])
        {
            i++;
        }else if (B[j]<C[k])
        {
            j++;
        }else
        {
            k++;
        }
    }
    if (count==0)
    {
        cout<<"-1";
    }
    
    



    

    return 0;
}
