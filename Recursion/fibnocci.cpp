#include <iostream>

using namespace std;

int fibb(int i){

    if(i==0)
     return 0;
    if(i==1||i==2)
        return 1;
    return fibb(i-1)+fibb(i-2);
}

int main(int argc, char const *argv[])
{
    int i;
    cin >> i;

    int ans =fibb(i);
    cout <<ans;
    return 0;
}
