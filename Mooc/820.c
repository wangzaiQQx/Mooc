#include <stdio.h>

int main() {
    int m[4][4];
    int flag=0;

    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    if (
        m[0][0]+m[0][1]+m[0][2]+m[0][3]+m[0][4]==
        m[0][0]+m[1][1]+m[2][2]+m[3][3]+m[4][4]
        ) flag = 1;

    if (flag) {
        printf("It is a magic square!\n");
        for (int i=0; i<5; i++){
            for (int j=0; j<5; j++) {
                printf("%4d", m[i][j]);
            }
            printf("\n");
        }
    }

    else printf("It is not a magic square!\n");
}