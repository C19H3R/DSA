#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int n;
    cin >> n;
    int arr[n];

    int max=INT32_MIN;
    int min=INT32_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout << "MAX : "<<max<<endl;

    cout << "MIN : "<<min<<endl;
    


    return 0;
}
