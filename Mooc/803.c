#include <stdio.h>

int main(){
    for (int i = 123; i<333; i++){
        int x = i + 2000*i + 3000000*i;
        int count = 0;
        int a[10] = {0};
        for (x; x>0; x/=10){
            a[x%10] = 1;
        }
        for (int j = 0; j<10; j++){
            if (a[j] == 1) count++;
        }
        if (count >= 9) printf("%d,%d,%d\n",i,2*i,3*i);
    }
}

// #include<stdio.h>
// int main()
// {

//   int i,m,count=0,j;
//   long n;
//   for(i=123;i<=333;i++)           //因为数字不能重复，所以从123开始；由于后面有3i，所以i循环到333；
//   {
//     count=0;                      //这一处和数组一定要在循环刚开始初始化为零。
//     int a[10]={0};              
//     n=i*1000000+2*i*1000+3*i;    //将i，2i，3i组成一个九位数，方便拆分。
//     do
//     {
//       m=n%10;
//       a[m]++;                    //若拆分的数为5，则a[5]=1，方便下面判断；
//       n=n/10;
//     }while(n!=0);
//     for(j=0;j<10;j++)
//     {
//       if(a[j]==1)
//         count++;
//     }
//     if(count==9)
//     printf("%d,%d,%d\n",i,2*i,3*i);
//   }
// }


