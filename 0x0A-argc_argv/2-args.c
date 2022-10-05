#include <stdio.h>
/**
 * main - print all arguments followed by new line
 * @argc: argument count
 * @argv: array of argc
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 0;


	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
