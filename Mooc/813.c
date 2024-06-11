#include <stdio.h>
int main() {
    int m, n, count;
    printf("Input m,n:\n");
    scanf("%d,%d", &m, &n);

    for (count=0 ; m>0; m/=10) {
        if (m%10==n) count++;
    }

    printf("%d\n",count);
}