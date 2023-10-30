#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 * If the file does not exist the user lacks write permissions - -1. Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int Open, Write, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	Open = open(filename, O_WRONLY | O_APPEND);
	Write = write(Write, text_content, len);

	if (Open == -1 || Write == -1)
		return (-1);

	close(Open);

	return (1);
}
