#include <stdio.h>
#define N 100

void FindSaddlePoint(int a[][N], int m, int n);
void FindSaddlePoint(int a[][N], int m, int n) {

    int flag = 1;

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {

            int sum = 0;

            for (int k=0; k<n; k++){
                if (a[i][j] > a[i][k]) sum++;
            }

            for (int k=0; k<m; k++){
                if (a[i][j] < a[k][j]) sum++;
            }

            if (sum==m+n-2) {
                printf("a[%d][%d] is %d\n",i,j,a[i][j]);
                flag=0;
                break;
            }
        }
    }

    if (flag) printf("No saddle point!\n");

}

int main() {
    int a[N][N];
    int m,n;
    printf("Input m,n:\n");
    scanf("%d,%d", &m,&n);
    printf("Input matrix:\n");

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    FindSaddlePoint(a, m, n);
}