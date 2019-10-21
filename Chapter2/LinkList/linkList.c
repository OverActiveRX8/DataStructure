/**
 * Linked List (Singly)
 * Author: PJ Palanas
 * Date: 2019/09/23
 */
#include "linkList.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef elementType
node_p createHead(){
     node_p headNode;
     headNode = malloc(sizeof(node));
     headNode->nodeValue = 0;
     headNode->nextNode = NULL;
     return headNode;
}

node_p createNode(elementType value){
    node_p newNode;
    newNode = malloc(sizeof(node));
    newNode->nodeValue = value;
    newNode->nextNode = NULL;
    return newNode;
}

#if elementType == int
linkList createQueue(){
    elementType inVal = 0;
    node_p head = createHead();
    node_p tail;
    tail = head;
    printf("Input the elements:\n");
    scanf("%d", &inVal);
    while(inVal != 0){
        node_p new = createNode(inVal);
        tail->nextNode = new;
        tail = new;
        scanf("%d", &inVal);
    }
    printf("Successfully created!\n");
    tail->nextNode = NULL;
    return head;
}
linkList createStack(){
    elementType inVal = 0;
    node_p head = createHead();
    head->nextNode = NULL;
    printf("Input the elements:\n");
    scanf("%d", &inVal);
    while(inVal != 0){
        node_p new = createNode(inVal);
        new->nextNode = head->nextNode;
        head->nextNode = new;
        scanf("%d", &inVal);
    }
    printf("Successfully created!\n");
    return head;
}
#endif

linkList makeEmpty(linkList list){
    return createList();
}
bool isEmpty(linkList list){
    return list->nextNode == NULL;
}
bool isLast(node_p node){
    return node->nextNode == NULL;
}
node_p findNode(elementType val, linkList list){
    node_p tempNode = list->nextNode;
    while(tempNode != NULL && tempNode->nodeValue != val)
        tempNode = tempNode->nextNode;
    return tempNode; //if nothing was found => tempNode == NULL
}
node_p findPrevious(elementType val, linkList list){
    node_p tempNode = list;
    while(tempNode->nextNode != NULL && tempNode->nextNode->nodeValue != val)
        tempNode = tempNode->nextNode;
    return tempNode; //if nothing was found => tempNode == last node
}
void deleteNode(elementType val, linkList list){
    node_p tempNode = findPrevious(val,list);
    if(!isLast(tempNode)){
        node_p next = tempNode->nextNode;
        tempNode->nextNode = tempNode->nextNode->nextNode;
        free(next);
    }
}
void deleteList(linkList list){
    node_p tempNode = list->nextNode;
    while(tempNode != NULL){
        node_p next = tempNode->nextNode;
        free(tempNode);
        tempNode = next;
    }
    free(list);
    list->nextNode = NULL;
}
void insertNode(elementType val, linkList list, node_p position){
    node_p newNode = createNode(val);
    if(newNode == NULL) perror("Out of space!");
    else{
        newNode->nextNode = position->nextNode;
        position->nextNode = newNode;
    }
}
node_p header(linkList list){
    return list;
}
node_p first(linkList list){
    return list->nextNode;
}
node_p advance(node_p node){
    return node->nextNode;
}
elementType retrieve(node_p node){
    return node->nodeValue;
}

#endif