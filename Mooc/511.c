#include <stdio.h>
#include <math.h>
int main(){
    int x,y,count=0;
    int x0=0,x1=0,x2=0,x3=0,x4=0,x5=0,x6=0,x7=0,x8=0,x9=0;

    printf("Please enter the number:\n");
    scanf("%d",&x);
    y = abs(x);
    if (y==0) count++;
    else{
        while (y){
            switch(y%10){
                case 0: x0++;break;
                case 1: x1++;break;
                case 2: x2++;break;
                case 3: x3++;break;
                case 4: x4++;break;
                case 5: x5++;break;
                case 6: x6++;break;
                case 7: x7++;break;
                case 8: x8++;break;
                case 9: x9++;break;
            }
            y /= 10;
            count++;
        }
    }
    printf("%d: %d bits\n",x,count);
    if (x==0) printf("0: 1\n",x0);
    if (x0!=0) printf("0: %d\n",x0);
    if (x1!=0) printf("1: %d\n",x1);
    if (x2!=0) printf("2: %d\n",x2);   
    if (x3!=0) printf("3: %d\n",x3);
    if (x4!=0) printf("4: %d\n",x4);
    if (x5!=0) printf("5: %d\n",x5);
    if (x6!=0) printf("6: %d\n",x6);   
    if (x7!=0) printf("7: %d\n",x7);   
    if (x8!=0) printf("8: %d\n",x8);  
    if (x9!=0) printf("9: %d\n",x9);
}

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int x, y;
//     int count = 0;
//     int digitCount[10] = {0}; 

//     printf("Please enter the number:\n");
//     scanf("%d", &x);
//     y = abs(x);

//     while (y > 0) {
//         digitCount[y % 10]++;
//         y /= 10;
//         count++;
//     }

//     printf("%d: %d bits\n", x, count);

//     if (x==0) printf("0: 1\n");
//     else {
//         for (int i = 0; i < 10; ++i) {
//             if (digitCount[i] != 0) {
//                 printf("%d: %d\n", i, digitCount[i]);
//             }
//         }
//     }

//     return 0;
// }