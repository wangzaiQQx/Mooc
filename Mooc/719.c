#include <stdio.h>

int fun(int n);
int fun(int n){
    int x,y,z;
    for (x=3; x<=9 ; x++){
        for (y=2; y<=9; y++){
            for (z=0; z<=9 ; z++){
                if (100*x + 110*y + 12*z == n){
                    return 100*x+10*y+z;
                } 
            }
        }
    }
    return 0;
}

int main(){
    int n;

    printf("Input n(n<1000):\n");
    scanf("%d", &n);

    n = fun(n);

    if (n==0) printf("Invalid\n");
    else printf("X=%d,Y=%d,Z=%d\n",n/100, n%100/10, n%10);
}