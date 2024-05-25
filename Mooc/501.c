#include<stdio.h>
int main(){
    int x,y,z;
    printf("Man   Women   Children\n" );  
    for (x=0;x<=30;x++){
        for (y=0;y<=30-x;y++){
            z = 30-x-y;
            if (x*3+y*2+z==50){
            printf("%3d%8d%8d\n",x,y,z);
            }
        }
    }
}

