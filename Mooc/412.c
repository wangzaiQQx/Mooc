#include<stdio.h>
int main(){
    int year,a;
    a = scanf("%d",&year);
    if (a!=1 || year<=0){
        printf("Input error!");
    }
    else{
        if ((year%400 == 0)||(year%4 == 0 && year%100!=0 )) printf("Yes\n");
        else printf("No\n");
    }
}