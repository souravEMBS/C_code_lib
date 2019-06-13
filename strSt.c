#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strStr(char* haystack, char* needle) {
    char in1[1024];
    char in2[1024];
    strcpy(in1,haystack);
    strcpy(in2,needle);
    int len = strlen(in1);
    int nLen = strlen(in2);
    int count =0;
    for(int i =0;i<len-nLen;i++){
        if(strncmp((in1+i),in2,nLen) == 0){
            count++;
            return i;
        }
        
    }
    if(count == 0)
        return -1;
    return count;  
}

int main(int argc, char const *argv[])
{
    /* code */
    int val = strStr("aaaaa","bba");
    printf("%d\n",val);
    return 0;
}