#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: argument counter
 * @argv: array of argc
 * Return: a non zero value
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argv[i] == NULL)
		return (1);
	if (argc == 1)
		return (0);
	else
	{
	printf("%d\n", argc - 1);
	}
	return (0);
}
