/*
 * Seq List
 * Author: PJ Palanas
 * Date: 2019/09/22
 */
#include "seqList.h"

list_t listInit (int length){
    list_t newList;
    newList.listLength = length;
    newList.currentLength = 0;
    newList.listSize = sizeof(elementType)*length;
    newList.listAddress = malloc(newList.listSize);
    return newList;
}

void listFree (list_t *usedList){
    free(usedList->listAddress);
    usedList->listAddress = NULL;
    free(usedList);
    usedList = NULL;
}

void listReshape (list_t *list, int length){
    list->listLength = length;
    list->listSize = sizeof(elementType)*length;
    list->listAddress = realloc(list->listAddress,list->listSize);
}

void listPrint (list_t list, int start, int stop){
    if(stop > list.listLength)
        printf("Fault: OverFlow! Operation(print) failed!\n");
    else if(start <= 0)
        printf("Fault: The list start from 1, pls change the parameter!\n");
    else {
        for (int i = start; i <= stop; i++) {
            printf("No.%d : %d\n", i, list.listAddress[i - 1]);
        }
    }
}

void listAdd (list_t *list, elementType value){
    if (list->currentLength >= list->listLength){
        char choice;
        printf("Overflow! Reshape?(Y/N):");
        scanf("%c", &choice);
        if(choice == 'Y'){
            listReshape(list,list->listLength+1);
            listAdd(list,value);
        }
        else{
            printf("Fault: Overflow! Operation(add) failed!\n");
        }
    }
    else{
        list->listAddress[list->currentLength] = value;
        list->currentLength ++;
    }
}

void listAddAt (list_t *list, elementType value, int location){
    if(list->currentLength >= list->listLength){
        char choice;
        printf("Overflow! Reshape?(Y/N):");
        scanf("%c", &choice);
        if(choice == 'Y'){
            listReshape(list,list->listLength+1);
            listAddAt(list,value,location);
        }
        else{
            printf("Fault: Overflow! Operation(add@) failed!\n");
        }
    }
    else{
        for(int i = list->currentLength - 1;i >= location - 1;i--)
        {
            list->listAddress[i+1] = list->listAddress[i];
        }
        list->listAddress[location-1] = value;
        list->currentLength ++;
    }
}



