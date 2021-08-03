#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    string input;
    cin >> input;

    bool isPalindrome = true;
    for (int i = 0; i < input.length()/2; i++)
    {
            if(input[i]!=input[input.length()-1-i])
                isPalindrome=false;
    }

    cout << isPalindrome;
    


    return 0;
}
