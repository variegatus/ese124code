#include <stdio.h>

int main () {
	int i;
	int sum;
	
	sum = 0;
	
	for (i = 1; i <= 25; i++) {
		
		sum = sum + i;
		
	}
	
	printf ("sum = %d\n", sum);
}
