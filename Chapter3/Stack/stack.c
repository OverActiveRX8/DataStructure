/**
 * Stack
 * Author: PJ Palanas
 * Date: 2019/09/23
 */
#include "stack.h"

stack createStack() {
    stack s = malloc(sizeof(struct Node));
    if(s == NULL)
        perror("Out of space!");
    else {
        s->value = 0;
        s->nextNode = NULL;
    }
    return s;
}
bool isEmpty(stack s) {
    return s->nextNode == NULL;
}
void disposeStack(stack s) {
    makeEmpty(s);
    free(s);
    s->nextNode = NULL;
}
void makeEmpty(stack s) {
    while(!isEmpty(s)) {
        pop(s);
    }
}
void push(elementType val,stack s) {
    node_p new = malloc(sizeof(struct Node));
    if(new == NULL)
        perror("Out of space!");
    else {
        new->value = val;
        new->nextNode = s->nextNode;
        s->nextNode = new;
    }
}
void pop(stack s) {
    if(isEmpty(s))
        perror("Empty stack!");
    else {
        node_p temp = s->nextNode;
        s->nextNode = s->nextNode->nextNode;
        free(temp);
    }
}
elementType top(stack s) {
    if(isEmpty(s)) {
        perror("Empty stack!");
        return 0;
    }
    else
        return s->nextNode->value;
}

