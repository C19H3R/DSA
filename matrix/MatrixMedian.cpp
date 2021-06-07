#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int r=3;
    int c=4;
    int arr[1][100];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
        
    }
     for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j]<<" XXX ";
        }
        
    }
    
    return 0;
}
