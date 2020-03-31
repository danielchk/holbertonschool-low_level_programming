#include "holberton.h"
/**
 * read_textfile - Read and print the file
 * @filename: name of the file to read
 * @letters: Size of the file
 * Return: Writer.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int name = 0, reader, writer;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(letters * sizeof(char));
	if (buff == NULL)
		return (0);

	name = open(filename, O_RDONLY);
	if (name == -1)
		return (0);

	reader = read(name, buff, letters);
	if (reader == -1)
	{
		free(buff);
		return (0);
	}
	close(name);

	writer = write(STDOUT_FILENO, buff, reader);
	if (writer == -1)
	{
		free(buff);
		return (0);
	}
	free(buff);
	return (writer);
}
