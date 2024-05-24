#include<stdio.h>
#include<math.h>
int main(){
   float length;
   int days;
   printf("Input length and days:");
   scanf("%f,%d",&length,&days);
   length *= 1/pow(2,days);
   printf("length=%.5f\n",length);
}