#include <stdio.h>
#include <stdlib.h>

unsigned int strLen(const char *pString)
{
    if(NULL == pString)
        return 0;
    unsigned int counter =0;
    while(*pString)
    {
        ++counter;
        ++pString;
    }
    return counter;
}

int myAtoI(const char* intString)
{
    unsigned int returnVal=0;
    int strLenOp= strLen(intString);
    for(int i=0;i<strLenOp;i++)
        returnVal = returnVal*10 + intString[i] - '0';

    return returnVal;

}

int main()
{
    char inputValue[1024];
    printf("Enter your number: ");
    scanf("%s",inputValue);
    int retAtoi = myAtoI(inputValue);
    printf("Number is: %d\n", retAtoi);
    return 0;
}