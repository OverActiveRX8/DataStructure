/*
 * Seq List
 * Author: PJ Palanas
 * Date: 2019/09/22
 */
#ifndef __SEQ_LIST_H
#define __SEQ_LIST_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "quickSort.h"
#define elementType int

#ifdef elementType
typedef struct seqList{
    elementType *listAddress;
    int listLength;
    unsigned long listSize;
    int currentLength;
}list_t;

list_t listInit (int length);
void listFree (list_t *usedList);
void listReshape (list_t *list, int length);
void listPrint (list_t list, int start, int stop);
void listAdd (list_t *list, elementType value);
void listForceAdd (list_t *list, elementType value);
void listAddAt (list_t *list, elementType value, int location);
void listRmAt (list_t *list, int location);
void listRm (list_t *list);
void setZero (list_t *list, int location);
void setZeroAll (list_t *list);
elementType getValue (list_t *list, int location);
bool isEmpty (list_t *list);
bool ifExist (list_t *list, elementType value);
int showLocation (list_t *list, elementType value);
void listSort (list_t *list);
list_t listUnion (list_t *list_a, list_t *list_b);

#endif
#endif
