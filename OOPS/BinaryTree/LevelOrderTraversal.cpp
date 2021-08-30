#include<iostream>
#include<queue>
int main(int argc, char const *argv[])
{
    
    return 0;
}
void printLevelOrder(Noide * root){
    if(root==NULL){
        return ;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node* node=q.front();
        if(node !=NULL){
            cout << node->left<<" ";
            if(node->left)
        }
    }
    

}