#include <stdio.h>

int GetApple(int a[], int height, int n);
int GetApple(int a[], int height, int n) {
    int count = 0; 
    for (int i = 0; i < n; i++) {
        if (a[i] <= height + 30) count++;
    }
    return count;
}

int main() {
    int a[10]; 
    int height; 
    int n = 10; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &height);
    printf("%d", GetApple(a, height, n));

    return 0;
}