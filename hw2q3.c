#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int x = 100;
	int a, b, c;
	while (x <= 1015) {
		a = x/100;
		b = (-100*a + x)/10;
		c = x - x/10 * 10;
		if (x == a*a*a + b*b*b + c*c*c) {
			printf("%d", x);
		}
		x++;
	}
	
	return 0;
}
