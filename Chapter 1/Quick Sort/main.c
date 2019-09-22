#include <stdio.h>
#include "quickSort.h"

int main(){
    elementType intArray[] = {20,3910493,49305,49194,3921,4,32,1204,20};
    quickSort(intArray,&intArray[0],&intArray[arraySize(intArray)-1]);
    for(unsigned long i = 0;i < arraySize(intArray);i++)
        printf("%d\n",intArray[i]);
    return 0;
}
