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
	int fd;
	char *buf;
	ssize_t result;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(size_t) * (letters));
	result = read(fd, buf, letters);
	while (*buf != '\0')
	{
		_putchar(*buf);
		buf++;
	}
	close(fd);
	return (result);
}
