#include<stdio.h>
int main(){
    char ch;
    printf("Input simple:\n");
    scanf("%c",&ch);
    if (ch>='a' && ch<='z' || ch>='A' && ch<='Z') printf("It is an English character.\n");
    else if (ch >= '0' && ch <= '9') printf("It is a digit character.\n");
    else printf("It is other character.\n");
}