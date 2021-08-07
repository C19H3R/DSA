#include<iostream>

using namespace std;

void subsequence(string s,string ans){

    if(s.length()==0){
        cout<< ans;
        return;
    }

    char ch=s[0];

    string ros=s.substr(1);

    subsequence(ros,ans);
    subsequence(ros,ans+ch);

}


int main(int argc, char const *argv[])
{
    
    string input;
    cin >> input;

    int currentLength=1;
    int inputLength=input.length();

    int n=inputLength;

    for (int i = 0; i < n; i++)
    {

    }
    

    

    return 0;
}
