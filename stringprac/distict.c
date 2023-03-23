#include<stdio.h>
#include<string.h>
#define STR_LEN 100

int main()
{
char my_string[STR_LEN];
char distinct_c[STR_LEN];
char count_c[STR_LEN];
char *tmp;
int index = 0;
int len = 0;
int i;

memset(distinct_c, '\0', STR_LEN);
memset(count_c, '\0', STR_LEN);

printf("Input my_string:  ");
//scanf("%s", initial_string);
//getchar();
fgets(my_string, STR_LEN, stdin);

if ((strlen(my_string) > 0) && (my_string[strlen(my_string) - 1] == '\n'))
        my_string[strlen(my_string) - 1] = '\0';
    len = strlen(my_string);
    printf("len = %d\n", len);

for (i = 0; i<len; i++)
{
tmp = strchr(distinct_c, my_string[i]);
if(tmp == NULL)
{
distinct_c[strlen(distinct_c)] = my_string[i];
tmp = distinct_c + strlen(distinct_c) - 1;
}
index = tmp - distinct_c;
count_c[index] = count_c[index] + 1;
}

for(i = 0; i < strlen(distinct_c); i++)
{
printf("%c\t%d\n", distinct_c[i], count_c[i]);
}

return 0;
}
