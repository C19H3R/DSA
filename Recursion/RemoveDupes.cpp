#include<iostream>

using namespace std;

string removeDupelicate(string s){
    
    if(s.length()==0)
        return "";
    char ch=s[0];
    string ans=removeDupelicate(s.substr(1));
    if(ch==ans[0])
        return ans;
    return (ch+ans);


}


int main(int argc, char const *argv[])
{
    cout <<removeDupelicate("aabbvvffeeeeeedddddaa");
    return 0;
}