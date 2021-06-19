#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n=4;
    int m=4;

    int M[4][4];

    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> M[i][j];
        }
    }

    int maxAreax=0;
    int currentSum=0;
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        for (int j = 0; j < m; j++)
        {
            sum+=M[i][j];
        }
        if(sum==(m)){
            currentSum+=sum;
        }else
        {
            maxAreax=maxAreax>currentSum?maxAreax:currentSum;
            currentSum=0;
        }
    }
    cout<<maxAreax<<endl;
    
    
    return 0;
}
