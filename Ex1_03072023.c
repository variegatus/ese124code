#include <stdio.h>
#include <stdlib.h>


#define SIZE 26


int main () {
	FILE *f, *o;
	char c;
	int counters [SIZE], i;   // array of counters
	
	if ((f = fopen ("abc.txt", "r")) == NULL) {
		printf ("File abc.xt cannot be opened\n");
		exit (1);
	}
	
	if ((o = fopen ("counters.txt", "w")) == NULL) {
		printf ("File counters.xt cannot be opened\n");
		exit (1);
	}
	
	// initialize all counters
	for (i = 0; i < SIZE; i++)
	   counters [i] = 0;
	   
	// while loop reads the input file char by char
	while ((c = fgetc(f)) != EOF) {
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')    // checks if c is a letter
		   if (c >= 'a' && c <= 'z')
		     counters [c - 'a']++;
		   else
		     if (c >= 'A' && c <= 'Z')
		        counters [c - 'A']++;
	} // while
	
	for (i = 0; i < SIZE; i++) 
	  fprintf (o, "%c %d\n", 'a' + i, counters[i]);
	  
	fclose (f);
	fclose (o);
}
