#include <stdio.h>
int main(){
    int a,b,count=0,heartbeats;
    // unsigned long a,b,count=0,heartbeats;
    printf("Input your birth year:");
    scanf("%d", &a);
    printf("Input this year:");
    scanf(" %d", &b);
    heartbeats = (b-a)*365*24*60*75;
    for(a;a<b;a++){
        if (a%400==0 || a%4==0 && a%100!=0) count++;
    }
    heartbeats += count*24*60*75;
    printf("The heart beats in your life: %lu",heartbeats);
}