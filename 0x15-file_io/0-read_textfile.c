#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 * O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t Open, Read, Write;
	char *Buffer;

	if (filename == NULL)
		return (0);

	Buffer = malloc(sizeof(char) * letters);
	if (Buffer == NULL)
		return (0);

	Open = open(filename, O_RDONLY);
	Read = read(Open, Buffer, letters);
	Write = write(STDOUT_FILENO, Buffer, Read);

	if (Open == -1 || Read == -1 || Write == -1 || Write != Read)
	{
		free(Buffer);
		return (0);
	}

	free(Buffer);
	close(Open);

	return (Write);
}
