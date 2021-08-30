#include <iostream>
#include<vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};

Node* buildTree(vector<int> pre,vector<int> in,int start,int end){
    
    static int idx=0;
    if(start>end){
        return NULL;
    }
    int curr=pre[idx];
    idx++;
    Node* node=new Node(curr);
    if(start==end){
        return node;
    }

    int pos=search(in,start,end,curr);
    node->left=buildTree(pre,in,start,pos-1);
    node->right=buildTree(pre,in,pos+1,end);

}
Node* buildTreePost(vector<int> post,vector<int> in,int start,int end){
    
    static int idx=4;
    if(start>end){
        return NULL;
    }
    int curr=pre[idx];
    idx--;
    Node* node=new Node(curr);
    if(start==end){
        return node;
    }

    int pos=search(in,start,end,curr);
    node->right=buildTreePost(post,in,pos+1,end);

    node->left=buildTreePost(post,in,start,pos-1);

}

int main(){
    vector<int> preorder={1,2,4,3,5};
    vector<int> inorder={4,2,1,5,3};

}
