#include "BST.cpp"
#include <iostream>
using namespace std;

void checkEmpty(bool b)
{
    cout << (b ? "Tree is empty" : "Tree is not empty") << endl;
}
int main()
{
    BST<int> tree;

    checkEmpty(tree.isEmpty());

    tree.insertNode(5);
    tree.insertNode(2);
    tree.insertNode(1);
    tree.insertNode(4);
    tree.insertNode(3);
    tree.insertNode(8);
    tree.insertNode(6);
    tree.insertNode(7);

    checkEmpty(tree.isEmpty());

    cout << "Tree lenght: " << tree.treeLength() << endl;

    cout << "Inorder: ";
    tree.inorder_traversal();
    cout << endl;
    cout << "Preorder: ";
    tree.preorder_traversal();
    cout << endl;
    cout << "Postorder: ";
    tree.postorder_traversal();
    cout << endl;

    // find node
    cout << (tree.findNode(2) ? "Found!" : "Not found!") << endl;

    tree.deleteNode(2);

    cout << "Inorder: ";
    tree.inorder_traversal();
    cout << endl;

    cout << (tree.findNode(2) ? "Found!" : "Not found!") << endl;

    cout << (tree.isEmpty() ? "Empty!" : "Not empty!") << endl;

    tree.~BST();

    cout << (tree.isEmpty() ? "Empty!" : "Not empty!") << endl;
}
