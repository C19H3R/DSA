#include<iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    string input;
    string test;

    cin>> input;

    cout << "Test String ??";

    cin >> test;

    string temp=input+input;
    bool passed=input.find(test)!=string::npos;
    if(test.length()!=input.length())
        passed=false;
    cout << passed;
    return 0;
}
