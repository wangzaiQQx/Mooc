#include <stdio.h>
#define N 9

int main() {
    int m[N][N];
    int n;

    printf("Input n:");
    scanf("%d", &n);

    printf("Input %d*%d matrix:\n", n, n);

    for(int i=0; i<n; i++) {
        for (int j=0; j<n; j++){
            scanf("%d", &m[i][j]);
        }
    }

    printf("The transposed matrix is:\n");

    for(int i=0; i<n; i++) {
        for (int j=0; j<n; j++){
            printf("%4d", m[j][i]);
        }
        printf("\n");
    }

}