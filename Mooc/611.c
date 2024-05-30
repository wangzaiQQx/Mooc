// #include <stdio.h>

// int main(){
//     char ch;   
//     int hang,kong;
//     int i,j;
//     int p;

//     printf("Please input a capital:\n");
//     scanf("%c",&ch);

//     // 行数
//     hang = ch - 'A' + 1;
//     i = 1;

//     while(hang){

//         // 第i行
//         // 空格倒序数
//         kong = hang;
//         while(kong){
//             printf(" ");
//             kong--;
//         }

//         // 正序abc
//         j = 0;   
//         while (j<i){
//             printf("%c",'A'+j);
//             j++;
//         }

//         // 倒序cba
//         p = i-1;
//         while(p){
//             printf("%c",'A'+p-1);
//             p--;
//         } 

//         // 下一行
//         printf("\n");
//         hang--;
//         i++;   
//     }
// }





#include <stdio.h>
int main(){
    char capital;
    printf("Please input a capital:\n");
    scanf(" %c", &capital);

    int rowCount = capital - 'A' + 1;

    for (int i = 1; i <= rowCount; i++){

        for (int space = 0; space <= rowCount - i; space++){
            printf(" ");
        }

        for (int j = 0; j < i; j++){
            printf("%c",'A' + j);
        }

        for (int k = i - 1; k > 0; k--){
            printf("%c", 'A' + k - 1);
        }

        printf("\n");
    }

    return 0;
}