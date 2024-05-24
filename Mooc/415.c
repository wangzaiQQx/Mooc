#include<stdio.h>
#include<math.h>
int main(){
    int area,first_weight;
    float weight,price,area_price;
    scanf("%d,%f",&area,&weight);
    switch(area){
    case 0:
        area_price=3;
        first_weight=10;
        break;
    case 1:
        area_price=4;
        first_weight=10;
        break;
    case 2:
        area_price=5;
        first_weight=15;
        break;
    case 3:
        area_price=6.5;
        first_weight=15;
        break;
    case 4:
        area_price=10;
        first_weight=15;
        break;
    default : printf("Error in Area\n");
    }
    price = first_weight + ceil(weight-1)*area_price;
    printf("Price: %5.2f\n",price);
}