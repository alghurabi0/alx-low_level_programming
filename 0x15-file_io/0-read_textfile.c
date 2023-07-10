#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stddef.h>
#include <sys/types.h>
/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: the file to read and write
 * @letters: the numer of letters it should read and print
 * Return: the actual numer of letters it could read and print
 * or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buffer;
	ssize_t letter_read;
	ssize_t letter_written;

	if (filename == NULL)
		return (0);
	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}
	letter_read = read(file_descriptor, buffer, letters);
	if (letter_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	letter_written = write(STDOUT_FILENO, buffer, letter_read);
	if (letter_written == -1 || letter_written != letter_read)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	free(buffer);
	close(file_descriptor);
	return (letter_read);
}

