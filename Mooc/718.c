#include <stdio.h>
int mid(int a, int b, int c); 

int mid(int a, int b, int c){
    if (a >= b && a <= c) return a;
    else if (b >= a && b <= c) return b;
    else if (c >= a && c <= b) return c;
}

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("The result is %d\n", mid(a,b,c));   
}
