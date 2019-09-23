/*
 * Quick Sort Algorithm
 * Author: PJ Palanas
 * Date: 2019/09/22
 * Time Complexity: O(log2n)
*/
#include "quickSort.h"

//Swap Value Function
void swapValue(elementType *x, elementType *y){
    elementType temp = *x;
    *x = *y;
    *y = temp;
}

//Quick Sort Function
void quickSort(elementType* list, elementType *start, elementType *end){
    elementType *startPointer = start;
    elementType *endPointer = end;
    elementType midValue = *start;
    if (start > end)
        return;
    while (end > start){
        while (start < end && *end >= midValue){
            end--;
        }
        while (start < end && *start <= midValue){
            start++;
        }
        swapValue(end,start);
    }
    swapValue(start,startPointer);
    quickSort(list,startPointer,end-1);
    quickSort(list,end+1,endPointer);
}

