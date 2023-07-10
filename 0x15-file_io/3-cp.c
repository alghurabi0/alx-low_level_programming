#include "main.h"
#define BUF_SIZE 1024
/**
 * print_error_and_exit - print
 * main - main
 * @message: msg
 * Return: 0
 */
void print_error_and_exit(const char *message)
{
	write(STDERR_FILENO, message, strlen(message));
	write(STDERR_FILENO, "\n", 1);
	exit(1);
}
int main(int argc, char *argv[])
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUF_SIZE];
	int fd_to;
	int fd_from;
	const char *file_to;
	const char *file_from;

	if (argc != 3)
		print_error_and_exit("Usage: cp file_from file_to");
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error_and_exit("Error: Can't read from file");
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP);
	if (fd_to == -1)
		print_error_and_exit("Error: Can't write to file");
	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			print_error_and_exit("Error: Can't write to file");
	}
	if (bytes_read == -1)
		print_error_and_exit("Error: Can't read from file");
	if (close(fd_from) == -1)
		print_error_and_exit("Error: Can't close file descriptor");
	if (close(fd_to) == -1)
		print_error_and_exit("Error: Can't close file descriptor");
	return (0);
}

