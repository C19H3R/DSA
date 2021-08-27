#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
    int n = s.length();
    bool ans = true;

    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
        }
        else
        {

            switch (s[i])
            {
            case ')':
                if (st.top() != '(')
                {
                    return false;
                }else
                {
                    st.pop();
                }
                
                break;
            case ']':
                if (st.top() != '[')
                {
                    return false;
                }else
                {
                    st.pop();
                }
                break;
            case '}':
                if (st.top() != '{')
                {
                    return false;
                }else
                {
                    st.pop();
                }
                break;

            default:
                break;
            }
        }
    }
    if(!st.empty())
        return false;
    return true;
}

int main(int argc, char const *argv[])
{
    string s = "(){}[][(asdf)]";
    cout << isValid(s);
    return 0;
}
