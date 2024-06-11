#include <stdio.h>
int main() {

    int spaceCount = 0, newlineCount = 0, otherCount = 0;
    char ch;

    printf("Please input a string end by #:\n");

    while((ch=getchar()) != '#') {

        if (ch == ' ') spaceCount++;
        else if (ch == '\n') newlineCount++;
        else otherCount++;
        
    }

    printf("space: %d,newline: %d,others: %d\n", spaceCount, newlineCount, otherCount);

}