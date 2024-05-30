#include <stdio.h>
int fun(int m);

int fun(int m){

    for (int i=2;i<m;i++){
        if (m%i == 0) return 0;
    }

    return 1;
}

int main(){
    int sum = 0;

    for (int i=100; i<=200; i++){
        if (fun(i)) sum += i;
    }

    printf("sum=%d\n",sum);
}