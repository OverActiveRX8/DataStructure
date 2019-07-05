/*
 * "Data Structure" P9
 * Three object group Demo
 * Date: 2019/7/4
 */

/*Includes*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*Defines*/
typedef int dataType;         //ADT definition

/*Structs*/
struct GroupData
{
    dataType a;
    dataType b;
    dataType c;         //Data Object a,b,c
};
typedef struct GroupData *Group;

/*Functions*/
Group Init(dataType x,dataType y,dataType z)
{
    Group num = malloc(sizeof(struct GroupData));
    num->a=x;
    num->b=y;
    num->c=z;
    return num;
}
void Free(Group num)
{
    free(num);
}
dataType getValue(Group num,int index)
{
    switch(index)
    {
        case 1:
            return num->a;
        case 2:
            return num->b;
        case 3:
            return num->c;
    }
}
void modifyValue(Group num,dataType value,int index)
{
    switch(index)
    {
        case 1:
            num->a = value;
            break;
        case 2:
            num->b = value;
            break;
        case 3:
            num->c = value;
            break;
    }
}
bool isAsc(Group num)
{
    return num->a < num->b && num->b < num->c ? 1 : 0;
}
bool isDesc(Group num)
{
    return num->a > num->b && num->b > num->c ? 1 : 0;
}

/*Main Function*/
int main()
{
    Group num = Init(1,2,3);
    modifyValue(num,20,1);
    modifyValue(num,10,2);
    printf("%d %d %d",getValue(num,1),getValue(num,2),getValue(num,3));
    printf("\nIs Asc?\n");
    if(isAsc(num))
        printf("Y");
    else
        printf("N");
    printf("\nIs Desc?\n");
    if(isDesc(num))
        printf("Y");
    else
        printf("N");
    Free(num);
    return 0;
}