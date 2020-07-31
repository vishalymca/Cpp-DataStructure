#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node*left;
        node*right;

        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

node* buildTree(){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }
    node * root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

bool search(node*root,int key)
{
    if(root==NULL)
        return false;
    if(root->data==key)
        return true;
   /*
   Not working
    return search(root->left,key);
    return search(root->right,key);*/

    bool opt1=search(root->left,key);
    if(opt1) return true;
    bool opt2=search(root->right,key);
    if(opt2) return true;
}

void printPre(node *root){
    if(root==NULL){
        return;
    }
    //Otherwise, print root first followed by subtrees(children)
    cout<<root->data<<" ";
    printPre(root->left);
    printPre(root->right);
}



int main(){
    node* root = buildTree();
    cout<<"Preorder Traversal"<<endl;
    printPre(root);
    cout<<endl;
    cout<<search(root,9);

return 0;
}
//8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1








