#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxN=INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        maxN=max(maxN,arr[i]);
    }

    int N=maxN+1;
    bool checkArr[N];
    for (int i = 0; i <N; i++)
    {
        checkArr[i]=false;
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i]>=0){
            checkArr[arr[i]]=true;
        }
    }
    bool checkFurther=true;
    for (int i = 0; i < N&&checkFurther; i++)
    {
        if (checkArr[i]==false)
        {
            cout << "Ans "<< i <<endl; 
            checkFurther=false;
        }
        
    }
    
    
    

    
    
    return 0;
}
