#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int addOne(int value)
{
    //2's complement of x = -(x+1) which is ~x
    //-(-(x+1)) = x+1 or -(~x)
    int newValue = -(~value);
    return newValue;
}

int flip(unsigned int n)
{
    return n&(n-1);
}

int overflow(int* result, int a, int b)
{
    if(INT_MAX < (a+b))
        return -1;
    else
    {
        *result = a+b;
        return 0;
    }
    
}

void printBits(int n)
{
    unsigned int endBit;
    if(n>0)
        printBits(n>>1);
    printf("%d",n&1);
}

int xorNumbers(int a,int b)
{
    return a^b;
}

int countBits(int a)
{
    int count =0;
    while(a)
    {
        count += a&1;
        a >>= 1;
    }
}

int main(){
    int value;
    printf("Enter number: ");
    scanf("%d",&value);
    printf("\n%d\n",addOne(value));
    printf("Flip: %d\n",flip(value));
    int *res = (int*)malloc(sizeof(int));
    int a =20;
    int b = 10;
    printf("Res %d\n",overflow(res,a,b));
    printBits(134);
    printf("\n");
    free(res);

}