#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int noOfChocolates;
    cin >> noOfChocolates;
    int wrapers=noOfChocolates;
    int newChocolates=wrapers/3;
    int sum=noOfChocolates+newChocolates;
    while (newChocolates>1)
    {
        wrapers=newChocolates;
        newChocolates=wrapers/3;
        sum+=newChocolates;
    }

    cout << sum;
    

    return 0;
}
