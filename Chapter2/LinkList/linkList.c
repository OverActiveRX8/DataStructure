/*
 * Linked List (Singly)
 * Author: PJ Palanas
 * Date: 2019/09/23
 */
#include "linkList.h"

#ifdef elementType
node_p createHead(){
     node_p headNode;
     headNode = malloc(sizeof(node_t));
     headNode->nodeValue = 0;
     headNode->nextNode = NULL;
     return headNode;
}

node_p createNode(elementType value){
    node_p newNode;
    newNode = malloc(sizeof(node_t));
    newNode->nodeValue = value;
    newNode->nextNode = NULL;
    return newNode;
}

#endif