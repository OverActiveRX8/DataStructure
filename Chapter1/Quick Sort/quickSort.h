/*
 * Quick Sort Algorithm
 * Author: PJ Palanas
 * Date: 2019/09/22
 * Time Complexity: O(log2n)
*/

#ifndef __QUICK_SORT_H
#define __QUICK_SORT_H
#define elementType int
#define arraySize(x) sizeof(x)/sizeof(elementType)

//Swap Value
void swapValue(elementType *x, elementType *y);

//Quick Sort Function
void quickSort(elementType* list, elementType *start, elementType *end);

#endif
