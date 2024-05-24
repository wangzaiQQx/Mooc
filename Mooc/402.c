#include<stdio.h>
#include<math.h>
int main(){
    double rate, capital, deposit;
    int year;
    char letter;
    printf("Input rate, year, capital:");
    scanf("%lf,%d,%lf", &rate, &year, &capital);
    printf("Compound interest (Y/N)?");
    scanf(" %c", &letter);
    if (letter == 'Y' || letter == 'y') {
        deposit = capital * pow((1.0 + rate), year);
    }
    else{
        deposit = capital * (1.0 + rate * year);
    }
    printf("deposit = %.4f\n", deposit);
    return 0;
}