#include <stdio.h>

long Fact(int n){
    if (n < 0) return -1;
    if (n==0||n==1) return 1;
    return n*Fact(n-1);
}

int main(){
    printf("%d", Fact(9));
}