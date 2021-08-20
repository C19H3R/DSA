#include<iostream>


bool isSafe(int** arr,int x,int y,int n)
{
    if(x<n&&y<n&&arr[x][y]==1)
        return true;
    return false;
}


bool ratInMaZe(int ** arr,int x,int y,int n,int ** output){

    if(x==n-1&&y==n-1){
        output[x][y]=1;
        return true;
    }

    if(isSafe(arr,x,y,n)){
        output[x][y]=1;
        if(ratInMaZe(arr,x+1,y,n,output)){
            return true;
        }
        if(ratInMaZe(arr,x,y+1,n,output)){
            return true;
        }
        output[x][y]=0;
        return false;
    }
    return false;
}



using namespace std;

int main(int argc, char const *argv[])
{

    int n;
    cin >> n;
    int ** output=new int*[n];
    for(int i=0;i<n;i++){
        output[i]=new int[n];
       for (int j = n - 1; j >= 0; j--)
       {
           output[i][j]=0;
       }
    }

    int ** input=new int*[n];
    for(int i=0;i<n;i++){
        input[i]=new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            cin >> input[i][j];
        }
    }
    cout << endl;
    if(ratInMaZe(input,0,0,n,output))
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            cout << output[i][j]<<" ";
        }
        cout <<endl;
    }



    /* code */
    return 0;
}
