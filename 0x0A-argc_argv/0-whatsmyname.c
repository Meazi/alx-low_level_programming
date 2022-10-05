#include <stdio.h>
/**
 * main - print the program name
 * @argc: argument count
 * @argv: array of pointers to the argument
 * Return: 0 (sucess)
 */

int main(int argc, char *argv[])
{
	if (argc == 0)
		return (1);
	printf("%s\n", (argv[0]));
			return (0);
}
