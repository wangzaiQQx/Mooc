#include <stdio.h>
int main() {
    for (int i=0; ;i++){
        if (i%8==1 && i/8%8==1 && i/8/8%8==7) {
            int a = i/8/8/8;
            if (i%17==4 && i/17%17==15 && i/17/17%17==2*a) {
                printf("%d\n", i);
                break;
            }
        }
    }
}