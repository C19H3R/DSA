#include <iostream>

using namespace std;
void printMatrix(int arr[4][4])
{
    int N=4;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << '\n';
    }
}

int main(int argc, char const *argv[])
{
    int N=4;

    int a[4][4]={ { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };
    

    for (int i = 0; i < N/2; i++)
    {
        for (int j = i; i < N-i-1; i++)
        {
            int temp = a[i][j];
            a[i][j] = a[N - 1 - j][i];
            a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
            a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
            a[j][N - 1 - i] = temp;
        }
    }
    
     printMatrix(a);
    
    return 0;
}
