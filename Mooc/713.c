#include <stdio.h>
int Magic(int m);
int Magic(int m){
    int a, b, c;
    for (a=1; a <= 9; a++){
        for (b=0; b<=9; b++){
            for (c=0; c<=9; c++){
                if (m == 122*a+ 212*b + 221*c) return 100*a + 10*b + c;
            }
        }
    }
    return 0;
}

int main(){
    int m,result;
    scanf("%d", &m);
    result = Magic(m);
    if (result){
        printf("The number is %d\n", result);
    }
    else printf("The sum you calculated is wrong!\n");
}