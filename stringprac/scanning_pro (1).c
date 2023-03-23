// L4_P1_Q1

//Reads characters from a text input file and writes them into a text

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	FILE *inp_f, *out_p; // Declaration for fopen() function
	unsigned char c;	//// increase value up to 255
	/*printf("Enter a character: ");
	scanf("%c", &c);
	printf("ASCII value of is %c = %d", c,c); */
	
	if ((inp_f = (fopen("myfile_01.txt", "r"))) == NULL )
	{
		printf("Error: Input File can't be opened.\n'");
		exit(1);
	}
	if ((out_p = (fopen("myfile_2_27.txt", "w"))) == NULL)
	{
		printf("Error: Output File can't be opened.\n'");
		exit(1);
	}
	
	while((c =fgetc(inp_f))!=255)  
	{
		printf("%c", c);
		fprintf(out_p, "%c", c);
	}
	
	fclose(inp_f);
	fclose(out_p);
	
	return 0;
}


