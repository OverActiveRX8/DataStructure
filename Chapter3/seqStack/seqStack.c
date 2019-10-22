/**
 * Seq Stack
 * Author: P J Palanas
 * Date: 2019/10/22
 */
#include "seqStack.h"

#ifdef elementType

/**
 * @brief create empty stack
 * @param maxSize max size of stack array
 * @return empty stack
 */
stack createStack(int maxSize) {
    if(maxSize < minSize)
        perror("Too small!");
    stack s = malloc(sizeof(struct seqStack));
    if(s == NULL)
        perror("Out of space!");
    else {
       s->array = malloc(sizeof(elementType)*maxSize);
       if(s->array == NULL)
           perror("Out of space!");
       else {
           s->size = maxSize;
           s->top = empty;
       }
    }
    return s;
}

/**
 * @brief determine if a stack is full
 * @param s stack
 * @return true=>full
 */
bool isFull(stack s) {
    return s->size == (s->top+1);
}

/**
 * @brief determine if a stack is empty
 * @param s stack
 * @return true=>empty
 */
bool isEmpty(stack s) {
    return s->top == empty;
}

/**
 * @brief free a stack
 * @param s stack
 */
void disposeStack(stack s) {
    free(s->array);
    free(s);
}

/**
 * @brief clear a stack
 * @param s stack
 */
void makeEmpty(stack s) {
    s->top = empty;
}

/**
 * @brief push an element into stack
 * @param val element
 * @param s stack
 */
void push(elementType val, stack s) {
    if(isFull(s))
        perror("Out of space");
    else
        s->array[++s->top] = val;
}

/**
 * @brief get the top element in stack
 * @param s stack
 * @return top element
 */
elementType top(stack s) {
    if(isEmpty(s))
        perror("Empty stack!");
    else
        return s->array[s->top];
    return 0;
}

/**
 * @brief pop a stack
 * @param s stack
 */
void pop(stack s) {
    if(isEmpty(s))
        perror("Empty stack!");
    else
        s->top--;
}

/**
 *
 * @brief pop & return popped element of stack
 * @param s stack
 * @return previous top element
 */
elementType getPop(stack s) {
    if(isEmpty(s))
        perror("Empty stack!");
    else {
        return s->array[s->top--];
    }
    return 0;
}

#endif //elementType

