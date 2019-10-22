/**
 * Queue
 * Author: P J Palanas
 * Date: 2019/10/22
 */
#ifndef _QUEUE_H
#define _QUEUE_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define elementType int
#define minSize 3

#ifdef elementType
typedef struct Queue{
    int front;
    int rear;
    elementType *array;
    int size;
} *queue;
bool isEmpty(queue q);
bool isFull(queue q);
queue createQueue(int maxSize);
void disposeQueue(queue q);
void makeEmpty(queue q);
void enqueue(elementType val, queue q);
elementType front(queue q);
void dequeue(queue q);
elementType frontAndDequeue(queue q);

#endif //elementType

#endif //_QUEUE_H
