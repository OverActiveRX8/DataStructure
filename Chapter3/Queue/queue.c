/**
 * Queue
 * Author: P J Palanas
 * Date: 2019/10/22
 */
#include "queue.h"

bool isEmpty(queue q) {
    return q->front == q->rear;
}
bool isFull(queue q) {
    return (q->rear+1) % (q->size) == q->front;
}
queue createQueue(int maxSize) {
    if(maxSize < minSize) {
        perror("Too small!");
    }
    queue q = malloc(sizeof(struct Queue));
    if(q == NULL) {
        perror("Out of space!");
    } else {
        q->size = maxSize;
        q->array = malloc(sizeof(elementType) * maxSize);
        q->front = q->rear = 0;
    }
    return q;
}
void disposeQueue(queue q) {
    free(q->array);
    free(q);
}
void makeEmpty(queue q) {
    q->front = q->rear = 0;
}
void enqueue(elementType val, queue q) {
    if(isFull(q))
        perror("Queue is full!");
    else {
        q->array[q->rear] = val;
        q->rear = (q->rear+1) % (q->size);
    }
}
void dequeue(queue q) {
    if(!isEmpty(q))
        q->front = (q->front+1) % (q->size);
    else
        perror("Empty queue!");
}
//Following functions return 0 for empty queue
elementType front(queue q) {
    if(!isEmpty(q))
        return q->front;
    else
        perror("Empty queue!");
    return 0;
}
elementType frontAndDequeue(queue q) {
    if(!isEmpty(q))
    {
        elementType val = q->array[q->front];
        q->front = (q->front+1) % (q->size);
        return val;
    } else {
        perror("Empty queue!");
        return 0;
    }
}