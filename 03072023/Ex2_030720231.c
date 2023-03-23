#include <stdio.h>
#include <stdlib.h>

#define  MAX  100



int main () {
	FILE *f;
	int value [MAX], aux;
	int i = 0, NR, is_swap;
	
	if ((f = fopen ("numbers.txt", "r")) == NULL) {
		printf ("Error: file numbers.txt cannot be opened\n");
		exit (1);
	}
	
	// read all values from the input file and store them in a file
	
	while (fscanf (f, "%d", &value[i]) != EOF)
       	i++;
	
	NR = i;
	
	for (i = 0; i < NR; i++)
	   printf ("%d ", value [i]);
	printf ("\n");
	
	while (is_swap == 1) {
		is_swap = 0;
		
		for (i = 0; i < NR; i++)
		   if (value[i] > value[i + 1]) {
		   	  aux = value [i];
		   	  value [i] = value [i + 1];
		   	  value [i + 1] = aux;
		   	  is_swap = 1;
		   }
		
	}
	
	for (i = 0; i < NR; i++)
	   printf ("%d ", value [i]);
	   
	printf ("\n");
	
}
