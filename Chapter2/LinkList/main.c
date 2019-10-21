/**
 * Linked List (Singly)
 * Author: PJ Palanas
 * Date: 2019/09/23
 */
#include "linkList.h"

int main(void){
    linkList newList = createList();
    insertNode(100, newList, newList->nextNode);
    deleteNode(3, newList);
    deleteList(newList);
    return 0;
}

