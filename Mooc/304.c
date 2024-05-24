#include<stdio.h>
#include<math.h>
int main(){
    int t11,t12,t21,t22,t3,t4;
    printf("Input time one(hour, minute):");
    scanf("%d,%d",&t11,&t12);
    printf("Input time two(hour, minute):");
    scanf("%d,%d",&t21,&t22);
    t11 = t11*60+t12-t21*60-t22;
    t11 = abs(t11);
    t3 = t11/60;
    t4 = t11%60;
    printf("%d hour %d minute\n",t3,t4);
}