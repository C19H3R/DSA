#include<iostream>

using namespace std;

string moveALLX(string s){

    if(s.length()==0){
        return"";
    }
    char ch=s[0];

   string ans= moveALLX(s.substr(1));

   if(ch=='x'){
       return ans+ch;
   }
   return ch+ans;

}




int main(int argc, char const *argv[])
{
    
    


    return 0;
}
