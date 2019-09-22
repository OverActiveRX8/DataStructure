/*
 * Seq List
 * Author: PJ Palanas
 * Date: 2019/09/22
 */
#ifndef __SEQ_LIST_H
#define __SEQ_LIST_H
#include <stdio.h>
#include <stdlib.h>
#define elementType int

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
void listAddAt (list_t *list, elementType value, int location);

#endif
