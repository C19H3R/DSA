#include<iostream>

using namespace std;


string keypadArr[]={"","abc","def"};


void PrintCombinations(string s,string ans){
    if(s.length()==0){
        cout <<ans<<endl;
        return;
    }
    char ch=s[0];
    string code=keypadArr[ch-'0'];
    string ros=s.substr(1);
    for(int i=0;i<code.length();i++){
        PrintCombinations(ros,ans+code[i]);
    }
}




int main(int argc, char const *argv[])
{
    
    PrintCombinations("121","");
    return 0;
}
