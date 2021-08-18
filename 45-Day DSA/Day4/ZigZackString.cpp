#include <iostream>

using namespace std;

int sumTillI(int i){
    if(i==1)
        return 1;
    return i+sumTillI(i-1);
}

int main(int argc, char const *argv[])
{
    int i;
    cin >>i;
    int ans=sumTillI(i);
    cout <<ans;

    return 0;
}
