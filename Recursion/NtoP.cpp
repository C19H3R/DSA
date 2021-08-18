#include <iostream>

using namespace std;

int NtoP(int n,int i){
    if(i==0)
        return 1;
    return n*NtoP(n,i-1);
}

int main(int argc, char const *argv[])
{
    int n;
    int p;
    cin >> n>>p;



    int ans=NtoP(n,p);
    cout << ans;

    return 0;
}
