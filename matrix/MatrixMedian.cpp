#include <iostream>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int r=3;
    int c=3;
    int arr[3][3];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }


    int min=INT32_MAX;
    int max=INT32_MIN;
    
    int col=0;
    for (int i = 0; i < r; i++)
    {
        min=arr[i][col]<min?arr[i][col]:min;
    }
    cout << "MIN: "<<min<<endl; 
    col=3;
    for (int i = 0; i < r; i++)
    {
        max=arr[i][col-1]>max?arr[i][col-1]:max;
    }
    cout << "MAX: "<<max<<endl; 

    
    int desired=(r*c+1)/2;
    cout << "DESIRED: "<<desired<<endl; 

    cout <<"_______________"<<endl;
    int x=0;
    while (min<max)
    {
        int mid=min+(max-min)/2;

        cout<<"ITRATOR: "<<++x<<endl;
        int place=0;

        for (int i = 0; i <r; i++)
        {
            place+=upper_bound(arr[i],arr[i]+c,mid)-arr[i];
            cout<<"UPPERBOUND: "<<upper_bound(arr[i],arr[i]+c,mid)-arr[i]<<endl;

            cout<<"Place: "<<place<<endl;
        }
    cout << "MIN: "<<min<<endl; 
    cout << "MID: "<<mid<<endl; 
    cout << "MAX: "<<max<<endl;
    cout <<"XX"<<endl; 

        if(place<desired)
            min=mid+1;
        else
        {
            max=mid;
        }
    cout << "MIN: "<<min<<endl; 
    cout << "MID: "<<mid<<endl; 
    cout << "MAX: "<<max<<endl; 
    cout <<"_______________"<<endl;

    }
    cout << min;
    
    
}

