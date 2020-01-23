#include "SearchTree.h"

int main()
{
    STree<int> test = STree<int>();
    test.insert(1);
    test.insert(5);
    test.insert(3);
    test.insert(2);
    test.insert(4);
    test.inorder();
    return 0;
}
