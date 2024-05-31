#include <stdio.h>
int Monkey(int n, int x);
int Monkey(int n, int x) {
    if (n==1) return x;
    return Monkey(n-1, 2*(x+1));
}

int main(){
    int n;
    printf("Input days n:");
    scanf("%d", &n);
    printf("x=%d\n", Monkey(n,1));
}