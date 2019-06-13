#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(int* arr, int size)
{
    for(int i = 0;i<size;i++)
        printf("[%d] ",*(arr+i));
    int temp[size];
    int j = 0;
    for (int i = size-1;i>=0;i--)
    {
        temp[i]=*(arr + j);
        j++;
    }
    printf("\n");
    for(int i = 0;i<size;i++)
        printf("[%d] ",temp[i]);
    memcpy(arr,temp,sizeof(temp));
}

int main()
{
    int num, *arr, i;
    scanf("%d",&num);
    arr = (int *)malloc(num*sizeof(int));
    for(i=0;i<num;i++)
    {
        scanf("%d",arr+i);
    }

    reverse(arr,num);
    printf("\n");
    for(int i = 0;i<num;i++)
        printf("[%d] ",*(arr+i));
}