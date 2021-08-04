#include <iostream>
#include<bits/stdc++.h>

using namespace std;

bool CheckShuffle(string,string, string);

string SortString(string);

int main(int argc, char const *argv[])
{
    string first="XY";
    string second="12";

    string input="XY12";

    cin >> input;

    first=SortString(first);
    second=SortString(second);
    input=SortString(input);
    //cout << input.length()<<" "<<first.length()+second.length()<<endl;
    //cout << input<<" "<<first+" "+second<<endl;

    bool isValid=CheckShuffle(input,first,second);

    cout << isValid;

    return 0;
}


bool CheckShuffle(string input,string first,string second){
    
    bool isValid;

    isValid=input.length()==(first.length()+second.length());

    cout<<"HERE"<<isValid<<" ";
    if(isValid){
        int i=0,f=0,s=0;
        while (i!=input.length())
        {
            if(f<first.length()&& input[i]==first[f])
                    f++;
            else if (s<second.length() && input[i]==second[s])
                s++;
            else
                return false;
            i++;
        }

        if(f<first.length()||s<second.length()){
            return false;
        }
            return true;
    }

}

string SortString(string input){
    char output[input.length()];
   // cout <<input<<" hols ";
    for (int i = 0; i < sizeof(output); i++)
    {
        output[i]=input[i];
    }
    sort(input.begin(),input.end());
    //cout <<output<<" hols ";

    return input;
}


