#include <stdio.h>
#include <stdbool.h>

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

bool strCmp(const char* compString,const char* myString)
{
    unsigned int length = strLen(compString);
    unsigned int mystrLength = strLen(myString);
    if(mystrLength != length)
        return false;
    else
    {
        for(int i=0;i<length;i++)
        {
            if(compString[i] != myString[i])
                return false;
        }
        return true;
    }

}

int main()
{
    char myString[1024];
    printf("Enter your string: ");
    scanf("%[^\n]s",myString);
    //printf("Enter your string: %s",myString);
    int strlenOp = strLen(myString);
    printf("Your string length is [%d]\n",strlenOp);
    bool op = strCmp("sourav",myString);
    printf("Strcmp op: %s\n",op ? "true" : "false");
    return 0;
}