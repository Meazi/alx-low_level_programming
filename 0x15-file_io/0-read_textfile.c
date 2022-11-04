#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * read_textfile - A function that reads a text and prints it to std output
 * @filename: pointer to a string
 * @letters: number of letters
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t nletters;
	char *text;

	if (!filename)
		return (0);
	text = malloc(sizeof(char) * letters + 1);
	if (text == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}
	nletters = read(file, text, sizeof(char) * letters);
	if (nletters == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	nletters = write(STDOUT_FILENO, text, nletters);
	if (nletters == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	free(text);
	close(file);
	return (nletters);
}
