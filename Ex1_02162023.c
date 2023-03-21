#include <stdio.h>

#define PI   3.1428     // constant PI


int main () {
	float x, t, sum;
	int n, k;
	
	printf ("x (degree): ");
	scanf ("%f", &x);
	
	x = x * PI / 180.0;   // converts x from degrees into radians
	
	printf ("n: ");
	scanf ("%d", &n);
	
	sum = x;
	t = x;
	
	// adds n terms of the series
	for (k = 1; k <= n - 1; k++) {
		t = t * (-1) * x * x / (2 * k) / (2 * k + 1); // next t 
		sum = sum + t;
	} // 
	
	printf ("sin(%f) = %f\n", x, sum);
		
}
