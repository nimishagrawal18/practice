#include <stdio.h>
void main()
{
	char* a;
	scanf("%s",a);
	char c;
	while(*a!='\0')
	{
		a++;
		printf("%c",*a);
	}
}