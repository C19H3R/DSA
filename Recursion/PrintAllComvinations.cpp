#include <iostream>

using namespace std;
void printAllCombinations(string s,string ans){

    if(s.length()==0){
        cout << ans<<endl;

        return;
    }
    char ch=s[0];
    string ros=s.substr(1);

    for(int i=0;i<s.length();i++){
        ch=s[i];
        ros=s.substr(0,i)+s.substr(i+1);
        printAllCombinations(ros,ans+ch);
    }

    return ;

}




int main(int argc, char const *argv[])
{
    
    printAllCombinations("ABC","");
    return 0;
}
