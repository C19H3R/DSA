#include<iostream>

using namespace std;



int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int arrangements=1;

    for (int i = n ; i >= 1; i--)
    {
        arrangements*=i;
    }

    int** output=new int*[arrangements];
    
    for(int i=0;i<arrangements;i++){
        output[i]=new int[n];
        for(int j=0;j<n;j++){
            output[i][j]=0;
        }
    }


    /* code */
    return 0;
}
