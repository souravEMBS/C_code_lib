#include <stdio.h>
#include <stdlib.h>

struct kvPair{
    int value;
    int key;
};

void printHash(struct kvPair* myValue,int size);
int main()
{
    int size,i,temp;
    printf("Enter the size of the table: ");
    scanf("%d",&size);
    struct kvPair* hashTable = (struct kvPair*)malloc(size*sizeof(struct kvPair));
    printf("Enter your [%d] values\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&temp);
        hashTable[temp%size].value = temp;
        hashTable[temp%size].key= temp%size;
    }
    printHash(hashTable,size);
    free(hashTable);
    return 0;
}

void printHash(struct kvPair* myValue,int size)
{
    printf("Value\tHash\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t%d\n",myValue[i].value,myValue[i].key);
    }
}