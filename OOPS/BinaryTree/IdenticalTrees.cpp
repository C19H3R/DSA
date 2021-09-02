#include <iostream>
using namespace std;

bool Identical(Node *one, Node *two)
{
    if(one==NULL&&two==NULL){
        return true;
    }
    bool a=(one->data==two data);
    if(!a){
        return false;
    }
    bool b = Idntical(one->left,two->left);
    if(!b)
        return  false;
    bool c = Idntical(one->right,two->right);
    if(c)
        return true;
    return false;

}