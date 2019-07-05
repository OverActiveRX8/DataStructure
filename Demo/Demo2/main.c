#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int dataType;

struct stack
{
    int maxSize;
    dataType * array;
    int cursor;
};

typedef struct stack *stack_t;

stack_t newStack(int max)
{
    stack_t S = malloc(sizeof(struct stack));
    S->cursor = 0;
    S->maxSize = max;
    S->array = malloc(sizeof(dataType) * max);
    return S;
}

stack_t deleteStack(stack_t S)
{
    free(S->array);
    free(S);
}

bool stackIsfull(stack_t S)
{
    return S->cursor==(S->maxSize) ? 1 : 0;
}

void pushStack(stack_t S, dataType a)
{
    if(!stackIsfull(S))
    {
        S->array[S->cursor] = a;
        S->cursor++;
    }
    else
        perror("Stack is full!");
}

dataType popStack(stack_t S)           //a problem here!!!!!!!!!!1
{
    S->cursor--;
    return S->array[S->cursor+1];
}

int main()
{
    stack_t S = newStack(10);
    pushStack(S,1);
    pushStack(S,3);
    pushStack(S,5);
    pushStack(S,7);
    pushStack(S,9);
    pushStack(S,11);
    pushStack(S,1);
    printf("%d \n", popStack(S));
    printf("%d \n", popStack(S));
    printf("%d \n", popStack(S));
    printf("%d \n", popStack(S));
    return 0;
}

