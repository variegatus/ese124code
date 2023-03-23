#include <stdio.h>
#include <string.h>

int main()
{
	char a[8] = "abcd";
	char b[8];
	
	printf("a: %s\n",a);
	
	printf("Input a String as b: ");
	scanf("%s", b);
	getchar();
	
	printf("b: %s\n", b);
	
	strcpy(a, b);
	
	printf("a after strcpy: %s\n", a);
	
	printf("length of string b is %d\n", strlen(b));
	
}

