#include<iostream>

using namespace std;

int tileProblem(int n){
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    
    int count=tileProblem(n-1)+tileProblem(n-2);
    return count;
}




int main(int argc, char const *argv[])
{
    /* code */
    cout << tileProblem(4);
    return 0;
}
