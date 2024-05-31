#include <stdio.h>
int main(){
    int s,n;

    for (s=0,n=0; s<=140; s++){
        if (s%5 == 0 && s <= 100 || s%6 == 0 && s<=120 || s%7==0) n++;
    }

    printf("n=%d", n);
}