// #include <string.h>
// #define N 10
// #include <stdio.h>
// #define MONTHS 12

// int main(){
//     int i[N];
//     int a[5]={1,2,3,4,5};
//     int b[5];
//     int c[][3]={1,2,3,4,5,6,7,8,9};
//     int d[][3]={{1,2,3},{4,5},{6},{7,8,9}};
//     memcpy(b, a, sizeof(a));

//     int days[2][MONTHS] = {{31,28,31,30,31,30,31,31,30,31,30,31},
//                            {31,29,31,30,31,30,31,31,30,31,30,31}};
//     int year, month,flag = 0;
//     do {
//         printf("Input a month:");
//         scanf("%d,%d", &year, &month);
//     }while(month < 1 || month > 12);
//     if (year%400==0 || year%4==0 && year%100!=0) flag = 1;
//     printf("The number of days is %d\n", days[flag][month - 1]);
//     return 0;
// }

#include <stdio.h>
int main(){
    int i, a = 1, c = 2, b[5] = {0};
    printf("%p, %p, %p, %p\n", b, &c, &a, &i);
    for (i=0; i<=8; i++){
        b[i] = i;
        printf("%d ", b[i]);   
    }
    printf("\nc=%d, a= %d, i=%d\n", c, a, i);
    return 0;
}