#include<stdio.h>
int main(){
    float a,b,compete,standard;
    printf("Input percent of A and B:");
    scanf("%f%f",&a,&b);
    compete = 10*a+6*b;
    standard = 8*a+10*b;
    printf("compete = %.4f\nstandard = %.4f\n",compete,standard);
    if (compete>standard) printf("The Best Response is compete!");
    else printf("The Best Response is standard!");
    return 0;
}