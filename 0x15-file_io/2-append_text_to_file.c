#include "main.h"
/**
 * append_text_to_file - append text to file
 * @filename: name of file
 * @text_content: content of file
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t content_length;
	ssize_t lw;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		content_length = 0;
		while (text_content[content_length] !0 '\0')
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
