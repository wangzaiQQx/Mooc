#include <stdio.h>
long Func(int n);
int main(){
    int i, n;
    printf("Input n:");
    scanf("%d", &n);
    for (i=1; i<n; i++) printf("%d! = %ld\n", i, Func(i));
    return 0;
}
long Func(int n){
    // long p = 1;
    static long p = 1;
    p = p*n;
    return p;
}