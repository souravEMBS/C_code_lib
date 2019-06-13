#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int* countDigit(char* string,int size)
{
    int *input;
    input = (int*)malloc(10*sizeof(int));
    memset(input,0,sizeof(input));
    for(int i =0;i < size+1;i++)
    {
        if(string[i]>47 && string[i] <= 57)
        {
            //printf("Digit found\n");
            switch(string[i])
            {
                case '0':
                    input[0] = input[0] +1; 
                    break;
                case '1':
                    input[1] = input[1] +1; 
                    break;
                case '2':
                    input[2] = input[2] +1; 
                    break;
                case '3':
                    input[3] = input[3] +1; 
                    break;
                case '4':
                    input[4] = input[4] +1; 
                    break;
                case '5':
                    input[5] = input[5] +1; 
                    break;
                case '6':
                    input[6] = input[6] +1; 
                    break;
                case '7':
                    input[7] = input[7] +1; 
                    break;
                case '8':
                    input[8] = input[8] +1; 
                    break;
                case '9':
                    input[9] = input[9] +1; 
                    break;
            }
        }
    }
    return input;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char *input;
    input = (char*)malloc(1000*sizeof(char));

    scanf("%s",input);
    
    int size = strlen(input);
    //for(int i =0; i< size;i++)
        //printf("[%c] ",input[i]);
    int* data = countDigit(input,size);
    for(int i =0; i< 10;i++)
        printf("%d ",data[i]);
    free(input);
    free(data);
    return 0;
}