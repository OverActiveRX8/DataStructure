//
// Created by Patrick John Palanas on 2020/1/18.
//

#ifndef _BTREE_H_
#define _BTREE_H_

typedef int ElementType;
#define ElementFormat "%d"

typedef struct BinaryTree *BTree;
typedef struct BinaryTree *SearchTree;

struct BinaryTree
{
    ElementType value;
    BTree lchild;
    BTree rchild;
};

#endif //_BTREE_H_
