/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;
	int max = 0;

	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c && c == a) {
		printf("%d", 10000 + a * 1000);
	}

	else if (a == b ) {
		printf("%d", 1000 + 100 * a);
	}
	else if (b == c) {
		printf("%d", 1000 + 100 * b);
	}


	else if (a == c)
		printf("%d", 1000 + 100 * c);

	else 
	{
		if (a > b && a > c) 
			max = a;
		else if (b > a && b > c)
			max = b;
		else if (c > a && c > b)
			max = c;

		printf("%d", max*100);

	}
	return 0;

		
}*/