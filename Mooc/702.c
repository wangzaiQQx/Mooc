#include <stdio.h>
int Sum(int n);
int Sum(int n){
    if (n == 1) return 1;
    return n + Sum(n-1);
}

int main(){
    int n;
    printf("Please input n:");
    scanf("%d", &n);
    if (n < 1) printf("data error!");
    else printf("sum=%d\n", Sum(n));
}