#include "holberton.h"

int main(int argc, char *argv[])
{
	int from, dest, reader = 1024, count = 0;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	from = open(argv[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, FILE_READ_ERROR, argv[1]), exit(98);

	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest == -1)
		dprintf(STDERR_FILENO, FILE_WRITE_ERROR, argv[2]), exit(99);

	while (reader == BUFFER_SIZE)
	{
		reader = read(from, buffer, BUFFER_SIZE);
		if (reader == -1)
			dprintf(STDERR_FILENO, FILE_READ_ERROR, argv[1]), exit(98);

		count = write(dest, buffer, reader);
		if (count == -1)
			dprintf(STDERR_FILENO, FILE_WRITE_ERROR, argv[2]), exit(99);
	}
	if (close(from) == -1)
		dprintf(STDERR_FILENO, FILE_CLOSE_ERROR, from), exit(100);

	if (close(dest) == -1)
		dprintf(STDERR_FILENO, FILE_CLOSE_ERROR, dest), exit(100);
	return (0);
}
