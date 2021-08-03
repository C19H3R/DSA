#include <iostream>
#include <typeinfo>

// …
using namespace std;


int main()
{

    string input;
    string output;
    cin >> input;

    for (int i = 0; i < input.length()/2; i++)
    {
        swap(input[i],input[input.length()-i-1]);
    }
    
    cout << input << endl;
}