#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    
    string input;

    cin >> input;

    int count0=0;
    int count1=0;
    int count=0;
    for (int i = 0; i < input.length(); i++)
    {
        if(input[i]=='0'){
            count0++;
        }else{
            count1++;
        }

        if(count1==count0){
            count++;
        }

    }

    if(count>0){
        cout << count;
    }
    else{
        cout << "-1";
    }
    

    return 0;
}
