#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Input a/b, c/d:");
    scanf("%d/%d,%d/%d",&a,&b,&c,&d);
    if ((float)a/b>(float)c/d) printf("%d/%d>%d/%d\n",a,b,c,d);
    if ((float)a/b<(float)c/d) printf("%d/%d<%d/%d\n",a,b,c,d);
    if ((float)a/b==(float)c/d) printf("%d/%d=%d/%d\n",a,b,c,d);
}