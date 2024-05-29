#include <stdio.h>
int Gcd(int a, int b);
int main(){
    int m,n,gcd;
    printf("Input m,n:");
    scanf("%d,%d",&m,&n);
    gcd = Gcd(m,n);
    if (gcd ==-1) printf("Input error!\n");
    else {
        printf("%d/%d\n",m/gcd,n/gcd);
    }
}

int Gcd(int a, int b){
    int i;
    if (a>= 1&& a<=10000 && b>=1 && b<=10000){
        for (i=a;i>=1;i--){
            if (a%i==0 && b%i == 0) return i;
        }
    }
    else return -1;
}