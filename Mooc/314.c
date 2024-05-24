#include <stdio.h>
#include <math.h>

int main() {
	int x,y,a,b,qian,bai,shi,ge;
	printf("Input x:\n");
	scanf("%d",&x);
	x = abs(x);
	qian = x/1000;
	bai = x/100%10;
	shi = x/10%10;
	ge = x%10;
	y = 1000*ge+100*shi+10*bai+qian;
	a = y/100;
	b = y%100;
	printf("y=%d\n",y);
	printf("a=%d,b=%d\n",a,b);
	printf("result=%d\n",a*a+b*b);
	return 0;
}