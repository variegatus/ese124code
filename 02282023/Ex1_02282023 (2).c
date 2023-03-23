#include <stdio.h>
#include <stdlib.h>


int main () {
	FILE *inpf, *outf;
	char c;
	
	if ((inpf = fopen ("input.txt", "r")) == NULL) {
		printf ("Error: cannot open file input.txt\n");
		exit (1);
	}
		
	if ((outf = fopen ("output.txt", "w")) == NULL) {
		printf ("Error: cannot open file output.txt\n");
		exit (1);
	}
	
	while ((c = fgetc(inpf)) != EOF) 
	   fprintf (outf, "%c", c);
	
	fclose (inpf);
	fclose (outf);
}
