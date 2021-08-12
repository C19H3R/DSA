#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int m;

    cin >> n;
    cin >> m;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    int noOfElementsPrinted=0;
    int upperRow=0;
    int lowerRow=n-1;
    int rightCol=m-1;
    int leftCol=0;
    while (noOfElementsPrinted<n*m)
    {
        //upperRow
        if(upperRow<n)
        for (int i = leftCol; i <= rightCol; i++)
        {
            cout << arr[upperRow][i]<<endl;
            noOfElementsPrinted++;
        }
        upperRow++;

        //righCol
        if(rightCol>0)
        for (int i = upperRow; i <= lowerRow; i++)
        {
             //cout << "I " <<" rightcol "<<i<<" "<<rightCol<<endl;
            cout << arr[i][rightCol]<<endl;
            noOfElementsPrinted++;
        }
        rightCol--;

        //lowe row
        if(lowerRow<n)
        for (int i = rightCol; i >= leftCol; i--)
        {
             // cout << "lowerrow " <<" J "<<lowerRow<<" "<<i<<endl;
            cout << arr[lowerRow][i]<<endl;
            noOfElementsPrinted++;
        }
        lowerRow--;


        
        //leftcol
        if(lowerRow>0)
        for (int i =lowerRow; i >= upperRow; i--)
        {
             //cout << "I " <<" leftcol "<<i<<" "<<leftCol<<endl;
            cout << arr[i][leftCol]<<endl;
            noOfElementsPrinted++;
        }
        leftCol++;        
    }
    

    
    

    

    return 0;
}
