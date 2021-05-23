#include<iostream>
using namespace std;

void PrintMaxAndMin(int[]);
int main(int argc, char const *argv[])
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    PrintMaxAndMin(arr);

    return 0;
}

void PrintMaxAndMin(int arr[]){
  int max=INT32_MIN;
  int min=INT32_MAX;

  for (int i = 0; i < 10; i++)
  {
      max=max>arr[i]?max:arr[i];
      min=min<arr[i]?min:arr[i];
  }
  
    cout << "Max : "<< max << endl;
    cout << "Min : "<< min;
}
