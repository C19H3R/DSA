#include<iostream>

using namespace std;

void subString(string s,string ans){
    
    if(s.length()==0){
        cout << ans<<endl;
        return;
    }


    char ch=s[0];
    string ros=s.substr(1);
    
    subString(ros,ans);
    subString(ros, ans+ch);
    string assci=""+to_string((int)ch);
    subString(ros, ans+assci);


    return;
}


int main(int argc, char const *argv[])
{
    
    subString("AB","");

    return 0;
}
