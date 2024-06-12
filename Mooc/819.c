#include <stdio.h>
int main() {

    for (int m=31; ;m++){
        if (m*m/1000 == m*m%1000/100 && m*m%10==m*m%100/10) {
            printf("k=%d,m=%d\n", m*m, m);
            break;
        }
    }

}