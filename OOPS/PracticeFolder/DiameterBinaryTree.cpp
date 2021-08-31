#include <iostream>

int calcDia(Node *root, int *height)
{
    if (root == NULL)
    {
        *heifht = 0;
    }
    int left = 0;
    int right = 0;

    int leftDia = calcDia(root->left, &left);
    int rightDia = calcDia(root->left, &right);
    height * = max(left, right) + 1;
    return max(leftDia, RightDia, left + right + 1);
}

void sumreplacement(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    sumreplacement(root->left);
    sumreplacement(root->right);
    root->data += root->left->data + root->right->data;
}

bool isBalanced(Node *root)
{
    if (isBalanced())
}

void LevelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *node = q.front();
        if (node)
        {
            cout << node->data;
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }else if(!q.empty()){
            //cout << 
            q.push(NUL)
        }
    }
}


Node* LowestCommon(Node* root,int n1,int n2){

    if(root==NULL){
        return NULL;
    }

    if(root->data==n1||root->data==n2){
        return root;
    }
    Node* left= LowestCommon(root->left,n1,n2);
    Node* right=LowestCommon(root->right,n1,n2);

    if(left!=NULL&&right!=NULL){
        return root;
    }
    else if(left==NULL&&right==NULL){
        return NULL;
    }
    else if(left!=NULL){
        return left;
    }
    return right;

}
int findDist(Node* root,int n,int dist){
    if(root==NULL)
        return -1;
    
    if(root->data==n1)
        return distance;
    int value=max(findDist(root->right,n,dist),findDist(root->left,n,dist));
    
}

int dist(Node* root,int n2, int n1){

    Node* lca=LowestCommon(root,n1,n2);
    int d1=findDist(lca,n1,0);
    int d1=findDist(lca,n2,0);
    return d1+d2;
    
}

void flatten(Node* root){
    if(root->left!=NULL){
        flaten(root->left);
        Node* temp=root->right;
        root->right =root->left;
        root->left=NULL;
        Node* t = root->right;
        while(t->right != NULL){
            t = t->right;
        }
        r->right =tmp;
    }
    flaten(root->right);
}