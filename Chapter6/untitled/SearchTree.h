/***
 * @brief Binary search tree
 * @author Patrick John Palanas
 * @date 2020/01/19
 */

#ifndef _SEARCHTREE_H_
#define _SEARCHTREE_H_

#include <iostream>

template <class T> class Node
{
public:
    T key;
    Node *left;
    Node *right;
    Node(T value, Node *lchild, Node *rchild): key(value),left(lchild),right(rchild) {}
};

template <class T> class STree
{
private:
    Node<T> *root;
public:
    void preorder();
    void inorder();
    void postorder();
    Node<T>* search();
    T searchMin();
    T searchMax();
    Node<T>* successor(Node<T> *node);
    Node<T>* predecessor(Node<T> *node);
    void insert(T key);
    void remove(T key);
    void destoryTree();
    void printTree();
private:
    void preorder(Node<T>* node);
    void inorder(Node<T>* node);
    void postorder(Node<T>* node);
    void insert(Node<T>* tree, T key);
};

#endif //_SEARCHTREE_H_
