#include <iostream>

using namespace std;

void reverse(string s){
    if(s=="")
        return;
    reverse(s.substr(1,s.length()-1));
    cout << s[0];
}

int main(int argc, char const *argv[])
{
    int i=0;
     reverse("asdf");

    return 0;
}
