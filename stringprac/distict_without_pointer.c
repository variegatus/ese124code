#include<stdio.h>
#include<string.h>
#define LEN_STR 100

int main()
{
	unsigned char c[LEN_STR];
	unsigned char distinct[LEN_STR];
	unsigned char counts[LEN_STR];
	int i, j;
	
	memset(distinct, '\0', LEN_STR); //set all bytes to \0
	memset(counts, '\0', LEN_STR);   //set all bytes to \0
	
	printf("Input the string C: ");
	fgets(c, LEN_STR, stdin);
	
	// If the last character is a linefeed character, replace it with  null character \0.
	if ((strlen(c) > 0) && (c[strlen(c) - 1] == '\n'))
        c[strlen(c) - 1] = '\0';
		
	for(i=0; i<strlen(c); i++)
	{
		for(j=0; j<strlen(distinct); j++)
		{
			if(distinct[j] == c[i])
			{
				counts[j]++;
				break;
			}
		}
		
		if(j==strlen(distinct))
		{
			distinct[j]=c[i];
			counts[j]++;
		}
	}
	
	for(i=0; i<strlen(distinct); i++)
	{
		printf("%c-%u\t%d\n", distinct[i], distinct[i], counts[i]);
	}
	return 0;
}
