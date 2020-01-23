#include "CommonTree.h"

int main() {
    Tree T = newRoot();
    Tree C1 = addChild(T,1);
    addChild(T,2);
    addChild(T,3);
    addChild(C1,4);
    preorderTraversal(T);
}
