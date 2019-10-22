#include <stdio.h>
#include "seqStack.h"

int main() {
    stack s = createStack(3);
    push(1, s);
    push(2, s);
    push(3, s);
    pop(s);
    push(4, s);
    printf("%d\n", top(s));
    printf("%d\n", getPop(s));
    printf("%d\n", top(s));
    makeEmpty(s);
    disposeStack(s);
    return 0;
}