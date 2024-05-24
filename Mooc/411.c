#include<stdio.h>
int main(){
    int a,b,c;
    c = scanf("%d %d",&a,&b);
    if (c != 2) printf("Input error!");
    else printf("a = %d, b = %d\n",a,b);
}