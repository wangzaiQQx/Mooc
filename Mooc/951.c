#include <stdio.h>
void main(){
    int a = 0;
    int *pa = &a;

    printf("a=%d\n",a);
    printf("&a=%p\n", &a);
    printf("pa=%p\n",pa);
}