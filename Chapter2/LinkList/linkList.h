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
}node, *node_p;
typedef node_p Queue,linkList,Stack;

node_p createHead();
node_p createNode(elementType value);

//For Queue & Stack base on linklist
#if elementType == int
Queue createQueue();
Stack createStack();
#define createList() createQueue()
#endif /* elementType == int */

//Singly Linklist Processes
linkList makeEmpty(linkList list);
bool isEmpty(linkList list);
bool isLast(node_p node);
node_p findNode(elementType val, linkList list);
node_p findPrevious(elementType val, linkList list);
void deleteNode(elementType val, linkList list);
void deleteList(linkList list);
void insertNode(elementType val, linkList list, node_p position);
node_p header(linkList list);
node_p first(linkList list);
node_p advance(node_p node);
elementType retrieve(node_p node);

#endif /* elementType */
#endif /* __LINKLIST__H */
