#include "BST.h"
#include <iostream>
using namespace std;

template <class T>
BST<T>::BST()
{
    this->root = NULL;
}

template <class T>
BST<T>::~BST()
{
    makeEmpty(root);
}

template <class T>
void BST<T>::insertNode(TreeNode<T> *&tree, T data)
{
    if (tree == NULL)
    {
        tree = new TreeNode<T>(data);
    }
    else if (data < tree->data)
    {
        insertNode(tree->left, data);
    }
    else
    {
        insertNode(tree->right, data);
    }
}

template <class T>
void BST<T>::insertNode(T data)
{
    insertNode(this->root, data);
}

template <class T>
void BST<T>::inorder_traversal(TreeNode<T> *root)
{
    if (root == NULL)
        return;

    inorder_traversal(root->left);
    cout << root->data << " ";
    inorder_traversal(root->right);
}

template <class T>
void BST<T>::inorder_traversal()
{
    inorder_traversal(this->root);
}

template <class T>
void BST<T>::preorder_traversal(TreeNode<T> *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}

template <class T>
void BST<T>::preorder_traversal()
{
    preorder_traversal(this->root);
}

template <class T>
void BST<T>::postorder_traversal(TreeNode<T> *root)
{
    if (root == NULL)
        return;

    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout << root->data << " ";
}

template <class T>
void BST<T>::postorder_traversal()
{
    postorder_traversal(this->root);
}

template <class T>
bool BST<T>::isEmpty()
{
    if (root == NULL)
        return true;
    else
        return false;
}

template <class T>
int BST<T>::treeLength(TreeNode<T> *tree)
{
    if (tree == NULL)
        return 0;

    return 1 + treeLength(tree->left) + treeLength(tree->right);
}

template <class T>
int BST<T>::treeLength()
{
    return treeLength(this->root);
}

template <class T>
bool BST<T>::findNode(TreeNode<T> *tree, T data)
{
    if (tree == NULL)
        return false;

    if (tree->data == data)
        return true;
    else if (data < tree->data)
        return findNode(tree->left, data);
    else
        return findNode(tree->right, data);
}

template <class T>
bool BST<T>::findNode(T data)
{
    return findNode(root, data);
}

template <class T>
TreeNode<T> *BST<T>::deleteNode(TreeNode<T> *&tree, T data)
{
    if (data < tree->data)
        tree->left = deleteNode(tree->left, data);
    else if (data > tree->data)
        tree->right = deleteNode(tree->right, data);
    else
    {
        // no child
        if (tree->left == NULL && tree->right == NULL)
        {
            delete tree;
            return NULL;
        }

        // 1 child
        else if (tree->left == NULL || tree->right == NULL)
        {
            TreeNode<T> *temp = temp->left ? temp->left : tree->right;
            delete tree;
            return temp;
        }

        // 2 child
        else if (tree->left != NULL && tree->right != NULL)
        {
            TreeNode<T> *temp = tree->right;
            while (temp->left != NULL)
            {
                temp = temp->left;
            }

            tree->data = temp->data;
            tree->right = deleteNode(tree->right, temp->data);
        }
    }
    return tree;
}

template <class T>
void BST<T>::deleteNode(T data)
{
    if (findNode(data) && !isEmpty())
        this->root = deleteNode(root, data);
}

template <class T>
void BST<T>::makeEmpty(TreeNode<T> *&tree)
{
    if (tree == NULL)
        return;
    makeEmpty(tree->left);
    makeEmpty(tree->right);
    delete tree;
    tree = NULL;
}

template <class T>
void BST<T>::makeEmpty()
{
    makeEmpty(root);
}