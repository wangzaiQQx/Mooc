#include<stdio.h>
int main(){
    int n;
    printf("Please enter the number:\n");
    scanf("%d",&n);
    if (n>0 && n<10000){
        if (n<10) printf("%d: 0-9\n",n);
        else if (n<100) printf("%d: 10-99\n",n);
        else if (n<1000) printf("%d: 100-999\n",n);
        else printf("%d: 1000-9999\n",n);
    }
    else printf("error!\n");
}