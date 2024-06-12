#include <stdio.h>

int CountRepeatNum(int count[], int n);

int CountRepeatNum(int count[], int n) {

    while (n > 0) {
        if (count[n%10]++ > 0) return n%10;
        n /= 10;
    }
    
    return -1;
}

int main(){
    int count[9]={0};
    long n;
    printf("Input n:\n");
    scanf("%ld", &n);
    if (CountRepeatNum(count,n)==-1) printf("No repeated digit!\n");
    else printf("Repeated digit!\n");

}