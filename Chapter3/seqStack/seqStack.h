/**
 * Seq Stack
 * Author: P J Palanas
 * Date: 2019/10/22
 */

#ifndef _SEQSTACK_H
#define _SEQSTACK_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define elementType int
#define minSize 3
#define empty -1

#ifdef elementType

typedef struct seqStack{
    int size;
    int top;
    elementType *array;
} *stack;
stack createStack(int maxSize);
bool isFull(stack s);
bool isEmpty(stack s);
void disposeStack(stack s);
void makeEmpty(stack s);
void push(elementType val, stack s);
elementType top(stack s);
void pop(stack s);
elementType getPop(stack s);

#endif //elementType

#endif //_SEQSTACK_H
