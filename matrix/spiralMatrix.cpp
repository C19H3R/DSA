#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int row=4;
    int col=4;
    int arr[4][4];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
    }
    int R=0,C=0;
    while (R<row&&C<col)
    {
        //first row
        for (int i = C; i < col; i++)
        {
            cout << arr[R][i]<<" ";
        }
        R++;
        //last col
        for (int i = R; i < row; i++)
        {
            cout<<arr[i][col-1]<<" ";
        }
        col--;
        //last row
        if(R<row){
            for (int i = col-1; i >= C; i--)
            {
                cout<<arr[row-1][i]<<" ";
            }
            row--;
        }
        if(C<col){
            for (int i = row-1; i >=R; i--)
            {
                cout<<arr[i][C]<<" ";
            }
            C++;
        }
        
        
        
    }
    


   
    
    return 0;
}
