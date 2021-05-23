#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[5];
    int arr2[3];
    int n=5,n1=3;

    for (int  i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (size_t i = 0; i < n1; i++)
    {
        cin >> arr2[i];
    }
    int arrUnion[8]={0};
    int arrIntersec[3]={0};
    int intersectSize=0;
    int unionSize=5;

    // for (int i = 0; i < 5; i++)
    // {
    //     arrUnion[i]=arr[i];
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     bool present=false;
    //     int index=0;
    //     for (int j = 0; j < unionSize; j++)
    //     {
    //         if(arr2[i]==arrUnion[j]){
    //             present=true;
    //         }
    //     }
        

    //     if(!present){
    //         arrUnion[unionSize]=arr2[i];
    //         unionSize++;
    //     }
    //     //add to union array;
    // }
    
    for (int i = 0; i < 5; i++)
    {
        bool present=false;
        for (int j = 0; j < 3; j++)
        {
            if (arr[i]==arr2[j])
            {
                present=true;
            }
            
        }
        if(present){
            arrIntersec[intersectSize]=arr[i];
            intersectSize++;
        }
        
    }
    

   
    
    for (int i = 0; i < intersectSize; i++)
    {
        cout << arrIntersec[i]<<" ";
    }
    

    
    return 0;
}
