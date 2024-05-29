#include <stdio.h>
int Func(int n);
int main(){
    int n;
    printf("Input n:");
    scanf("%d", &n);
    if (n<1000||n>1000000) printf("Input error!");
    else printf("%d\n", Func(n));
}
int Func(int n){
    int i,a,b;

    for (i=1;i<=n;i++){
        a = n%i;
        b = n/i;
        if (a == 0 && b>99 && b<1000) return b;  
    }

}