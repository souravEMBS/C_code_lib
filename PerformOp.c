#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int** performOps(int **A, int m, int n, int *len1, int *len2) {
    int i, j;
    *len1 = m;
    *len2 = n;
    int **B = (int **)malloc((*len1) * sizeof(int *));
    for (i = 0; i < *len1; i++) {
        B[i] = (int *)malloc((*len2) * sizeof(int));
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            B[i][n - 1 - j] = A[i][j];
        }
    }
    return B;
}

int main()
{
    int len1, len2;
    int m=3,n=4;
    //int **A = (int **)malloc(4*sizeof(int *));
    int temp[3][4]= {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int **A = (int **)malloc((3) * sizeof(int *));
    for (int i = 0; i < 3; i++) {
        A[i] = (int *)malloc((4) * sizeof(int));
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j]= temp[i][j];
        }
    }
    //
    //int **C = A;
    int **B = performOps(A, m, n, &len1, &len2);
    int i, j;
    for (i = 0; i < len1; i++) {
        for (j = 0; j < len2; j++) {
            printf("%d ", B[i][j]);
        }
}
    return 0;

}
