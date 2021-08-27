#include <iostream>
#include <stack>
using namespace std;

int preced(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return 1; //Precedence of + or - is 1
    }
    else if (ch == '*' || ch == '/')
    {
        return 2; //Precedence of * or / is 2
    }
    else if (ch == '^')
    {
        return 3; //Precedence of ^ is 3
    }
    else
    {
        return 0;
    }
}

string toPostFix(string s)
{
    stack<char> st;
    string ans="";

    for (int i = 0; i < s.length(); i++)
    {
        // cout << s[i]<<" ";
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            ans += s[i];
        }
        else if (s[i] == '(')
        {
            st.push('(');
        }
        else if (s[i] == '^')
        {
            st.push('^');
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            if (preced(s[i]) > preced(st.top()))
            {
                st.push(s[i]);
            }
            else
            {
                while (!st.empty() && preced(s[i]) <= preced(st.top()))
                {
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
    }
    while (!st.empty())
        {
            ans += st.top(); //store and pop until stack is not empty.
            st.pop();
        }

        return ans;
}

int main(int argc, char const *argv[])
{
    cout << toPostFix("x^y/(a*z)+l");
    return 0;
}
