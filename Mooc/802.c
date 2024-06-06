#include<stdio.h>

int fun(int a[], int n);
int fun(int a[], int n){
    int count = 0;
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            for (int k = 0; k < n; k++){
                if (a[i]+a[j] == a[k]) count++;
            }
        }
    }
    return count;
}

int main(){
    int n;
    int a[1000];
    scanf("%d", &n);
    for ( int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("%d", fun(a,n));
}