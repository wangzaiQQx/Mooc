#include <stdio.h>
int main() {
    int n,k;
    printf("Input n,k:\n");
    scanf("%d,%d", &n, &k);
    int a[1000];
    int sum,i;
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (sum=0, i=0;i<n;i++){
        if (a[i]<=0) sum++;
    }
    if (sum < k) printf("YES");
    else printf("NO");
}