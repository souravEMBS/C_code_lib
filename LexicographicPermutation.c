#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long factorial(int num)
{
    long long fact = 1;
    
    while(num > 0)
    {
        fact *= num;
        num--;
    }
    
    return fact;
}

int next_permutation(int n, char **s)
{
	/**
	* Complete this method
	* Return 0 when there is no next permutation and 1 otherwise
	* Modify array s to its next permutation
	*/
    int r =n;
    int permutation = factorial(n) / factorial(n-r);
    printf("%d",permutation);
    for(int i=0;i<permutation;i++)
        printf("[%s] ", s[i]);
    return 0;
}



int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	// do
	// {
	// 	for (int i = 0; i < n; i++)
	// 		printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	// } while (next_permutation(n, s));
    printf("Hello");
    next_permutation(n,s);
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}