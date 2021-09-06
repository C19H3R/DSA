#include<iostream>

using namespace std;


bool isPossible(int arr[],int books,int students,int curr_min){
    int studentsRequired=1;
    int curr_sum;
    for (int i = 0; i < books; i++)
    {
        if(arr[i]>curr_min)
        return false;
        if(curr_sum +arr[i]>curr_min){
            studentsRequired++;
        }
    }
    
}


int findPages(int arr[,int books,int students]){
    long long sum=0;
    if(books<pages){
        return -1;
    }

    for (int i = 0; i < books; i++)
    {
        sum+=arr[i];
    }

    int start=0;
    int end=sum;
    int result=INT_MAX;

    while (start<=end)
    {
        int mid=(start+end)/2;
        if(isPossible(arr,books,students,mid)){
            result=mid;

            end=mid-1;
        }else
        start=mid+1;
    }
    return result;
}

int main(){
    int arr[] = {12,34,67,90};
}