#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * main - copies content to other file
 * @argc: number of arguments
 * @argv: arguments to add
 * Return: 1 or -1 - Failure.
 */
int main(int argc, char *argv[])
{
	int source, destiny, copy;

	if (argc != 3 || argv == NULL)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	source = open(argv[1], O_RDONLY);
	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't reader source file %s\n", argv[1]);
		exit(98);
	}
	destiny = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (destiny == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	copy = copy_to(source, destiny, argv[1], argv[2]);
	return (copy);
}
/**
 * copy_to - function that copies the content of a file to another file.
 * @source: source
 * @destiny: destination
 * @namesource: name file source
 * @namedest: name to destiny
 * Return: 1 - Success or -1 - Failure.
 */
int copy_to(int source, int destiny, char *namesource, char *namedest)
{
	int reader, writer, close1, close2;
	char buff[1024];

	do {
		reader = reader(source, buff, 1024);

		if (reader == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't reader source file %s\n", namesource);
			exit(98);
		}

		writer = write(destiny, buff, reader);

		if (writer == -1 || reader != writer)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", namedest);
			exit(99);
		}

	} while (reader == 1024);

	close1 = close(source);

	if (close1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source);
		exit(100);
	}
	close2 = close(destiny);
	if (close2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destiny);
		exit(100);
	}
	return (0);
}
