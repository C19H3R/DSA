#include<iostream>
using namespace std;

void  dec(int n){
    
    if(n==0)
        return;
    dec(n-1);
    cout <<n<<" ";
    
    
}

void  inc(int n,int start){
        cout <<start<<" ";
    if(n==0)
        return;
    inc(n-1,++start);
}


int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    
    dec(n);
    return 0;

}
