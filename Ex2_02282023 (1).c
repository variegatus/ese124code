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
	
	while ((c = fgetc(inpf)) != EOF) {      // read on char	  
	
      if (c == '_' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {   // identifier starts
      	   fprintf (outf, "%c", c);
      	   c = fgetc(inpf);
      	   while (c == '_' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9') {  // rest of the identifier
				fprintf (outf, "%c", c);
				c = fgetc (inpf);
			 } // while
	  } // if
	  
	  if (c >= '0' && c <= '9')   // c is a digit, skip the remaining characters
			while (c == '_' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9')
				c = fgetc (inpf);

	  if (c == ' ' || c == '\n')
      	   fprintf (outf, "%c", c);     // keep ' ' and '\n'
	} // while
	
	
	fclose (inpf);
	fclose (outf);
} // main
