#include <stdio.h>
int main(){
    float p,c;

    printf("Input payment:");
    scanf("%f", &p);

    if (p < 100) c = p;
    else if (p < 200) c = 0.95*p;
    else if (p < 500) c = 0.92*p;
    else if (p < 1000) c = 0.9*p;
    else if (p >= 1000) c = 0.85*p;

    // if (p < 200 && p >= 100) c = 0.95*p;
    // if (p < 500 && p >= 200) c = 0.92*p;
    // if (p < 1000 && p >= 500) c = 0.9*p;
    // if (p >= 1000) c = 0.85*p;

    printf("price = %.1f\n", c);
}