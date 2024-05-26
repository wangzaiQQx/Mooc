#include <stdio.h>
int main(){
    int a,b,count=0;
    printf("Input your birth year:");
    scanf("%d", &a);
    printf("Input this year:");
    scanf(" %d", &b);
    for(a;a<=b;a++){
        if (a%400==0 || a%4==0 && a%100!=0){
            printf("%d\n",a);
            count++;
        } 
    }
    printf("count=%d\n",count);
}