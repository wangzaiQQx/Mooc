#include <stdio.h>
unsigned int ComputeAge(unsigned int n);

unsigned int ComputeAge(unsigned int n){
    if (n==1) return 10;
    return ComputeAge(n-1) + 2;
}

int main(){
    unsigned int n;
    scanf("%u", &n);
    printf("The person's age is %u\n", ComputeAge(n));
}