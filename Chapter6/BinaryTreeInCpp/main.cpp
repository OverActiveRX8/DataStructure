/***
 * @brief Binary search tree test program
 * @author Patrick John Palanas
 * @date 2020/01/19
 */

#include "SearchTree.h"
 
int main()
{
    STree<std::string> test = STree<std::string>();
    test.insert("B0");
    test.insert("A2");
    test.insert("A1");
    test.insert("A3");
    test.insert("A8");
    test.insert("A4");
    test.insert("A0");
    test.insert("A9");
    test.insert("C2");
    test.insert("C1");
    test.insert("C3");
    test.insert("C8");
    test.insert("C0");
    test.insert("C9");
    test.inorder();
    test.destoryTree();
    return 0;
}
