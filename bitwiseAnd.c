#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
    int sum=0;
    if(n==1)
        return a;
    else if(n==2)
        return b;
    else if(n==3)
        return c;
    else
    {
        /* code */
        sum = find_nth_term(n-1,a,b,c) + find_nth_term(n-2,a,b,c)+find_nth_term(n-3,a,b,c);
    }
    
    return sum;
}

int sum_n(int a,int b,int c)
{
    int sum = a + b + c;
    return sum;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}