/***
 * @brief Binary search tree
 * @author Patrick John Palanas
 * @date 2020/01/19
 */

#include "SearchTree.h"

template<class T>
void STree<T>::preorder()
{
    preorder(root);
}

template<class T>
void STree<T>::inorder()
{
    inorder(root);
}

template<class T>
void STree<T>::postorder()
{
    postorder(root);
}

template<class T>
Node<T> *STree<T>::search()
{
    return nullptr;
}

template<class T>
T STree<T>::searchMin()
{
    return 0;
}

template<class T>
T STree<T>::searchMax()
{
    return 0;
}

template<class T>
Node<T> *STree<T>::successor(Node<T> *node)
{
    return nullptr;
}

template<class T>
Node<T> *STree<T>::predecessor(Node<T> *node)
{
    return nullptr;
}

template<class T>
void STree<T>::insert(T key)
{
    insert(root, key);
}

template<class T>
void STree<T>::remove(T key)
{

}

template<class T>
void STree<T>::destoryTree()
{

}

template<class T>
void STree<T>::printTree()
{

}

template<class T>
void STree<T>::preorder(Node<T> *node)
{
    if(node != nullptr)
    {
        std::cout<<node->key<<std::endl;
        preorder(node->left);
        preorder(node->right);
    }
}

template<class T>
void STree<T>::inorder(Node<T> *node)
{
    if(node != nullptr)
    {
        inorder(node->left);
        std::cout<<node->key<<std::endl;
        inorder(node->right);
    }
}

template<class T>
void STree<T>::postorder(Node<T> *node)
{
    if(node != nullptr)
    {
        postorder(node->left);
        postorder(node->right);
        std::cout<<node->key<<std::endl;
    }
}

template<class T>
void STree<T>::insert(Node<T> *tree, T key)
{
    Node<T>* newNode = Node<T>(key, nullptr, nullptr);
    if(tree == nullptr)
        tree = newNode;
    else
    {
        Node<T> *node = tree;
        while (node != nullptr)
        {
            if (key < tree->left)
                node = tree->left;
            else
                node = tree->right;
        }
        node = newNode;
    }
}


