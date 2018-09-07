二叉搜索树的建立，二叉树中序的入栈出栈
#include <iostream>
#include <vector>
using namespace std;
struct tree{
    int data;
    tree* l;
    tree* r;
};
void insert(tree* &root, int n) {
    if(root == NULL) {
        root = new tree;
        root->data = n;
        root->l = NULL;
        root->r = NULL;
    }else if(n <= root->data){
        insert(root->l,n);
    }else{
        insert(root->r,n);
    }
}

void dfs(tree* root) {
    if(root != NULL) {
        cout <<"push " <<root->data << endl;
        if(root->l != NULL) dfs(root->l);
        cout << "pop" << root->data << "\n";
        if(root->r != NULL) dfs(root->r);
    }
}
void dfs2(tree* root) {
    if(root != NULL) {
        if(root->l != NULL) dfs2(root->l);
        cout << root->data << " ";
        if(root->r != NULL) dfs2(root->r);
    }
}

int main() {
    tree* root = NULL;
    insert(root, 3);
    insert(root, 7);
    insert(root, 6);
    insert(root, 5);
    insert(root, 2);
    insert(root, 1);
    
    dfs(root);
    dfs2(root);
    
    
}
