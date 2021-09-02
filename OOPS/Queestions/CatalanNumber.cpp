#include <iostream>

using namespace std;

int catalan(int n)
{
    if (n <= 1)
        return 1;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result += catalan(i) * catalan(n - i - 1);
    }

    return result;
}

vector<Node *> consructTrees(int start, int end)
{
    if(start>end){
        return NULL;
    }

    vector<Node *> trees;
    for (int i = start; i <= end; i++)
    {
        vector<Node *> leftSubtrees = constructTrees(start, i - 1);
        vector<Node *> rrightSubtrees = constructTrees(i + 1, end);

        for (int j = 0; j < leftSubtree.size(); j++)
        {
            Node *left = leftSubtrree[j];
            for (int k = 0; k < rightSubtree.size(); k++)
            {
                Node *right = rightSubtrree[j];
                Node* newNode=new Node(i);
                node->left=left;
                node->right=right;
                tree.push_back(node);
            }
            /* code */
        }
    }

    return 
}

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; i++)
    {
        cout << catalan(i) << " ";
    }

    return 0;
}


void PrintZigZag(Node* root){
    stack<Node*> currLvl;
    stack<Node*> nextLvl;
    Node* itrator=root;
    currlvl.push(itrator);
    currlvl.push(NULL);
    bool right;
    while (!currLvl.empty||!nextLvl.empty())
    {
        if(!currLvl.empty()){
            if(currLvl.top()->left)
            currLvl.push(currLvl.top()->left)
            if(currLvl.top()->right)
            currLvl.push(currLvl.top()->right)
            currLvl.pop();
        }

        if(left)
    }
    
    

}