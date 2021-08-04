#include<iostream>

using namespace std;

string CountAndSay(int n);

int main(int argc, char const *argv[])
{
    int inputNo;
    cin>>inputNo;

    string answer=CountAndSay(inputNo);

    cout<<answer;

    return 0;
}


string CountAndSay(int n){
    if(n==1)
        return "1";
    if(n==2)
        return "11";

    string answer="11";

    for (int i = 3; i <= n; i++)
    {
        string comparer="";

        answer=answer+'&';
        int stringSize=answer.length();

        int counter=1;
        char currentCharacter='1';
        for (int j = 1;j < stringSize;j++)
        {
            if(answer[j]==answer[j-1])
                counter++;
            else{
                comparer.append(to_string(counter));
                comparer.push_back(answer[j-1]);
                counter=1;
            }
        }
        answer=comparer;

    }
    return answer;
}
