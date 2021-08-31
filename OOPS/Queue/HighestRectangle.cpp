#include <iostream>
#include <stack>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> arr;
    arr.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    vector<int> LeftArr;
    LeftArr.resize(n);
    vector<int> RightArr;
    RightArr.resize(n);

    stack<int> st;

    //for leftsmall arr()
    for (int i = 0; i < count; i++)
 
    {
        if(!st.empty()&&arr[st.top>=arr[i]]){
            st.pop();
        }
        if(st.empty()){
            LeftArr[i]=0;            
        }
        else{
            LeftArr[i]=st.top()+1;
        }
    }
    

    for (int i = n-1; i >=0 ; i--)
    {
        if(!st.empty()&&arr[st.top()]>=arr[i]){
            st.pop();
        }

        if(st.empty())
            LeftArr[i]=n-1;
        else
        {
            LeftArr[i]=st.top()-1;
        }
        st.push(i);
    }
    for(auto i : arr){
        cout << i <<" ";
    }
     
     cout << endl;
    for(auto i : LeftArr){
        cout << i <<" ";
    }

    return 0;
}
