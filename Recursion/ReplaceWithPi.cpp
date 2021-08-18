#include<iostream>
using namespace std;

void ReplacePi(string s){
    if(s.empty())
        return;
    if(s.length()>=2&&s[0]=='p'&&s[1]=='i'){
        cout << "3.14";
        ReplacePi(s.substr(2));
    }
    else{
        cout << s[0];
        ReplacePi(s.substr(1));
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    ReplacePi("piasdpifspisadfpi");
    return 0;
}
