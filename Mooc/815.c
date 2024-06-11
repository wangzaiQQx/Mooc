#include <stdio.h>
int main() {
    for (int i=1; i<10; i++){
        for (int j=0; j<10; j++){
            for (int k=0; k<10; k++){
                for (int m=0; m<10; m++){
                    if (9*(1000*i+100*j+10*k+m) == i+10*j+100*k+1000*m)
                    printf("%d\n", 1000*i+100*j+10*k+m);
                }
            }
        }
    }
}