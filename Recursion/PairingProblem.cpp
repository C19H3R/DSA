#include<iostream>

using namespace std;

int friendsProlblem(int n){
    if(n==0||n==1||n==2)
    return n;

    return friendsProlblem(n-1)+friendsProlblem(n-2)*(n-1);

}
int main(int argc, char const *argv[])
{
    cout << friendsProlblem(4);
    return 0;
}
