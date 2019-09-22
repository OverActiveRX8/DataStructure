#include <stdio.h>
#include "seqList.h"

int main() {
    list_t newList = listInit(5);
    listAdd(&newList,1);
    listAdd(&newList,3);
    listAdd(&newList,5);
    listAdd(&newList,7);
    listAdd(&newList,9);
    listAddAt(&newList,0,2);
    listPrint(newList,1,6);
    return 0;
}