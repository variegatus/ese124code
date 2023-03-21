#include <stdio.h>

int main () {
	int i, n;
	int sum;
	
	
	sum = 0;
	
	printf ("n = ");
	scanf ("%d", &n);
	
	for (i = 1; i <= n; i++) {
		
		sum = sum + i;
		
	}
	
	printf ("sum = %d\n", sum);
}
