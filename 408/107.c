#include <stdio.h>
#include <stdlib.h>

void reverse(int *arr, int start, int end);
void exchange(int *a, int m, int n);

void reverse(int *arr, int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void exchange(int *a, int m, int n) {
    reverse(a, 0, m + n - 1);
    reverse(a, 0, n - 1);
    reverse(a, n, m + n - 1);
}

int main() {
    int a[10];
    int b[10];
    int c[20];

    for (int i=0; i<10; i++){
        a[i] = 2*i;
        b[i] = 2*i + 1;
    }

    int i=0,j=0,k=0;

    while (i<6) {
        printf("%4d", a[i]);
        c[k++] = a[i++];
    }
    printf("\n");

    while (j<8) {
        printf("%4d", b[j]);
        c[k++] = b[j++];
    }
    printf("\n");

    for (int k=0; k< 14; k++){
        printf("%4d", c[k]);
    }
    printf("\n");
    
    exchange(c, 6, 8);

    for (int k=0; k< i+j; k++){
        printf("%4d", c[k]);
    }

}