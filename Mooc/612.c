#include <stdio.h>
int main(){
    char ch = 'F';
    int rowCount = ch - 'A' + 1;

    for (int i = 1; i <= rowCount; i++){

        for (int j = 0; j < i; j++){
           printf("%c", ch - j); 
        }

        printf("\n");
    }

    return 0;
}