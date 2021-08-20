#include<iostream>

using namespace std;


void permutate(string s,string ans){
    if(s.length()==0){
        cout << ans<<endl;
        return;
    }
    char ch;
    for(int i=0;i<s.length();i++){
        ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        permutate(ros,ans+ch);
    }
    return;
    
}


int main(int argc, char const *argv[])
{
    /* code */
    permutate("ABCDEFG","");
    return 0;
}
