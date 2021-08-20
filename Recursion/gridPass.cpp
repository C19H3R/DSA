#include<iostream>

using namespace std;

int countPath(int n,int I,int J){
    if(I==n-1;J==n-1){
        return 1;
    }
    if(I>=n||J>=n){
        return 0;
    }
    
            return countPath(n,I+1,J)+countPath(n,I,J+1);
    
}




int main(int argc, char const *argv[])
{
    /* code */
    cout << countPath(3,0,0);
    return 0;
}
