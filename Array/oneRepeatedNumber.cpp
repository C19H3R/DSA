#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    const int n=4;
    int nums[n+1];
    //starts from [0]-[n]

    for (int i = 0; i <= n; i++)
    {
        cin >> nums[i];
    }

    for (int i = 1; i <= n; i++)
    {
        int counter=0;
        for (int j = 0; j <=n ; j++)
        {
            if(nums[j]==i){
                counter++;
            }
        }
        if(counter==2){
            cout << i;
            break;
        }
        
    }
    

    



    return 0;
}
