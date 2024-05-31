#include <stdio.h>
#include <math.h>

double Y(double x, int n);
double Y(double x, int n){
    if (n == 0) return 0;
    if (n == 1) return sqrt(x); 
    return sqrt(x + Y(x, n-1));
}


int main(){
    double x,y;
    int n;
    printf("Please input x and n:");
    scanf("%lf,%d",&x,&n);
    y = Y(x,n);
    printf("Result=%.2f\n",y);
}