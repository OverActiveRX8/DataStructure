/**
 * Author: Patrick John Palanas
 * Date: 2020/1/18
 */

#ifndef _COMMONTREE_H_
#define _COMMONTREE_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef int ElementType;
#define ElementFormat "%d"

typedef struct TreeNode *node_p;
typedef node_p Tree;

struct TreeNode
{
    ElementType value;
    Tree child;
    Tree sibling;
};

Tree newRoot();
Tree newNode();
Tree addChild(Tree T, ElementType V);
void preorderTraversal(Tree T);
void postorderTraversal(Tree T);

#endif //_COMMONTREE_H_
