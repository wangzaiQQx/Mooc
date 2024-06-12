#include <stdio.h>

int func(int n);
int func(int n) {
    if (n==0 || n== 1) return 1;
    return n*func(n-1);
}

int main() {

    for (int a=1; a<=9; a++) {
        for (int b=0; b<=9; b++) {
            for (int c=0; c<=9; c++) {
                if (func(a)+func(b)+func(c)== 100*a+10*b+c)
                printf("%ld\n", 100*a+10*b+c);
            }
        }
    }
}