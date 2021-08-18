#include<iostream>

using namespace std;

void TOH(int n,char src,char dest,char helper){
    if(n==0)
    return;
    TOH(n-1,src,helper,dest);
    cout <<"Move Top Most from "<<src<<" To "<<dest<<endl;
    TOH(n-1,helper,dest,src);
}



int main(int argc, char const *argv[])
{
    TOH(3,'A','C','B');
    return 0;
}
