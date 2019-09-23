/*
 * Linked List (Singly)
 * Author: PJ Palanas
 * Date: 2019/09/23
 */
#ifndef __LINKLIST__H
#define __LINKLIST__H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define elementType int

#ifdef elementType
typedef struct Node{
    elementType nodeValue;
    struct Node *nextNode;
}node_t, *node_p;

node_p createHead();
node_p createNode(elementType value);

#endif
#endif
