#include <stdio.h>
#include <math.h> 

int main() {
    int x, bai,shi,ge;
    printf("Input x:\n");
    scanf("%d", &x);
    x = abs(x);
    bai = x / 100;
    shi = x / 10 % 10;
    ge = x % 10;
    printf("y=%d\n",100*ge+10*shi+bai);
    return 0;
}