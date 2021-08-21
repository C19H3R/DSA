#include<iostream>

using namespace std;

bool isPalinDrome(string s,int n){
    if(n>=s.length()/2)
        return true;
    
    if(s[n]==s[s.length()-n-1])
        return isPalinDrome(s,n+1);
    else
    return false;

}


int main(int argc, char const *argv[])
{

    cout << isPalinDrome("ABasdfasdfBA",0);
    return 0;
}
