#include<stdio.h>

int main(){
    int weight,height;
    printf("Input weight, height:\n" );
    scanf("%d,%d",&weight,&height);
    weight *= 2;
    printf("weight=%d\n",weight);
    float height1 = (float)height/100;
    printf("height=%.2f\n",height1);
    printf("t=%.2f\n",weight/2/(height1*height1));
}