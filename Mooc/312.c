#include <stdio.h>
int main() {
	int number,mm,dd,yy;
	float price;
	printf("Enter item number:\n");
	scanf("%d", &number);
	printf("Enter unit price:\n");
	scanf("%f", &price);
	printf("Enter purchase date (mm/dd/yy):\n");
	scanf("%d/%d/%d", &mm, &dd, &yy);
	printf("Item      Unit     Purchase\n");
	printf("%-9d$ %-9.2f%02d%02d%04d\n", number, price, mm, dd, yy);
	return 0;
}