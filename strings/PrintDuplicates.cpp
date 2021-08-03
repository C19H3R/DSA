#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int freq[256]={0};

    string input;

    cin >> input;

    for (int i = 0; i <input.length(); i++)
    {
        freq[input[i]]++;
    }


    for (int i = 0; i < 256; i++)
    {
        char currentChar=i;
        //cout <<freq[i];
        if(freq[i]>1){
            cout<<"char > \'"<<currentChar<<"\' : "<<freq[i]<<endl;
        }
    }
    
    



}
