#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: the name of the created file
 * @text_content: file content
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t content_length;
	ssize_t lw;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		content_length = 0;
		while (text_content[content_length] != '\0')
			content_length++;
		lw = write(fd, text_content, content_length);
		if (lw == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
                                                                                                                                    ~
