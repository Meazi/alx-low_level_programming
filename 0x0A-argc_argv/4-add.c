#include <stdio.h>
#include <stdlib.h>
/**
 * main - prit the product of numbers
 * @argc: argument counter
 * @argv: array of argc
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, addition = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	if (argc < 1)
		return (0);
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		addition = addition + (atoi(argv[i]));
	}
	printf("%d\n", addition);
	return (0);
}
