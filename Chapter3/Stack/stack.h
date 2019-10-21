/**
 * Stack
 * Author: PJ Palanas
 * Date: 2019/09/23
 */
#ifndef STACK_STACK_H
#define STACK_STACK_H
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define elementType int

typedef struct Node{
    elementType value;
    struct Node *nextNode;
}*stack,*node_p;
bool isEmpty();
stack createStack();
void disposeStack(stack s);
void makeEmpty(stack s);
void push(elementType val,stack s);
void pop(stack s);
elementType top(stack s);

#endif //STACK_STACK_H
