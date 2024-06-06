#include <stdio.h>
int main() {
    int n;

    printf("Input n(n<=500):");
    scanf("%d", &n);

    for (int i=n, sum=0, count = 0; i>1; i--) {

        int flag = 1;

        for (int j=2; j<i-1; j++) {
            if (i%j==0) {
                flag = 0;
                break;
            }
        }

        if (flag) {
            printf("%6d", i);
            sum += i;
            count++;
            if (count == 10 || i==2) {
                printf("\nsum=%d\n", sum);
                break;
            }
        } 

    } 
}