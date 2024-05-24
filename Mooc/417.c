#include<stdio.h>
#include<math.h>
int main(){
    float dist, fee;
    int time;
    printf("Input distance and time:");
    scanf("%f,%d",&dist,&time);
    if (dist<=3) fee = 8;
    else if (dist>3 && dist<=10) fee = 8 + (dist-3)*2;
    else fee = 8 + 14 + (dist-10)*3;
    fee += time/5*2;
    printf("fee = %.0f\n", fee);
}