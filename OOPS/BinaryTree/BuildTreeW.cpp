#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

Node *buildPostOrder(vector<int> post, vector<int> in, int start, int end)
{

    if (start > end)
    {
        return NULL;
    }

    static int Idx;
    int curr = in[Idx];
    Idx++;
    Node *node = new Node(curr);

    if (start == end)
    {
        return node;
    }

    node->right = buildPostOrder(post, in, post + 1, end);
    node->left = buildPostOrder(post, in, start, post - 1);

    return node;
}

void printInorder(Node *root)
{   
    if(root==NULL){
        return ;
    }

    printInorder(root->right);
    cout << root->data;
    printInorder(root->left);
}

int main(int argc, char const *argv[])
{

    return 0;
}
