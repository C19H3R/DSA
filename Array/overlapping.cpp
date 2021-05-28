#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[4][2];
    int arr2[5][2]={0};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }

    int arrSol[4][2]={0}; 
    int j=0;

    for (int i = 0; i < 4; i++)
    {
        int start=arr[i][0];
        int end=arr[i][1];
        int comp=end;
        while (end>arr[i+1][0])
        {
            end=arr[++i][1];
        }
            arrSol[j][0]=start;
            arrSol[j][1]=end;
            j++;
        
        
    }

     for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout <<  arrSol[i][j]<<" ";
        }
        cout <<endl;
    }
    return 0;
}
