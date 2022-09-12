#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int ch = 'a', cha = 'A';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (cha <= 'Z')
	{
		putchar(cha);
		cha++;
	}
	putchar('\n');
return (0);
}
