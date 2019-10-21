#include "stack.h"

int main() {
    stack newStack = createStack();
    push(1,newStack);
    push(2,newStack);
    push(3,newStack);
    pop(newStack);
    printf("%d",top(newStack));
    makeEmpty(newStack);
    disposeStack(newStack);
    return 0;
}