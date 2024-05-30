#include <stdio.h>

int main(){
    double x, a, sum;
    int n, sign;
    printf("Input x:\n");
    scanf("%lf", &x);
    a = x, sign = 1, sum = x;
    for (n = 1; a >= 0.00001 || a <= -0.00001; n++){
        a *= x*x/(2*n)/(2*n+1);
        // printf("%lf\n",a);
        sign = -sign;
        sum += sign*a;
    }
    printf("sin(x)=%.3f,count=%d\n",sum,n);
}