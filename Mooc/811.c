#include <stdio.h>

int main(){
    int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int year, month, date, n=0;
    int days = 0;
    scanf("%4d-%2d-%2d",&year,&month,&date);
    for (int i=0; i<month-1; i++) {
        days += months[i];
    }
    for (int i = 1990; i <= year-1; i++) {
        if (i%400==0 || i%4==0 && i%100!=0) n++;
    }
    days += 365*(year-1990) + n + date;
    if ((year%400==0 || year%4==0 && year%100!=0) && (month>2 || month==2 && date==29)) days++;

    int a = days%5;

    if ((year%400==0 || year%4==0 && year%100!=0) && (month==2 && date==29)){
        if (a <= 3 && a > 0) printf("He is working");
        else printf("He is having a rest" );
    }
    else {
        if (date>months[month-1] || month > 12 || date < 1 || month < 1 || year < 1990) printf("Invalid input");

        else {
            if (a <= 3 && a > 0) printf("He is working");
            else printf("He is having a rest" );
        }
    }
}