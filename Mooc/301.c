#include<stdio.h>

int main(){
    int math1,english,math2;
    printf("Input math1, English and math2:");
    scanf("%d,%d,%d",&math1,&english,&math2);
    printf("Final score = %.2f\n",(math1*5+english*1.5+math2*3.5)/10);
}