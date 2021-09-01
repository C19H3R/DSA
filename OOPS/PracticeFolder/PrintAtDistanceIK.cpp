#include <iostream>

using namespace std;

void PrintDown(Node *root, int k);

void PrintAtDistK(Node *root, Node *target, int k)
{
    if (root == NULL)
        return -1;
    if (root == target)
    {
        //PrintDown
    }

    int dl = PrintAtDistK(root->left, targt, k);

    if (dl != -1)
    {
        if (dl + 1 = k)
        {
            cout << root->data;
        }
        else
        {
            PrintDown(root->right, k - (dl + 2));
        }
        return dl + 1;
    }

    int dr = PrintAtDistK(root->right, targt, k);

    if (dl != -1)
    {
        if (dl + 1 = k)
        {
            cout << root->data;
        }
        else
        {
            PrintDown(root->left, k - (dl + 2));
        }
        return dl + 1;
    }
}

Node *LowestCommonAncestor(Node *root, int n, int m)
{

    if (root == NULL)
    {
        return NULL;
    }
    if (n == root->data)
    {
        return root;
    }
    if (m == root->data)
    {
        return root;
    }

    Node *left = LCA(root->left, n, m);
    Node *right = LCA(root->right, n, m);

    if (left == NULL && right == NULL)
    {
        return null;
    }
    else if (left != NULL && right != NULL)
    {
        return root;
    }
    else if (left != NULL)
        return left;
    return right;
}

int calculateDia(Node *root, int *height)
{
    if (root == NULL)
    {

        *height = 0;
        return 0;
    }
    int left = 0;
    int righ = 0;
    int leftDia = caluclateeDia(root->left, &left);
    int rightDia = caluclateeDia(root->left, &right);
    *height = max(left, right) + 1;
    return maxf o 3;
}

int maxSum = -100;

int maxSumTree(Node *root, int *ans)
{
    if (root == NULL)
        return 0;

    int val = root->data;
    int leftVal = maxSumTree(root->left);
    int rightVal = maxSumTree(root->right);
    int currMax = max(val, leftval + val, rightval + val, leftval + val + rightVal);
    *ans = max(*ans, currMax);

    int single pathSum = max of everything except right + left + node val return single path sum;
}

Node *MakeBst(int *arr)
{
    Node *root = new Node(arr[0]);
    Node* tmp=root;
    Node* PrevTmp=root;

    for (int i = 1; i < size, i++)
    {
        tmp=root;

        while(tmp!=NULL){
            prevTmp=tmp;
            if(prevTmp->data<arr[i])
                tmp=tmp->right;
            if(prevTmp->data>arr[i])
                tmp=tmp->left;
        }
        if(prevTmp->data<arr[i])
            prevTmp->righht=new Node(arr[i]);
        if(prevTmp->data>arr[i])
            prevTmp->left=new Node(arr[i]);
        
    }
}