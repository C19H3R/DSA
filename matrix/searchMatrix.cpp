#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int row=3;
    int col=4;
    int arr[3][4];
    int k=3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    bool found=false;
    
    int startR=0;
    int startC=col-1;

    while (startR<row)
    {
        int current=arr[startR][startC];
        if(current>=k){
            int C=0;
            for (int i = 0; i < col; i++)
            {
                if(k==arr[startR][i])
                    found=true;
            }
        }

        startR++;
    }

    cout << "Found : "<<found;
    


    return 0;
}
