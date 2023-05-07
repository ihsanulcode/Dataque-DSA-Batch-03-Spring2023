#include <iostream>
using namespace std;

template <class T>
class TreeNode
{
public:
    T data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(T data)
    {
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};

template <class T>
class BST
{
private:
    TreeNode<T> *root;
    void insertNode(TreeNode<T> *&tree, T data);
    void inorder_traversal(TreeNode<T> *root);
    void preorder_traversal(TreeNode<T> *root);
    void postorder_traversal(TreeNode<T> *root);
    int treeLength(TreeNode<T> *root);

public:
    BST();
    void insertNode(T);
    void inorder_traversal();
    void preorder_traversal();
    void postorder_traversal();
    bool isEmpty();
    int treeLength();
};
