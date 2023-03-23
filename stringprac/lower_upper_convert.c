#include<stdio.h>
#include<string.h>
#define STR_LEN 100

int main()
{
	char initial_string[STR_LEN];
	char target_string[STR_LEN];
	int i = 0;
	int len = 0;
	
	printf("Input initial_string:  ");
	//scanf("%s", initial_string);
	//getchar();
	fgets(initial_string, STR_LEN, stdin);
	
	if ((strlen(initial_string) > 0) && (initial_string[strlen(initial_string) - 1] == '\n'))
        initial_string[strlen(initial_string) - 1] = '\0';
	
	printf("initial_string = %s\n", initial_string);
	
	len = strlen(initial_string);
	
	while(initial_string[i] != '\0')
	{
		if(initial_string [i] >= 'a' && initial_string[i] <= 'z') // current character is lower case letter
			target_string[len-1-i] = initial_string[i] - 'a' + 'A';
		else
			target_string[len-1-i] = initial_string[i];
			
		i++;
	}
	target_string[i] = '\0';
	printf("target_string = %s\n", target_string);
}
