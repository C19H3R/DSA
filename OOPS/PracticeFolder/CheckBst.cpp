#include<iostream>

using namespace std;

class Node{
    public:
    Node* left;
    Node* right;
    int data;
    Node(int x){
        right=NULL;
        left=NULL;
        data=
    }
}

bool isValidBst(Node* root,int min,int max){
    if(root==NULL){
        return true;
    }
    if(root->data>min&&root->data<max){
        bool leftValid=isValidBst(root->left,min,root->data);
        bool rightValid=isValidBst(root->right,root->data,max);
        if(leftValid&&rightValid)
            return true;
    }
    return false;
}

bool isValid(Node* root,Node* min,Node* max){

    if(root==NULL)
        return true;
    if(min && root->data<=min->data||max && root->data>=max->data)
        return false;

    bool leftValid=isValid(root->left,min,root);
    bool rightValid=isValid(root->right,root,max);

    return leftValid&& rightValid;
    
}

Node* BalancedBST(int arr[],int min,int max,int n){

    if(min>max)
        return NULL;
    //make middle the root;
    int idx=(max+min)/2;
    Node* newNode=new Node(arr[idx]);

    Node* root=newNode;
    root->left=BalancedBST(arr,min,idx-1,n);
    root->right=BalancedBST(arr,idx+1,max,n);

    return root;
}