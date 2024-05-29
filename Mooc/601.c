#include <stdio.h>
long Fact(int n);

int main (){
    int n;
    int a,b,c;
    for (n=100;n<=999;n++){
        a = n/100;
        b = n%100/10;
        c = n%10;
        if (n == Fact(a)+Fact(b)+Fact(c)) 
        printf("%d\n", n);    
    }
    
}


long Fact(int n){
    int i=1;

    for (n;n>1;n--){
    i *= n;
    }

    return i;
}