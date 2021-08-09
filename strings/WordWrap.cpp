#include <iostream>

using namespace std;

int TotalCost(int[],int,int);

int main(int argc, char const *argv[])
{
    int n;
    int k;
    cin >> n;
    cin >> k;
    int nums[n];


    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int ans=TotalCost(nums,k,n);
    

    cout << ans;



    return 0;
}


int TotalCost(int numberArray[],int lineWidth,int length){


int lineCapacity = lineWidth;

int totalCost=0;
int extraSpaces=0;

int i=0;

int spaceLeft=lineWidth;

int currentlyOccupied=0;
while (i<length)
{
    currentlyOccupied+=numberArray[i];
    spaceLeft=lineWidth-currentlyOccupied;
    if(spaceLeft>=(numberArray[i+1]+1)&&i<(length-1)){

        currentlyOccupied+=1;
    }else
    {        


        
        int test=spaceLeft*spaceLeft;
        totalCost+=spaceLeft*spaceLeft;


        cout <<" "<<test<<" ";
        cout <<i<<endl;

        currentlyOccupied=0;
        spaceLeft=lineWidth;
        
    }
    i++;
}

return totalCost;

}