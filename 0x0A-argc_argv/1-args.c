#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: argument counter
 * @argv: array of argc
 * Return: a non zero value
 */
int main(int argc, char *argv[])
{
	if (argv == NULL)
		return (0);
	if (argc == 1)
		printf("%d\n", 0);
	else
	printf("%d\n", argc - 1);
	return (0);
}
