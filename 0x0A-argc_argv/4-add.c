#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - prit the product of numbers
 * @argc: argument counter
 * @argv: array of argc
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(atoi(argv[i])))
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
			sum = sum + (atoi(argv[i]));
	}
	printf("%d\n", sum);
	return (0);

}
