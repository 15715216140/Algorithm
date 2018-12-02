#include <iostream>

using namespace std;
struct node {
    int data;
    node *left;
    node *right;
};

void roateLeft(node *&root) {
    node *t = root->right;
    root->right = t->left;
    t->left = root;
    root = t;
}

void roateRight(node *&root) {
    node *t = root->left;
    root->left = t->right;
    t->right = root;
    root = t;
}

void roateLeftRight(node *&root) {
    roateLeft(root->left);
    roateRight(root);
}

void roateRightLeft(node *&root) {
    roateRight(root->right);
    roateLeft(root);
}

int getHeight(node *root) {
    return root == NULL ? 0 : max(getHeight(root->left), getHeight(root->right)) + 1;
}

void insert(node *&root, int val) {
    if (root == NULL) {
        root = new node();
        root->data = val;
        root->left = NULL;
        root->right = NULL;
    } else if (val < root->data) {
        insert(root->left, val);//左插
        if (getHeight(root->left) - getHeight(root->right) == 2) {
            val < root->left->data ? roateRight(root) : roateLeftRight(root);
        }
    } else {
        insert(root->right, val);//右插
        if (getHeight(root->left) - getHeight(root->right) == -2) {
            val > root->right->data ? roateLeft(root) : roateRightLeft(root);
        }
    }
}

void dfs(node *&root) {
    if (root != NULL) {
        dfs(root->left);
        cout << root->data;
        dfs(root->right);
    }
}

int main() {


    int n, val;
    scanf("%d", &n);
    node *root = NULL;
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        insert(root, val);
    }
    printf("%d", root->data);
    return 0;
}


