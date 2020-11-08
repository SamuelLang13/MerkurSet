#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIST_MAX 1000


int newArray(int *array,int n)
{
    int size=0;
    int newArray[size];
    for (int i = 0; i < n; i++)
    {
        if(array[i]>0)
        {
            size++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        newArray[i]=array[i];
    }
    return newArray;
}


int readBeam(int *array, int n)
{
    int in=0;
    int size=0;
    printf("Delky nosniku:\n");
    for (int i = 0; i < n; i++)
    {
        size++;
        while ((in=scanf("%d",array+i))!=EOF)
        {
            //printf("%d\n",array[i]);
            if(in!=1 || array[i]<1 || size>1000)
            {
                printf("Nespravny vstup.\n");
                return 0;
            }
        }
    }
    if(array[2]<1)
    {
        printf("Nespravny vstup.\n");
        return 0;
    }
    return 1;
}


int main() {
    int n=1000;
    int array[LIST_MAX];
    int size;
    memset(array,0,n*sizeof(array[0]));
    printf("%d\n",sizeof array / sizeof array[0]);
    if(readBeam(array,n)==1)
    {
        printf("OK\n");
    }
    newArray(array,n);

    return 0;
}
