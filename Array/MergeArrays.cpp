#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    const int m=4;
    const int n=5;

    int arr1[m];    
    int arr2[n];
    
    for ( int i = 0; i < n; i++)
    {
        arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        arr2[m];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        /* Find the smallest element greater than ar2[i].
        Move all elements one position ahead till the
        smallest greater element is not found */
        int j, last = arr1[m - 1];
        for (j = m - 2; j >= 0
             && arr1[j] > arr2[i]; j--)
            arr1[j + 1] = arr1[j];
 
        // If there was a greater element
        if (j != m - 2 || last > arr2[i])
        {
            arr1[j + 1] = arr2[i];
            arr2[i] = last;
        }
    }
    
    
    
    return 0;
}
