/**
 * Author: Patrick John Palanas
 * Date: 2020/1/18
 */

#include "CommonTree.h"

Tree newRoot()
{
    Tree T = malloc(sizeof(struct TreeNode));
    T->value = 0;
    T->child = NULL;
    T->sibling = NULL;
    return T;
}

Tree newNode(ElementType V)
{
    Tree T = newRoot();
    T->value = V;
    return T;
}

Tree addChild(Tree T, ElementType V)
{
    Tree C = newNode(V);
    if(T->child != NULL)
    {
        Tree S = T->child;
        while(S->sibling != NULL)
        {
            S = S->sibling;
        }
        S->sibling = C;
    }
    else
        T->child = C;
    return C;
}

void printChild(Tree T)
{
    printf("\t");
    printf(ElementFormat,T->child->value);
    printf("\n\t");
}

void printSibling(Tree T)
{
    while(T->child != NULL)
    {
        printChild(T);
        T = T->child;
    }
}

void preorderTraversal(Tree T)
{
    printf(ElementFormat,T->value);
    printf("\n");
    while(T->child != NULL)
    {
        printChild(T);
        T = T->child;
    }
}

void postorderTraversal(Tree T)
{

}
