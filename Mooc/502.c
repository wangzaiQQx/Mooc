#include <stdio.h>
#include <time.h>

int main(){
    long long x, y, z;
    for (x = 10; x <= 22; x++){
        y = x * x * x * x * 10000 + x * x * x;
        if (y <= 1000000000) continue;
        for (z = 0; y > 0; y /= 10){
            switch (y % 10){
            case 0:break;
            case 1:z += 1;break;
            case 2:z += 20;break;
            case 3:z += 300;break;
            case 4:z += 4000;break;
            case 5:z += 50000;break;
            case 6:z += 600000;break;
            case 7:z += 7000000;break;
            case 8:z += 80000000;break;
            case 9:z += 900000000;break;
            }
            if (z == 987654321){
                printf("age=%d\n", x);
                break;
            }
        }
    }
}


// #include <stdio.h>
// #include <time.h>
// int main()
// {
//     clock_t start, end;
//     double cpu_time_used;
//     int a = 0;

//     start = clock();

//     while (a <= 100){
//         a++;
//     }
//     end = clock();
//     cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

//     printf("Time used: %f seconds.\n", cpu_time_used);
//     return 0;
// }