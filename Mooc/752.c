#include <stdio.h>
void Bin(int x){
    if (x/2 > 0) Bin(x/2);
    printf("%d\n", x%2);
}
int main(){
    Bin(12);
    return 0;
}