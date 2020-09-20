#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void upper(char*);
int main()
{
	char* p, str[50];
	p = str;
	printf("Enter to string => ");
	scanf("%s",str);
	upper(p);

	return 0;
}
void upper(char* x)
{
	while (*x != '\0')
	{
		if (*x >= 'A' && *x <= 'Z')
		{
			*x = (char)(*x - ('A' - 'a'));
			printf("%c", *x);
		}
		else if (*x >= 'a' && *x <= 'z')
		{
			*x = (char)(*x - ('a' - 'A'));
			printf("%c", *x);
		}
		else if (*x >= '0' && *x <= '9')
		{
			printf("%c", *x);
		}
		x++;
	}
}