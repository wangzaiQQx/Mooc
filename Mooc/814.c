#include <stdio.h>
int main() {
    for (int i=1; i<10; i++){
        for (int j=0; j<10; j++){
            for (int k=0; k<10; k++){
                for (int m=0; m<10; m++){
                    if (i*i*i*i+j*j*j*j+k*k*k*k+m*m*m*m == 1000*i+100*j+10*k+m)
                    printf("%d\n", 1000*i+100*j+10*k+m);
                }
            }
        }
    }
}