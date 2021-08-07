#include<iostream>

using namespace std;

void longestPalin(string);

int main(int argc, char const *argv[])
{
    string input;
    cin >> input;

    longestPalin(input);

    return 0;
}

void longestPalin(string s){

    string input=s;
    string longestPalin="";
    int  maxLength=1;
    int start=0;
    int len=input.length();

    int low,high;
    
    for (int i = 0; i < len; i++)
    {
        //even;
        low=i-1;
        high=i;

        while (low>=0&&high<len&&input[low]==input[high])
        {
            low--;
            high++;
        }

        low++;
        high--;

        if(high-low+1>maxLength){
            start=low;
            maxLength=high-low+1;
        }


        //odd;


        low=i-1;
        high=i+1;

        while (low>=0&&high<len&&input[low]==input[high])
        {
            low--;
            high++;
        }

        low++;
        high--;
        if(input[low]==input[high]&&high-low+1>maxLength){
            start=low;
            maxLength=high-low+1;
        }
        
        
    }
    
    cout << "Longest >> ";
    
    for (int i = start; i <= start+maxLength-1; i++)
    {
        cout << input[i];
    }
    

}
