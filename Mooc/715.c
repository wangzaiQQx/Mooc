// #include <stdio.h>
// int coco(int i, int n);

// int coco(int i, int n){
//     if (i == 1) return n + 1;
//     return n*coco(i-1,n)-n+1;
// }


// int main(){
//     int i,n;
//     printf("Input n(1<n<=5):\n");
//     scanf("%d", &i);
//     n = i;
//     if (i>1 && i <= 5) printf("y=%d\n",coco(i,n)-n);
//     else printf("Error!\n");
// }

// #include <stdio.h>

// int coco(int n);

// int coco(int n){
//     int a=4, i, k;
//     while (a){
//         i = a;
//         for (int j=1, k=0; j <= n; j++){
//             if ((i-1)%n==0){
//                 k++;
//                 i = (i-1)*(n-1)/n;
//             }
//             if (k==n) {
//                 return a;
//                 break;
//             }
//         }
//         a++;
//     }
// }

// int coco(int n){
//     int a=4, i, j, k;
//     while (a){
//         i = a;
//         for (j=1, k=0; j <= n; j++){
//             if ((i-1)%n==0){
//                 k++;
//                 i = (i-1)*(n-1)/n;
//             }
//             if (k==n) {
//                 return a;
//                 break;
//             }
//         }
//         a++;
//     }
// }

#include <stdio.h>
int coco(int n);

int coco(int n){
    int a=3, i, j, k;
    do {
        a++;
        i = a;
        for (j=1, k=0; j <= n; j++){
            if ((i-1)%n==0){
                i = (i-1)*(n-1)/n;
                k++;
            }
        }       
    } while(k!=n); 
    return a;
}



int main(){
    int n;
    printf("Input n(1<n<=5):\n");
    scanf("%d", &n);
    if (n>1 && n<=5) printf("y=%d\n",coco(n));
    else printf("Error!\n");
}

