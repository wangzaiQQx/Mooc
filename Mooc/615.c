#include <stdio.h>

int getint(int min, int max);

int getint(int min, int max){
    int num;

    scanf(" %d", &num);
    while (num < min || num > max){
        printf( "Please enter an integer [%d..%d]:\n", min, max);
        scanf(" %d", &num);
    }

    printf("The integer you have entered is:%d\n",num);

    return num;
}

int main(){
    int min, max;
    printf("Please enter min,max:\n");
    scanf("%d,%d", &min, &max);
    printf( "Please enter an integer [%d..%d]:\n", min, max);
    getint(min, max);
} 