#include <stdio.h>
void swap(int *x, int *y);

int main(){
    int a,b;
    a = 5;
    b = 9;
    swap(&a,&b);
    printf("a=%d, b=%d", a, b);
    return 0;
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}