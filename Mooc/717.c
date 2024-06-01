#include <stdio.h>

int Gcd(int a, int b);

int Gcd(int a, int b){
    if (a==b) return a;
    else if (a > b) return Gcd(a-b,b);
    else if (b > a) return Gcd(a,b-a);
}

int main(){
    int a, b;
    printf("Input a,b:");
    scanf("%d,%d", &a, &b);
    if (a>0 && b>0) printf("%d\n", Gcd(a,b));
    else printf("Input error!\n");
}