
//Definition for singly-linked list.

#include <iostream>
#include <string>


char* countAndSay(int n) {

    int size = 1;
    char array[100];
    array[0] = 1 + '0';
    array[1] = '\0';
    char* temp;

    if(n>0){
        if(n== 1){
            strcpy(temp,array);
            return temp;
        }
        else if(n > 1){
            for(int i =2;i<n;i++){
                
            }
        }
    }
    
}

int main(int argc, char const *argv[])
{
    /* code */
    char ar[10]= "Hello";
    strcpy(ar,"Hi Man ");
    char* a = countAndSay(1);
    printf("%s\n",a);
    return 0;
}
