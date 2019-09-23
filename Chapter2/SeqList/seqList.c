/*
 * Seq List
 * Author: PJ Palanas
 * Date: 2019/09/22
 */
#include "seqList.h"
#ifdef elementType

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
            printf("No.%d: %d\n", i, list.listAddress[i - 1]);
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

void listForceAdd (list_t *list, elementType value)
{
    if (list->currentLength >= list->listLength){
        listReshape(list,list->listLength+1);
        listForceAdd(list,value);
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

void listRmAt (list_t *list, int location){
    if(location > list->currentLength){
        printf("Fault: No value in the referring location!");
    }
    else{
        for(int i = location - 1;i < list->currentLength - 1; i++){
            list->listAddress[i] = list->listAddress[i+1];
        }
        setZero(list,list->currentLength);
    }
}

void listRm (list_t *list){
    listRmAt(list,list->currentLength);
}

//Warning: Except the last value in the list, using this function will not minus 'currentLength' by 1
void setZero (list_t *list, int location){
    if(location > list->currentLength){
        printf("Fault: No value at the referring location!");
    }
    else{
        list->listAddress[location - 1] = 0;
        if(location == list->currentLength)
        {
            list->currentLength --;
        }
    }
}

void setZeroAll (list_t *list){
    for(int i = 0;i < list->currentLength;i++)
        list->listAddress[i] = 0;
    list->currentLength = 0;
}

elementType getValue (list_t *list, int location){
    if(location > list->currentLength){
        printf("Fault: No such value at the referring location!");
    }
    else
        return list->listAddress[location - 1];
}

bool isEmpty (list_t *list){
    bool state = true;
    for(int i = 0;i<list->currentLength;i++){
        if(list->listAddress[i] != 0){
            state = false;
            break;
        }
    }
    return state;
}

bool ifExist (list_t *list, elementType value){
    bool state = false;
    for(int i = 0;i < list->currentLength;i++){
        if(list->listAddress[i] == value){
            state = true;
            break;
        }
    }
    return state;
}

int showLocation (list_t *list, elementType value){
    if(!ifExist(list,value)){
        printf("Fault: Value not found!");
        return 0;
    }
    else{
        for(int i=0;i < list->currentLength - 1;i++){
            if(list->listAddress[i] == value) {
                return (i + 1);
            }
        }
    }
}

void listSort (list_t *list) {
    if (!isEmpty(list)) {
        quickSort(list->listAddress, &list->listAddress[0], &list->listAddress[list->currentLength - 1]);
    }
}

list_t listUnion (list_t *list_a, list_t *list_b){
    list_t newList = listInit(1);
    for(int i = 0;i < list_a->currentLength;i++){
        listForceAdd(&newList,list_a->listAddress[i]);
    }
    for(int j = 0;j < list_b->currentLength;j++){
        if(!ifExist(list_a,list_b->listAddress[j])){
            listForceAdd(&newList,list_b->listAddress[j]);
        }
    }
    return newList;
}

#endif