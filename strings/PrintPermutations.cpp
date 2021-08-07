#include<iostream>

using namespace std;

string Swap(string s,int a , int b){
    char temp = s[a];
    s[a]=s[b];
    s[b]=temp;
    return s;
}


void PrintPermutation(string s,int l,int r){

    if(l==r){
        cout << s << endl;
        return;
    }

    for (int i = l; i <=r; i++)
    {
        s = Swap(s,l,i);

        PrintPermutation(s,l+1,r);

        s=Swap(s,l,i);
    }
}



int main(int argc, char const *argv[])
{

    string input;

    cin >> input;
    PrintPermutation(input,0,input.length()-1);



    return 0;
}
