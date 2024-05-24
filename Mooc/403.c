#include<stdio.h>
#include<math.h>
int main(){
    double capital,rate,deposit;
    int year,flag=1;
    char letter;
    printf("Input capital, year:");
    scanf("%lf,%d",&capital,&year);
    printf("Compound interest (Y/N)?");
    scanf(" %c",&letter);
    if (year == 1 || year == 2 ||year == 3 ||year == 5 ||year == 8){
        if (year==1) rate=0.0225;
        else if (year==2) rate=0.0243;
        else if (year==3) rate=0.0270;
        else if (year==5) rate=0.0288;
        else if (year==8) rate=0.0300;
        if (letter=='Y'||letter=='y') deposit = capital*pow((1.0+rate),year);
        else deposit = capital*(1.0+rate*year);
        printf("rate = %.4f, deposit = %.4f\n",rate,deposit);
    }
    else printf("Error year!\n");
}