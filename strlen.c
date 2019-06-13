#include <stdio.h>

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

int main()
{
    char myString[1024];
    printf("Enter your string: ");
    scanf("%[^\n]s",myString);
    //printf("Enter your string: %s",myString);
    int strlenOp = strLen(myString);
    printf("Your string length is [%d]\n",strlenOp);

    return 0;
}