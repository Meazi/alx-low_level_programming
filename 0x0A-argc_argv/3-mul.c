#include <stdio.h>
#include <stdlib.h>
/**
 * main - print multiple of two numbers
 * @argc: argument counter
 * @argv: array of argc
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int result;

	if (argv == NULL)
	{
		return (1);
	}
	if (argc == 1 || argc > 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	result = (atoi(argv[1])) * (atoi(argv[2]));
	printf("%d\n", result);

	return (0);
}
