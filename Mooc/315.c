#include <stdio.h>

int main(){
    char a,b,c;
    printf("Input your English name:\n");
    scanf("%c%c%c",&a,&b,&c);
    printf("%c%c%c\n",a-32,b,c);
    printf("%c:%d\n%c:%d\n%c:%d\n",a,a-96,b,b-96,c,c-96);
    return 0;
}