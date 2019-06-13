#include <stdio.h>
#include <stdlib.h>

//bigO (n^2)
void shift(int *arrayPtr,int size)
{
    int temp = 0;
    int pos;
    for(int i=1;i<size;i++){
        temp = arrayPtr[i];
        pos = i;
        while(pos > 0 && arrayPtr[pos-1]>temp)
        {
            arrayPtr[pos] = arrayPtr[pos-1];
            pos--;
        }
        arrayPtr[pos] = temp;
    }
}

void print(int *arrayPtr,int size)
{
    for(int i=0;i<size;i++)
        printf("[%d] ",arrayPtr[i]);
    printf("\n");
}

int main(){
    int unsorted[6]={7,2,4,1,5,3};
    print(unsorted,6);
    shift(unsorted,6);
    print(unsorted,6);

    return 0;
}