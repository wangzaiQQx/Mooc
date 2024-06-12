#include <stdio.h>

int fib(int n);

int fib(int n) {
    if (n==0 || n==1) return 1;
    return fib(n-1) + fib(n -2);
}


int main() {
    int n;

    printf("Input n(n<=12):\n");
    scanf("%d", &n);

    for (int i=1;i<=n;i++) {
        printf("%4d", fib(i));
    }

    printf("\nTotal=%d\n",fib(n));
}