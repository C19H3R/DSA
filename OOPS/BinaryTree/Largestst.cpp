#include<iostream>

using namespace std;

struct Info
{
    int min,max,size,ans;
    bool isBst;
};


Info LargestBST(Node* root){
    if(root==NULL)
        return {0,INT_MIN,INT_MAX,0,true};
    if(root->left==NULL&&root->right==NULL){
        return {1,root->data,root->data,1,true}
    }
    
    Info left=largestBST(root->left);
    Info right=largestBST(root->right);

    Info current;

    current.size=(1+left.size+right.size);

    if(left.isBST&&right.isBST && left.max>root->data&&right.min>root->data){
        current.isBBst=true;
        current.min=(leftInfo.min,root->data);

    }

}

void calculatePtrs(Node* root,Node** first,Node** mid,Node** last,Node** prev){
    if(root==NULL){
        return;
    }
    calculatePtrs(root->left,first,mid,last,prev);
    if(*prrev&& root->data<(*prev)->data){
       if(!*first){
           *first=*prev;
           *mid=root;
       }
    }
}
void restoreBST(Node* root){
    Node* first=NULL;
    Node* mid=NULL;
    Node* last=NULL;
    Node* prev=NULL;

    calculatePtrs(root,&first,&mid,&last,&prev)=;

    //case 1 
    if(first && last){
        swap(&(first->data).&(last->data);
    }
    else if(first && mid){
        swap(&(first->data).&(last->data);
    }

}