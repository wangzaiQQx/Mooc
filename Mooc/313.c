#include <stdio.h>
#include <math.h>
int main(){
    float x,y;
    printf("Please input x and y:\n");
    scanf("%f,%f",&x,&y);
    printf("Result=%.2f\n",pow(x,2)+pow(y,2));
    return 0;
}