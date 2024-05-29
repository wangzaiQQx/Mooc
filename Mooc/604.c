#include <stdio.h>
int IsPrime(int x);
int IsPrime(int x){
    int i;
    for (i=2;i<x;i++){
        if (x%i == 0) return 1;
    }
    return 0;
}

int main(){
    int n,i,sum=0;
    printf("Input n:");
    scanf("%d",&n);
    for (i=2;i<=n;i++){
       if (!IsPrime(i)) sum +=i; 
    }
    printf("sum=%d\n",sum);
}