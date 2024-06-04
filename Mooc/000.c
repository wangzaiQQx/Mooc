// #include <stdio.h>

// //阶乘
// long Fact(int n){
//     if (n < 0) return -1;
//     if (n==0||n==1) return 1;
//     return n*Fact(n-1);
// }

// //斐波那契数列
// long Fibo(int n){
//     if (n <= 1) return n;
//     return Fibo(n-1)+Fibo(n-2);
// }

// int main(){
//     for (int n=0 ;n<=9 ; n++){
//         printf("%d\n", Fibo(n));
//     }
// }

// #include <stdio.h>
// int Fun(int m)
// {   
//    static int n = 0;
//     m /= 2;
//     m = m * 2;

//     if (m)
//     {   
//         n *= m;
//         return(Fun(m - 2));
//     }
//     else 
//         return n;
// }


// int main()
// {   
//     int a, i;
    
//     for (i = 0; i < 2; i++)
//     {    
//         a = Fun(4 + i);
//         printf("%d\n", a);
//     }
    
//     return 0;
// }

#include <stdio.h>
int Square(int i){
    return i * i;
}

int main(void){
    int i = 0;
    i = Square(i);

    for ( ; i<3; i++){
        static int i = 1;
        i += Square(i);
        printf("%d,", i);
    }
    
    printf("%d\n", i);
    return 0;
}
