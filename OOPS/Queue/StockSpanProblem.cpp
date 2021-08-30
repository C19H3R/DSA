#include<iostream>
#include<stack>
#include <vector>

using namespace std;

vector<int> stockspan(vector<int> prices){
    vector<int> ans;
    stack<pair<int,int>> s;

    for(auto price:prices){
        int days=1;
        while (!s.empty() && s.top().first<=price)
        {
            days+=s.top().second;
            s.pop();
        }
        s.push({price,days});
        ans.push_back(days);
    }
    return ans;
    
}



int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector<int> arr;
    arr.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >>arr[i];
    }
    
    for(auto i:stockspan(arr)){
        cout << i <<" ";
    }


    
    return 0;
}
