#include "seqList.h"

int main() {
    list_t listA = listInit(5);
    list_t listB = listInit(5);
    listAdd(&listA,1);
    listAdd(&listA,3);
    listAdd(&listA,5);
    listAdd(&listA,7);
    listAdd(&listA,9);
    listAdd(&listB,1);
    listAdd(&listB,2);
    listAdd(&listB,6);
    listAdd(&listB,7);
    listAdd(&listB,10);
    list_t listC = listUnion(&listA,&listB);
    listSort(&listC);
    listPrint(listC,1,listC.currentLength);
    return 0;
}