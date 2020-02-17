/***
 * @brief Binary search tree (Using template & STL)
 * @author Patrick John Palanas
 * @date 2020/01/19
 */

#ifndef _SEARCHTREE_H_
#define _SEARCHTREE_H_

#define RECURSIVE 0

#include <iostream>
#include <stack>

template <class T> class Node
{
public:
    T key;
    Node *left;
    Node *right;
    bool ltag {true};
    bool rtag {true};
    Node(T value, Node *lchild, Node *rchild): key(value),left(lchild),right(rchild) {}
    Node(Node *lchild, Node *rchild): left(lchild),right(rchild) {}
};

template <class T> class STree
{
private:
    Node<T> *root;
    int total;
    bool thread {false};

public:
    //Constructor
    STree(): root(nullptr), total(0) {std::cout<<"Successfully generated empty tree."<<std::endl;};
    //User interface
    void preorder();
    void inorder();
    void inthreading();
    void postorder();
    Node<T>* search(T key);
    Node<T>* searchFather(T key);
    T searchMin();
    T searchMax();
    void insert(T key);
    void remove(T key);
    void destoryTree();
    void printTree();

private:
    //Inner interface
    void preorder(Node<T>* node);
    void inorder(Node<T>* node);
    void postorder(Node<T>* node);
    void inthreading(Node<T>* node);
    void insert(Node<T>* &tree, T key);
    bool destoryTree(Node<T> *&tree);
    T searchMin(Node<T> *tree);
    T searchMax(Node<T> *tree);
    Node<T>* search(Node<T> *tree, T key);
    Node<T>* searchFather(Node<T> *tree, T key);
    void print(Node<T> *tree, int h);
};

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
Node<T> *STree<T>::search(T key)
{
    Node<T>* node = search(root, key);
//    if(node == nullptr)
//        std::cout<<"Value "<<key<<" not found!"<<std::endl;
//    else
//        std::cout<<"Value "<<node->key<<" found in address "<<node<<"!"<<std::endl;
    return node;
}

template<class T>
T STree<T>::searchMin()
{
    return searchMin(root);
}

template<class T>
T STree<T>::searchMax()
{
    return searchMax(root);
}

template<class T>
void STree<T>::insert(T key)
{
    insert(root, key);
    total++;
    if(thread)
        inthreading();
}

template<class T>
void STree<T>::remove(T key)
{
    Node<T>* predecessor = searchFather(key);
    Node<T>* node = search(key);
    if(node->right != nullptr && node->left != nullptr)
    {
        T temp = searchMin(node->right);
        remove(temp);
        node->key = temp;
        return;
    }
    else if(node->right == nullptr && node->left == nullptr)
    {
        if(predecessor->left == node)
            predecessor->left = nullptr;
        else
            predecessor->right = nullptr;
        delete(node);
        node = nullptr;
        total--;
        return;
    }
    else
    {
        if(node->right != nullptr)
            predecessor->right = node->right;
        else if(node->left != nullptr)
            predecessor->left = node->left;
        delete(node);
        node = nullptr;
        total--;
        return;
    }
}

template<class T>
void STree<T>::destoryTree()
{
    bool state = destoryTree(root);
    if(total == 0 && state)
        std::cout<<"Safely deleted tree."<<std::endl;
    else
        std::cerr<<"Memory leak may happened!"<<std::endl;
}

template<class T>
void STree<T>::printTree()
{
    print(root, 0);
}

#if RECURSIVE
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
void STree<T>::inorder(Node<T> *node)
{
    if(node != nullptr)
    {
        inorder(node->left);
        std::cout<<node->key<<std::endl;
        inorder(node->right);
    }
}

#else
template<class T>
void STree<T>::preorder(Node<T> *node)
{
    std::stack<Node<T>*> S;
    while(node != nullptr || S.size() != 0)
    {
        if(node != nullptr)
        {
            S.push(node);
            std::cout<<node->key<<std::endl;
            node = node->left;
        }
        else
        {
            node = S.top()->right;
            S.pop();
        }
    }
}

template<class T>
void STree<T>::postorder(Node<T> *node)
{
    Node<T>* temp = node;
    std::stack<Node<T>*> S;
    while (node != nullptr || S.size() != 0)
    {
        if (node != nullptr && temp != node->left && temp != node->right)
        {
            S.push(node);
            node = node->left;
        }
        else
        {
            node = S.top();
            if(node->right != nullptr && temp != node->right)
            {
                node = node->right;
            }
            else
            {
                std::cout<<node->key<<std::endl;
                temp = S.top();
                S.pop();
                if(S.size() != 0)
                    node = S.top();
                else
                    break;
            }
        }
    }
}

template<class T>
void STree<T>::inorder(Node<T> *node)
{
    std::stack<Node<T> *> S;
    while (node != nullptr || S.size() != 0)
    {
        if (node != nullptr)
        {
            S.push(node);
            node = node->left;
        }
        else
        {
            node = S.top()->right;
            std::cout << S.top()->key << std::endl;
            S.pop();
        }
    }
}
#endif

template<class T>
void STree<T>::insert(Node<T>* &tree, T key)
{
    if(search(key) != nullptr)
    {
        std::cout << "Repeated element!" << std::endl;
        total--;
        return;
    }
    auto *newNode = new Node<T>(key, nullptr, nullptr);
    Node<T> *a = tree;
    Node<T> *b = nullptr;
    if(tree == nullptr)
        tree = newNode;
    else
    {
        while (a != nullptr)
        {
            b = a;
            if (key < a->key)
                a = a->left;
            else
                a = a->right;
        }
        if (key < b->key)
            b->left = newNode;
        else
            b->right = newNode;
    }
}

template<class T>
bool STree<T>::destoryTree(Node<T> *&tree)
{
    if(tree == nullptr)
    {
        std::cerr << "Empty tree!" << std::endl;
        return false;
    }
    else
    {
        if(tree->left != nullptr)
            destoryTree(tree->left);
        if(tree->right != nullptr)
            destoryTree(tree->right);
        delete(tree);
        tree = nullptr;
        total --;
        return true;
    }
}

template<class T>
T STree<T>::searchMin(Node<T> *tree)
{
    if(tree->left != nullptr)
        return searchMin(tree->left);
    else
        return tree->key;
}

template<class T>
T STree<T>::searchMax(Node<T> *tree)
{
    if(tree->right != nullptr)
        return searchMax(tree->right);
    else
        return tree->key;
}

template<class T>
Node<T>* STree<T>::search(Node<T> *tree, T key)
{
    while(tree != nullptr)
    {
        if (key < tree->key)
            return search(tree->left, key);
        else if (key > tree->key)
            return search(tree->right, key);
        else
            return tree;
    }
    return nullptr;
}

template<class T>
Node<T>* STree<T>::searchFather(Node<T> *tree, T key)
{
    Node<T>* temp = nullptr;
    while(tree != nullptr)
    {
        if (key < tree->key)
        {
            temp = tree;
            tree = tree->left;
        }
        else if (key > tree->key)
        {
            temp = tree;
            tree = tree->right;
        }
        else
            break;
    }
    return temp;
}

template<class T>
void STree<T>::print(Node<T> *tree, int h)
{
    if(tree != nullptr)
    {
        print(tree->right,h+1);
        for(int i=0;i<h;i++)
            std::cout<<"\t";
        std::cout<<tree->key;
        print(tree->left,h+1);
    }
    std::cout<<std::endl;
}

template<class T>
Node<T> *STree<T>::searchFather(T key)
{
    return searchFather(root, key);
}

template<class T>
void STree<T>::inthreading(Node<T> *node)
{
    static Node<T>* lastNode = nullptr;
    if(node != nullptr)
    {
        inthreading(node->left);
        if (lastNode != nullptr)
        {
            if (node->left == nullptr)
            {
                node->ltag = false;
                node->left = lastNode;
            }
            if (lastNode->right == nullptr)
            {
                lastNode->rtag = false;
                lastNode->right = node;
            }
        }
        lastNode = node;
        inthreading(node->right);
    }
}

template<class T>
void STree<T>::inthreading()
{
    inthreading(root);
    thread = true;
}

#endif //_SEARCHTREE_H_
