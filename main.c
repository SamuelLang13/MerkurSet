#include <stdio.h>
#include <string.h>


int readBeam(int array[],int n)
{
    int x;
    int in;
    int size;
    for (int i = 0; i < n; ++i)
    {
        while ((in=scanf("%d",&x))!=EOF)
        {
            size=sizeof array / sizeof array[0];
            if(x<1 || in!=1)
            {
                return 0;
            }
            else if(size>1000)
            {
                return 0;
            }
            array[i]=x;
        }

    }
    if(array[2]==0)
    {
        printf("NOT OK\n");
        return 0;
    }
    printf("OK\n");
    return 1;
}

//void printArray(int arr[],int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        printf("%d",arr[i]);
//    }
//}


int main() {

    int n=1000;
    int array[n];
    int size;
    //Naplnenie pola 0
    memset(array,0,n*sizeof(array[0]));
    printf("%d\n",sizeof array / sizeof array[0]);
    //printArray(array,n);
    //printf("%d",array[2]);
    readBeam(array,n);




    return 0;
}
