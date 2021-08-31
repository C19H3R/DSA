// "(a-b/c)*(a/k-l)"

#include<iostream>
#include <stack>
string converter(string strings){
    stack<char> s;
    string s="";
    for(auto i:strings){
        if(i>='a'&&i<='z'&&i>='A'&&i<='Z'){
            s+=i;
        }else if(i==')'){
            s.push(')');
        }else if (i=='(')
        {
            while (!s.empty()&&s.top()!='(')
            {
                s+=s.top();
                s.pop();
            }
            s.pop();
        }else if (/* condition */)
        {
            /* code */
        }
        
        
    }
    

}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
