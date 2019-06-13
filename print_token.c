#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char* s;
    s = malloc(1024*sizeof(char));
    scanf("%[^\n]",s);
    s = realloc(s, strlen(s)+1);

    //printf("%s\n",s);
    char* tok;
    tok = strtok(s," ");
    while(tok != NULL)
    {
        printf("%s\n",tok);
        tok = strtok(NULL," ");
        //printf("%s\n",tok);
    }

    return 0;

}